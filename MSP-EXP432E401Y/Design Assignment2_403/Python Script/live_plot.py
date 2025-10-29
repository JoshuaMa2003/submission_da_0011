import sys, time, serial, numpy as np
import matplotlib.pyplot as plt
from collections import deque

# --- settings ---
PORT = "COM5"        
BAUD = 115200
SPEC_HISTORY = 120   # frames to keep in spectrogram (~15 s if ~8 fps)
TIMEOUT = 1.0

# open serial
ser = serial.Serial(PORT, BAUD, timeout=TIMEOUT)
time.sleep(0.8)           # give the board a moment after opening the port
ser.write(b'F')           # toggle stream ON in firmware
ser.flush()
print(f"Connected to {PORT} @ {BAUD}")

# live plots
plt.ion()
fig, (ax1, ax2) = plt.subplots(2, 1, figsize=(9,7))

line, = ax1.plot([], [], lw=1)
ax1.set_xlabel("Frequency (Hz)")
ax1.set_ylabel("Normalized magnitude")
ax1.set_ylim(0, 1.05)

spec_buf = deque(maxlen=SPEC_HISTORY)
spec_img = None

ax2.set_xlabel("Time (frames)")
ax2.set_ylabel("Frequency (Hz)")

fs = None
nout = None
freqs = None

def parse_frame(line):
    # Expect: FFT:Fs,Nout,v0,v1,...,v(Nout-1)
    if not line.startswith("FFT:"):
        return None, None, None
    try:
        parts = line.strip().split(",")
        fs_ = int(parts[0].split(":")[1])
        nout_ = int(parts[1])
        vals = np.array([int(x) for x in parts[2:]], dtype=np.int16)
        if len(vals) != nout_:
            return None, None, None
        return fs_, nout_, vals
    except Exception:
        return None, None, None

try:
    t0 = time.time()
    while True:
        raw = ser.readline().decode(errors='ignore').strip()
        if not raw:
            continue

        fs_, nout_, vals = parse_frame(raw)
        if vals is None:
            # ignore non-FFT lines like the clean status prints
            continue

        if fs is None:
            fs = fs_
            nout = nout_
            freqs = np.linspace(0, fs/2, nout, endpoint=False)
            ax1.set_xlim(0, fs/2)
            ax2.set_ylim(0, fs/2)
            print(f"Initialized: Fs={fs}, bins={nout}")

        # normalize 0..1000 back to 0..1
        y = vals.astype(np.float32) / 1000.0

        # ---- spectrum (top) ----
        line.set_data(freqs, y)
        ax1.set_title(f"Spectrum  (Fs={fs} Hz, bins={nout})")
        ax1.figure.canvas.draw_idle()

        # ---- spectrogram (bottom) ----
        spec_buf.append(y)
        spec = np.array(spec_buf).T  # [freq, time]

        if spec_img is None:
            spec_img = ax2.imshow(spec, origin='lower', aspect='auto',
                                  extent=[0, spec.shape[1], 0, fs/2],
                                  interpolation='nearest')
            ax2.set_title("Spectrogram (rolling)")
            fig.tight_layout()
        else:
            spec_img.set_data(spec)
            spec_img.set_extent([0, spec.shape[1], 0, fs/2])

        ax2.figure.canvas.draw_idle()
        plt.pause(0.001)

except KeyboardInterrupt:
    print("Exiting...")
finally:
    ser.close()
