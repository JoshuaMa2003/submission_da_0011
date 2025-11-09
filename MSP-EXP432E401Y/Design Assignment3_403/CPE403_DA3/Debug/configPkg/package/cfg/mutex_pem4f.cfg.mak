# invoke SourceDir generated makefile for mutex.pem4f
mutex.pem4f: .libraries,mutex.pem4f
.libraries,mutex.pem4f: package/cfg/mutex_pem4f.xdl
	$(MAKE) -f C:\Users\joshu\workspace_v12\CPE403_DA3/src/makefile.libs

clean::
	$(MAKE) -f C:\Users\joshu\workspace_v12\CPE403_DA3/src/makefile.libs clean

