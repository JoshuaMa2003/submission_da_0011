/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-K04
 */

#define __nested__
#define __config__

#include <xdc/std.h>

/*
 * ======== GENERATED SECTIONS ========
 *
 *     MODULE INCLUDES
 *
 *     <module-name> INTERNALS
 *     <module-name> INHERITS
 *     <module-name> VTABLE
 *     <module-name> PATCH TABLE
 *     <module-name> DECLARATIONS
 *     <module-name> OBJECT OFFSETS
 *     <module-name> TEMPLATES
 *     <module-name> INITIALIZERS
 *     <module-name> FUNCTION STUBS
 *     <module-name> PROXY BODY
 *     <module-name> OBJECT DESCRIPTOR
 *     <module-name> VIRTUAL FUNCTIONS
 *     <module-name> SYSTEM FUNCTIONS
 *     <module-name> PRAGMAS
 *
 *     INITIALIZATION ENTRY POINT
 *     PROGRAM GLOBALS
 *     CLINK DIRECTIVES
 */


/*
 * ======== MODULE INCLUDES ========
 */

#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/family/arm/lm4/Timer.h>
#include <ti/sysbios/family/arm/lm4/TimestampProvider.h>
#include <ti/sysbios/family/arm/m3/Hwi.h>
#include <ti/sysbios/family/arm/m3/IntrinsicsSupport.h>
#include <ti/sysbios/family/arm/m3/TaskSupport.h>
#include <ti/sysbios/family/arm/msp432e4/init/Boot.h>
#include <ti/sysbios/gates/GateHwi.h>
#include <ti/sysbios/gates/GateMutex.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/sysbios/heaps/HeapMem.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Event.h>
#include <ti/sysbios/knl/Idle.h>
#include <ti/sysbios/knl/Intrinsics.h>
#include <ti/sysbios/knl/Queue.h>
#include <ti/sysbios/knl/Semaphore.h>
#include <ti/sysbios/knl/Swi.h>
#include <ti/sysbios/knl/Task.h>
#include <ti/sysbios/utils/Load.h>
#include <ti/uia/events/DvtTypes.h>
#include <ti/uia/events/UIAErr.h>
#include <ti/uia/events/UIAEvt.h>
#include <ti/uia/loggers/LoggerStopMode.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/runtime/UIAMetaData.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Core.h>
#include <xdc/runtime/Defaults.h>
#include <xdc/runtime/Diags.h>
#include <xdc/runtime/Error.h>
#include <xdc/runtime/Gate.h>
#include <xdc/runtime/Log.h>
#include <xdc/runtime/Main.h>
#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Registry.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/SysMin.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Text.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/TimestampNull.h>
#include <xdc/runtime/Types.h>

/* suppress 'type qualifier is meaningless on cast type' warning */
#if defined(__ti__) && !defined(__clang__)
#pragma diag_suppress 193
#endif
#ifdef __IAR_SYSTEMS_ICC__
#pragma diag_suppress=Pe191
#endif

#if !(defined(__GNUC__))
#if !(defined(__TI_GNU_ATTRIBUTE_SUPPORT__) || defined(__IAR_SYSTEMS_ICC__)) || defined(__ARP32__)
#define __attribute__(x)
#endif
#endif

/*
 * ======== ti.sysbios.BIOS INTERNALS ========
 */


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_BIOS_RtsGateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_BIOS_RtsGateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_BIOS_RtsGateProxy_Module__ ti_sysbios_BIOS_RtsGateProxy_Module__root__V;

/* @@@ ti_sysbios_knl_Queue_Object__ */
typedef struct ti_sysbios_knl_Queue_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
} ti_sysbios_knl_Queue_Object__;

/* @@@ ti_sysbios_knl_Queue_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Queue_Object__ obj;
} ti_sysbios_knl_Queue_Object2__;

/* @@@ ti_sysbios_knl_Semaphore_Object__ */
typedef struct ti_sysbios_knl_Semaphore_Object__ {
    ti_sysbios_knl_Event_Handle event;
    xdc_UInt eventId;
    ti_sysbios_knl_Semaphore_Mode mode;
    volatile xdc_UInt16 count;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Semaphore_Object__;

/* @@@ ti_sysbios_knl_Semaphore_Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Semaphore_Object__ obj;
} ti_sysbios_knl_Semaphore_Object2__;

/* Object__ */
typedef struct ti_sysbios_gates_GateMutex_Object__ {
    const ti_sysbios_gates_GateMutex_Fxns__ *__fxns;
    ti_sysbios_knl_Task_Handle owner;
    ti_sysbios_knl_Semaphore_Object__ Object_field_sem;
} ti_sysbios_gates_GateMutex_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateMutex_Object__ obj;
} ti_sysbios_gates_GateMutex_Object2__;

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_BIOS_RtsGateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_BIOS_RtsGateProxy_Object__ obj;
} ti_sysbios_BIOS_RtsGateProxy_Object2__;


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_lm4_Timer_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Object__ {
    const ti_sysbios_family_arm_lm4_Timer_Fxns__ *__fxns;
    xdc_Bool staticInst;
    xdc_Int id;
    ti_sysbios_family_arm_lm4_Timer_RunMode runMode;
    ti_sysbios_family_arm_lm4_Timer_StartMode startMode;
    xdc_UInt period;
    ti_sysbios_family_arm_lm4_Timer_PeriodType periodType;
    xdc_UInt intNum;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr tickFxn;
    xdc_runtime_Types_FreqHz extFreq;
    ti_sysbios_family_arm_m3_Hwi_Handle hwi;
    xdc_UInt prevThreshold;
    xdc_UInt rollovers;
    xdc_UInt savedCurrCount;
    xdc_Bool altclk;
} ti_sysbios_family_arm_lm4_Timer_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_lm4_Timer_Object__ obj;
} ti_sysbios_family_arm_lm4_Timer_Object2__;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_family_arm_m3_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Object__ {
    const ti_sysbios_family_arm_m3_Hwi_Fxns__ *__fxns;
    xdc_UArg arg;
    ti_sysbios_family_arm_m3_Hwi_FuncPtr fxn;
    ti_sysbios_family_arm_m3_Hwi_Irp irp;
    xdc_UInt8 priority;
    xdc_Int16 intNum;
    __TA_ti_sysbios_family_arm_m3_Hwi_Instance_State__hookEnv hookEnv;
} ti_sysbios_family_arm_m3_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_family_arm_m3_Hwi_Object__ obj;
} ti_sysbios_family_arm_m3_Hwi_Object2__;


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INTERNALS ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432e4.init.Boot INTERNALS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateHwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateHwi_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_gates_GateHwi_Object__ {
    const ti_sysbios_gates_GateHwi_Fxns__ *__fxns;
} ti_sysbios_gates_GateHwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_gates_GateHwi_Object__ obj;
} ti_sysbios_gates_GateHwi_Object2__;


/*
 * ======== ti.sysbios.gates.GateMutex INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_gates_GateMutex_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_gates_GateMutex_Module__;

/* Module__root__V */
extern ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */


/*
 * ======== ti.sysbios.hal.Hwi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_hal_Hwi_Object__ {
    const ti_sysbios_hal_Hwi_Fxns__ *__fxns;
    ti_sysbios_hal_Hwi_HwiProxy_Handle pi;
} ti_sysbios_hal_Hwi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_Object__ obj;
} ti_sysbios_hal_Hwi_Object2__;


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_hal_Hwi_HwiProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_hal_Hwi_HwiProxy_Module__;

/* Module__root__V */
extern ti_sysbios_hal_Hwi_HwiProxy_Module__ ti_sysbios_hal_Hwi_HwiProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_m3_Hwi_Object */

/* Object */
typedef ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_hal_Hwi_HwiProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_hal_Hwi_HwiProxy_Object__ obj;
} ti_sysbios_hal_Hwi_HwiProxy_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_heaps_HeapMem_Object__ {
    const ti_sysbios_heaps_HeapMem_Fxns__ *__fxns;
    xdc_runtime_Memory_Size align;
    __TA_ti_sysbios_heaps_HeapMem_Instance_State__buf buf;
    ti_sysbios_heaps_HeapMem_Header head;
    xdc_SizeT minBlockAlign;
} ti_sysbios_heaps_HeapMem_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Object__ obj;
} ti_sysbios_heaps_HeapMem_Object2__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__;

/* Module__root__V */
extern ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateMutex_Object */

/* Object */
typedef ti_sysbios_gates_GateMutex_Object__ ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_heaps_HeapMem_Module_GateProxy_Object__ obj;
} ti_sysbios_heaps_HeapMem_Module_GateProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Clock INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Clock_Object__ {
    ti_sysbios_knl_Queue_Elem elem;
    xdc_UInt32 timeout;
    xdc_UInt32 currTimeout;
    xdc_UInt32 period;
    volatile xdc_Bool active;
    ti_sysbios_knl_Clock_FuncPtr fxn;
    xdc_UArg arg;
} ti_sysbios_knl_Clock_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_Object__ obj;
} ti_sysbios_knl_Clock_Object2__;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Clock_TimerProxy_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Clock_TimerProxy_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Clock_TimerProxy_Module__ ti_sysbios_knl_Clock_TimerProxy_Module__root__V;

/* <-- ti_sysbios_family_arm_lm4_Timer_Object */

/* Object */
typedef ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_knl_Clock_TimerProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Clock_TimerProxy_Object__ obj;
} ti_sysbios_knl_Clock_TimerProxy_Object2__;


/*
 * ======== ti.sysbios.knl.Event INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Event_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Event_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Event_Object__ {
    volatile xdc_UInt postedEvents;
    ti_sysbios_knl_Queue_Object__ Object_field_pendQ;
} ti_sysbios_knl_Event_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Event_Object__ obj;
} ti_sysbios_knl_Event_Object2__;


/*
 * ======== ti.sysbios.knl.Idle INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Queue_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Queue_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */


/*
 * ======== ti.sysbios.knl.Semaphore INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Semaphore_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Semaphore_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V;

/* <-- ti_sysbios_knl_Semaphore_Object */


/*
 * ======== ti.sysbios.knl.Swi INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Swi_Module__ {
    xdc_runtime_Types_Link link;
} ti_sysbios_knl_Swi_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V;

/* Object__ */
typedef struct ti_sysbios_knl_Swi_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    ti_sysbios_knl_Swi_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_UInt priority;
    xdc_UInt mask;
    xdc_Bool posted;
    xdc_UInt initTrigger;
    xdc_UInt trigger;
    ti_sysbios_knl_Queue_Handle readyQ;
    __TA_ti_sysbios_knl_Swi_Instance_State__hookEnv hookEnv;
} ti_sysbios_knl_Swi_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Swi_Object__ obj;
} ti_sysbios_knl_Swi_Object2__;


/*
 * ======== ti.sysbios.knl.Task INTERNALS ========
 */

/* Module__ */
typedef struct ti_sysbios_knl_Task_Module__ {
    xdc_runtime_Types_Link link;
    xdc_runtime_Types_DiagsMask mask;
} ti_sysbios_knl_Task_Module__;

/* Module__root__V */
extern ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V;

/* <-- ti_sysbios_knl_Queue_Object */

/* Object__ */
typedef struct ti_sysbios_knl_Task_Object__ {
    ti_sysbios_knl_Queue_Elem qElem;
    volatile xdc_Int priority;
    xdc_UInt mask;
    xdc_Ptr context;
    ti_sysbios_knl_Task_Mode mode;
    ti_sysbios_knl_Task_PendElem *pendElem;
    xdc_SizeT stackSize;
    __TA_ti_sysbios_knl_Task_Instance_State__stack stack;
    xdc_runtime_IHeap_Handle stackHeap;
    ti_sysbios_knl_Task_FuncPtr fxn;
    xdc_UArg arg0;
    xdc_UArg arg1;
    xdc_Ptr env;
    __TA_ti_sysbios_knl_Task_Instance_State__hookEnv hookEnv;
    xdc_Bool vitalTaskFlag;
    ti_sysbios_knl_Queue_Handle readyQ;
    xdc_UInt curCoreId;
    xdc_UInt affinity;
    xdc_runtime_Types_CordAddr __name;
} ti_sysbios_knl_Task_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_sysbios_knl_Task_Object__ obj;
} ti_sysbios_knl_Task_Object2__;


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INTERNALS ========
 */


/*
 * ======== ti.sysbios.utils.Load INTERNALS ========
 */


/*
 * ======== ti.uia.events.DvtTypes INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAErr INTERNALS ========
 */


/*
 * ======== ti.uia.events.UIAEvt INTERNALS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode INTERNALS ========
 */

/* Module__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module__ {
    xdc_runtime_Types_Link link;
} ti_uia_loggers_LoggerStopMode_Module__;

/* Module__root__V */
extern ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V;

/* Object__ */
typedef struct ti_uia_loggers_LoggerStopMode_Object__ {
    const ti_uia_loggers_LoggerStopMode_Fxns__ *__fxns;
    xdc_Bool enabled;
    xdc_Int16 instanceId;
    xdc_UInt32 bufSize;
    xdc_UArg *buffer;
    xdc_UArg *write;
    xdc_UArg *end;
    xdc_SizeT maxEventSizeUArgs;
    xdc_SizeT maxEventSize;
    xdc_UInt16 numBytesInPrevEvent;
    xdc_Bits32 droppedEvents;
    xdc_UInt16 eventSequenceNum;
    xdc_UInt16 pktSequenceNum;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__hdr hdr;
    __TA_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray packetArray;
} ti_uia_loggers_LoggerStopMode_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    ti_uia_loggers_LoggerStopMode_Object__ obj;
} ti_uia_loggers_LoggerStopMode_Object2__;


/*
 * ======== ti.uia.runtime.EventHdr INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor INTERNALS ========
 */


/*
 * ======== ti.uia.runtime.UIAMetaData INTERNALS ========
 */


/*
 * ======== xdc.runtime.Assert INTERNALS ========
 */


/*
 * ======== xdc.runtime.Core INTERNALS ========
 */


/*
 * ======== xdc.runtime.Defaults INTERNALS ========
 */


/*
 * ======== xdc.runtime.Diags INTERNALS ========
 */


/*
 * ======== xdc.runtime.Error INTERNALS ========
 */


/*
 * ======== xdc.runtime.Gate INTERNALS ========
 */


/*
 * ======== xdc.runtime.Log INTERNALS ========
 */


/*
 * ======== xdc.runtime.Main INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module__ {
    xdc_runtime_Types_DiagsMask mask;
} xdc_runtime_Main_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Main_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Main_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Main_Module_GateProxy_Module__ xdc_runtime_Main_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_Main_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Main_Module_GateProxy_Object__ obj;
} xdc_runtime_Main_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.Memory INTERNALS ========
 */


/*
 * ======== xdc.runtime.Memory_HeapProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_Memory_HeapProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_Memory_HeapProxy_Module__;

/* Module__root__V */
extern xdc_runtime_Memory_HeapProxy_Module__ xdc_runtime_Memory_HeapProxy_Module__root__V;

/* <-- ti_sysbios_heaps_HeapMem_Object */

/* Object */
typedef ti_sysbios_heaps_HeapMem_Object__ xdc_runtime_Memory_HeapProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_Memory_HeapProxy_Object__ obj;
} xdc_runtime_Memory_HeapProxy_Object2__;


/*
 * ======== xdc.runtime.Registry INTERNALS ========
 */


/*
 * ======== xdc.runtime.Startup INTERNALS ========
 */


/*
 * ======== xdc.runtime.SysMin INTERNALS ========
 */


/*
 * ======== xdc.runtime.System INTERNALS ========
 */


/*
 * ======== xdc.runtime.System_Module_GateProxy INTERNALS ========
 */

/* Module__ */
typedef struct xdc_runtime_System_Module_GateProxy_Module__ {
    xdc_runtime_Types_Link link;
} xdc_runtime_System_Module_GateProxy_Module__;

/* Module__root__V */
extern xdc_runtime_System_Module_GateProxy_Module__ xdc_runtime_System_Module_GateProxy_Module__root__V;

/* <-- ti_sysbios_gates_GateHwi_Object */

/* Object */
typedef ti_sysbios_gates_GateHwi_Object__ xdc_runtime_System_Module_GateProxy_Object__;

/* Object2__ */
typedef struct {
    xdc_runtime_Types_InstHdr hdr;
    xdc_runtime_System_Module_GateProxy_Object__ obj;
} xdc_runtime_System_Module_GateProxy_Object2__;


/*
 * ======== xdc.runtime.System_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Text INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp INTERNALS ========
 */


/*
 * ======== xdc.runtime.TimestampNull INTERNALS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INTERNALS ========
 */


/*
 * ======== xdc.runtime.Types INTERNALS ========
 */


/*
 * ======== INHERITS ========
 */

#pragma DATA_SECTION(xdc_runtime_ITimestampClient_Interface__BASE__C, ".const:xdc_runtime_ITimestampClient_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampClient_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ITimestampProvider_Interface__BASE__C, ".const:xdc_runtime_ITimestampProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ITimestampProvider_Interface__BASE__C = {&xdc_runtime_ITimestampClient_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ISystemSupport_Interface__BASE__C, ".const:xdc_runtime_ISystemSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ISystemSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IGateProvider_Interface__BASE__C, ".const:xdc_runtime_IGateProvider_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IModule_Interface__BASE__C, ".const:xdc_runtime_IModule_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IModule_Interface__BASE__C = {NULL};

#pragma DATA_SECTION(xdc_runtime_IFilterLogger_Interface__BASE__C, ".const:xdc_runtime_IFilterLogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IFilterLogger_Interface__BASE__C = {&xdc_runtime_ILogger_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_events_IUIAEvent_Interface__BASE__C, ".const:ti_uia_events_IUIAEvent_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_events_IUIAEvent_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_ILogger_Interface__BASE__C, ".const:xdc_runtime_ILogger_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_ILogger_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(xdc_runtime_IHeap_Interface__BASE__C, ".const:xdc_runtime_IHeap_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base xdc_runtime_IHeap_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, ".const:ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C = {&xdc_runtime_IModule_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_IUIATransfer_Interface__BASE__C, ".const:ti_uia_runtime_IUIATransfer_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_IUIATransfer_Interface__BASE__C = {&xdc_runtime_IFilterLogger_Interface__BASE__C};

#pragma DATA_SECTION(ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, ".const:ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C");
__FAR__ const xdc_runtime_Types_Base ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C = {&ti_uia_runtime_IUIATransfer_Interface__BASE__C};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C");
const ti_sysbios_family_arm_m3_IntrinsicsSupport_Fxns__ ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C = {
    &ti_sysbios_interfaces_IIntrinsicsSupport_Interface__BASE__C, /* __base */
    &ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8030, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateHwi VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__FXNS__C, ".const:ti_sysbios_gates_GateHwi_Module__FXNS__C");
const ti_sysbios_gates_GateHwi_Fxns__ ti_sysbios_gates_GateHwi_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateHwi_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateHwi_query__E,
    ti_sysbios_gates_GateHwi_enter__E,
    ti_sysbios_gates_GateHwi_leave__E,
    {
        ti_sysbios_gates_GateHwi_Object__create__S,
        ti_sysbios_gates_GateHwi_Object__delete__S,
        ti_sysbios_gates_GateHwi_Handle__label__S,
        0x8037, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.gates.GateMutex VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__FXNS__C, ".const:ti_sysbios_gates_GateMutex_Module__FXNS__C");
const ti_sysbios_gates_GateMutex_Fxns__ ti_sysbios_gates_GateMutex_Module__FXNS__C = {
    &xdc_runtime_IGateProvider_Interface__BASE__C, /* __base */
    &ti_sysbios_gates_GateMutex_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_gates_GateMutex_query__E,
    ti_sysbios_gates_GateMutex_enter__E,
    ti_sysbios_gates_GateMutex_leave__E,
    {
        ti_sysbios_gates_GateMutex_Object__create__S,
        ti_sysbios_gates_GateMutex_Object__delete__S,
        ti_sysbios_gates_GateMutex_Handle__label__S,
        0x8038, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.heaps.HeapMem VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__FXNS__C, ".const:ti_sysbios_heaps_HeapMem_Module__FXNS__C");
const ti_sysbios_heaps_HeapMem_Fxns__ ti_sysbios_heaps_HeapMem_Module__FXNS__C = {
    &xdc_runtime_IHeap_Interface__BASE__C, /* __base */
    &ti_sysbios_heaps_HeapMem_Module__FXNS__C.__sfxns, /* __sysp */
    ti_sysbios_heaps_HeapMem_alloc__E,
    ti_sysbios_heaps_HeapMem_free__E,
    ti_sysbios_heaps_HeapMem_isBlocking__E,
    ti_sysbios_heaps_HeapMem_getStats__E,
    {
        ti_sysbios_heaps_HeapMem_Object__create__S,
        ti_sysbios_heaps_HeapMem_Object__delete__S,
        ti_sysbios_heaps_HeapMem_Handle__label__S,
        0x8033, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAErr VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__FXNS__C, ".const:ti_uia_events_UIAErr_Module__FXNS__C");
const ti_uia_events_UIAErr_Fxns__ ti_uia_events_UIAErr_Module__FXNS__C = {
    &ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAErr_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8016, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.events.UIAEvt VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__FXNS__C, ".const:ti_uia_events_UIAEvt_Module__FXNS__C");
const ti_uia_events_UIAEvt_Fxns__ ti_uia_events_UIAEvt_Module__FXNS__C = {
    &ti_uia_events_IUIAEvent_Interface__BASE__C, /* __base */
    &ti_uia_events_UIAEvt_Module__FXNS__C.__sfxns, /* __sysp */
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8017, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__FXNS__C, ".const:ti_uia_loggers_LoggerStopMode_Module__FXNS__C");
const ti_uia_loggers_LoggerStopMode_Fxns__ ti_uia_loggers_LoggerStopMode_Module__FXNS__C = {
    &ti_uia_runtime_ILoggerSnapshot_Interface__BASE__C, /* __base */
    &ti_uia_loggers_LoggerStopMode_Module__FXNS__C.__sfxns, /* __sysp */
    ti_uia_loggers_LoggerStopMode_enable__E,
    ti_uia_loggers_LoggerStopMode_disable__E,
    ti_uia_loggers_LoggerStopMode_write0__E,
    ti_uia_loggers_LoggerStopMode_write1__E,
    ti_uia_loggers_LoggerStopMode_write2__E,
    ti_uia_loggers_LoggerStopMode_write4__E,
    ti_uia_loggers_LoggerStopMode_write8__E,
    ti_uia_loggers_LoggerStopMode_setFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getFilterLevel__E,
    ti_uia_loggers_LoggerStopMode_getTransferType__E,
    ti_uia_loggers_LoggerStopMode_getContents__E,
    ti_uia_loggers_LoggerStopMode_isEmpty__E,
    ti_uia_loggers_LoggerStopMode_getMaxLength__E,
    ti_uia_loggers_LoggerStopMode_getInstanceId__E,
    ti_uia_loggers_LoggerStopMode_getPriority__E,
    ti_uia_loggers_LoggerStopMode_setPriority__E,
    ti_uia_loggers_LoggerStopMode_reset__E,
    ti_uia_loggers_LoggerStopMode_writeMemoryRange__E,
    {
        ti_uia_loggers_LoggerStopMode_Object__create__S,
        ti_uia_loggers_LoggerStopMode_Object__delete__S,
        ti_uia_loggers_LoggerStopMode_Handle__label__S,
        0x803d, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.SysMin VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__FXNS__C, ".const:xdc_runtime_SysMin_Module__FXNS__C");
const xdc_runtime_SysMin_Fxns__ xdc_runtime_SysMin_Module__FXNS__C = {
    &xdc_runtime_ISystemSupport_Interface__BASE__C, /* __base */
    &xdc_runtime_SysMin_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_SysMin_abort__E,
    xdc_runtime_SysMin_exit__E,
    xdc_runtime_SysMin_flush__E,
    xdc_runtime_SysMin_putch__E,
    xdc_runtime_SysMin_ready__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x800e, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.Timestamp VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__FXNS__C, ".const:xdc_runtime_Timestamp_Module__FXNS__C");
const xdc_runtime_Timestamp_Fxns__ xdc_runtime_Timestamp_Module__FXNS__C = {
    &xdc_runtime_ITimestampClient_Interface__BASE__C, /* __base */
    &xdc_runtime_Timestamp_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_Timestamp_get32__E,
    xdc_runtime_Timestamp_get64__E,
    xdc_runtime_Timestamp_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8010, /* __mid */
    } /* __sfxns */
};


/*
 * ======== xdc.runtime.TimestampNull VTABLE ========
 */

/* Module__FXNS__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__FXNS__C, ".const:xdc_runtime_TimestampNull_Module__FXNS__C");
const xdc_runtime_TimestampNull_Fxns__ xdc_runtime_TimestampNull_Module__FXNS__C = {
    &xdc_runtime_ITimestampProvider_Interface__BASE__C, /* __base */
    &xdc_runtime_TimestampNull_Module__FXNS__C.__sfxns, /* __sysp */
    xdc_runtime_TimestampNull_get32__E,
    xdc_runtime_TimestampNull_get64__E,
    xdc_runtime_TimestampNull_getFreq__E,
    {
        NULL, /* __create */
        NULL, /* __delete */
        NULL, /* __label */
        0x8011, /* __mid */
    } /* __sfxns */
};


/*
 * ======== ti.sysbios.BIOS DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_BIOS_Module_State__ {
    xdc_runtime_Types_FreqHz cpuFreq;
    xdc_UInt rtsGateCount;
    xdc_IArg rtsGateKey;
    ti_sysbios_BIOS_RtsGateProxy_Handle rtsGate;
    ti_sysbios_BIOS_ThreadType threadType;
    __TA_ti_sysbios_BIOS_Module_State__smpThreadType smpThreadType;
    volatile ti_sysbios_BIOS_StartFuncPtr startFunc;
    volatile ti_sysbios_BIOS_ExitFuncPtr exitFunc;
} ti_sysbios_BIOS_Module_State__;

/* --> ti_sysbios_BIOS_startFunc */
extern xdc_Void ti_sysbios_BIOS_startFunc(xdc_Void);

/* --> ti_sysbios_BIOS_exitFunc */
extern xdc_Void ti_sysbios_BIOS_exitFunc(xdc_Int f_arg0);

/* Module__state__V */
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V;


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_Timer_Module_State__ {
    xdc_UInt availMask;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__device device;
    __TA_ti_sysbios_family_arm_lm4_Timer_Module_State__handles handles;
} ti_sysbios_family_arm_lm4_Timer_Module_State__;

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[8];

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[8];

/* Module__state__V */
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V;

/* --> ti_sysbios_family_arm_lm4_Timer_enableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_enableTiva(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_lm4_Timer_disableTiva */
extern xdc_Void ti_sysbios_family_arm_lm4_Timer_disableTiva(xdc_Int f_arg0);


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ {
    ti_sysbios_family_arm_lm4_Timer_Handle timer;
    volatile xdc_UInt32 hi;
} ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__;

/* Module__state__V */
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V;


/*
 * ======== ti.sysbios.family.arm.m3.Hwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2];

/* Module_State__ */
typedef struct ti_sysbios_family_arm_m3_Hwi_Module_State__ {
    xdc_Char *taskSP;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive excActive;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext excContext;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack excStack;
    xdc_Ptr isrStack;
    xdc_Ptr isrStackBase;
    xdc_Ptr isrStackSize;
    xdc_Ptr vectorTableBase;
    xdc_UInt swiTaskKeys;
    xdc_Ptr dispatchTable;
    volatile xdc_Bool vnvicFlushRequired;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinity intAffinity;
    __TA_ti_sysbios_family_arm_m3_Hwi_Module_State__intAffinityMasks intAffinityMasks;
} ti_sysbios_family_arm_m3_Hwi_Module_State__;

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1];

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1];

/* --> __TI_STACK_BASE */
extern void* __TI_STACK_BASE;

/* --> __TI_STACK_SIZE */
extern void* __TI_STACK_SIZE;

/* Module__state__V */
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V;

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2];

/* --> ti_sysbios_knl_Swi_disable__E */
extern xdc_UInt ti_sysbios_knl_Swi_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Swi_restore__E */
extern xdc_Void ti_sysbios_knl_Swi_restore__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Swi_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Swi_restoreHwi__E(xdc_UInt f_arg0);

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restoreHwi__E */
extern xdc_Void ti_sysbios_knl_Task_restoreHwi__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432e4.init.Boot DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.gates.GateHwi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1];


/*
 * ======== ti.sysbios.gates.GateMutex DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2];


/*
 * ======== ti.sysbios.hal.Hwi DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1];

/* --> __primary_heap_start__ */
extern xdc_Char* __primary_heap_start__;

/* --> __primary_heap_end__ */
extern xdc_Char* __primary_heap_end__;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Clock DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_knl_Clock_Module_State__ {
    volatile xdc_UInt32 ticks;
    xdc_UInt swiCount;
    ti_sysbios_knl_Clock_TimerProxy_Handle timer;
    ti_sysbios_knl_Swi_Handle swi;
    volatile xdc_UInt numTickSkip;
    xdc_UInt32 nextScheduledTick;
    xdc_UInt32 maxSkippable;
    xdc_Bool inWorkFunc;
    volatile xdc_Bool startDuringWorkFunc;
    xdc_Bool ticking;
    ti_sysbios_knl_Queue_Object__ Object_field_clockQ;
} ti_sysbios_knl_Clock_Module_State__;

/* Module__state__V */
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V;

/* --> ti_sysbios_knl_Clock_doTick__I */
extern xdc_Void ti_sysbios_knl_Clock_doTick__I(xdc_UArg f_arg0);


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Event DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Idle DECLARATIONS ========
 */

/* --> Power_idleFunc */
extern xdc_Void Power_idleFunc(xdc_Void);

/* --> ti_sysbios_hal_Hwi_checkStack */
extern xdc_Void ti_sysbios_hal_Hwi_checkStack(xdc_Void);

/* --> ti_sysbios_knl_Idle_funcList__A */
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[3];

/* --> ti_sysbios_knl_Idle_coreList__A */
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[3];


/*
 * ======== ti.sysbios.knl.Intrinsics DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Queue DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Semaphore DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.knl.Swi DECLARATIONS ========
 */

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Swi_Module_State__ {
    volatile xdc_Bool locked;
    xdc_UInt curSet;
    xdc_UInt curTrigger;
    ti_sysbios_knl_Swi_Handle curSwi;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Swi_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Swi_Module_State__constructedSwis constructedSwis;
} ti_sysbios_knl_Swi_Module_State__;

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16];

/* Module__state__V */
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V;

/* --> ti_sysbios_knl_Task_disable__E */
extern xdc_UInt ti_sysbios_knl_Task_disable__E(xdc_Void);

/* --> ti_sysbios_knl_Task_restore__E */
extern xdc_Void ti_sysbios_knl_Task_restore__E(xdc_UInt f_arg0);


/*
 * ======== ti.sysbios.knl.Task DECLARATIONS ========
 */

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512] __attribute__ ((section(".bss:taskStackSection"), aligned(8)));
#endif

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1];

/* Module_State__ */
typedef struct ti_sysbios_knl_Task_Module_State__ {
    volatile xdc_Bool locked;
    volatile xdc_UInt curSet;
    volatile xdc_Bool workFlag;
    xdc_UInt vitalTasks;
    ti_sysbios_knl_Task_Handle curTask;
    ti_sysbios_knl_Queue_Handle curQ;
    __TA_ti_sysbios_knl_Task_Module_State__readyQ readyQ;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurSet smpCurSet;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurMask smpCurMask;
    __TA_ti_sysbios_knl_Task_Module_State__smpCurTask smpCurTask;
    __TA_ti_sysbios_knl_Task_Module_State__smpReadyQ smpReadyQ;
    __TA_ti_sysbios_knl_Task_Module_State__idleTask idleTask;
    __TA_ti_sysbios_knl_Task_Module_State__constructedTasks constructedTasks;
    ti_sysbios_knl_Queue_Object__ Object_field_inactiveQ;
    ti_sysbios_knl_Queue_Object__ Object_field_terminatedQ;
} ti_sysbios_knl_Task_Module_State__;

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16];

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1];

/* Module__state__V */
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V;

/* --> ti_sysbios_utils_Load_taskRegHook__E */
extern xdc_Void ti_sysbios_utils_Load_taskRegHook__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Task_hooks__A */
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1];


/*
 * ======== ti.sysbios.knl.Task_SupportProxy DECLARATIONS ========
 */


/*
 * ======== ti.sysbios.utils.Load DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_sysbios_utils_Load_Module_State__ {
    xdc_Int taskHId;
    __TA_ti_sysbios_utils_Load_Module_State__taskStartTime taskStartTime;
    xdc_UInt32 timeElapsed;
    __TA_ti_sysbios_utils_Load_Module_State__runningTask runningTask;
    xdc_Bool firstSwitchDone;
    xdc_UInt32 swiStartTime;
    ti_sysbios_utils_Load_HookContext swiEnv;
    __TA_ti_sysbios_utils_Load_Module_State__taskEnv taskEnv;
    xdc_UInt32 swiCnt;
    xdc_UInt32 hwiStartTime;
    ti_sysbios_utils_Load_HookContext hwiEnv;
    xdc_UInt32 hwiCnt;
    xdc_UInt32 timeSlotCnt;
    xdc_UInt32 minLoop;
    xdc_UInt32 minIdle;
    xdc_UInt32 t0;
    xdc_UInt32 idleCnt;
    xdc_UInt32 cpuLoad;
    xdc_UInt32 taskEnvLen;
    xdc_UInt32 taskNum;
    xdc_Bool powerEnabled;
    xdc_UInt32 idleStartTime;
    xdc_UInt32 busyStartTime;
    xdc_UInt32 busyTime;
    ti_sysbios_knl_Queue_Object__ Object_field_taskList;
} ti_sysbios_utils_Load_Module_State__;

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1];

/* --> ti_sysbios_utils_Load_Module_State_0_taskEnv__A */
__T1_ti_sysbios_utils_Load_Module_State__taskEnv ti_sysbios_utils_Load_Module_State_0_taskEnv__A[1];

/* Module__state__V */
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V;


/*
 * ======== ti.uia.events.DvtTypes DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAErr DECLARATIONS ========
 */


/*
 * ======== ti.uia.events.UIAEvt DECLARATIONS ========
 */


/*
 * ======== ti.uia.loggers.LoggerStopMode DECLARATIONS ========
 */

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48] __attribute__ ((aligned(128)));
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512] __attribute__ ((aligned(128)));
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48] __attribute__ ((aligned(128)));
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024] __attribute__ ((aligned(128)));
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48] __attribute__ ((aligned(128)));
#endif

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024];
#if !(defined(__MACH__) && defined(__APPLE__))
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024] __attribute__ ((aligned(128)));
#endif

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3];

/* Module_State__ */
typedef struct ti_uia_loggers_LoggerStopMode_Module_State__ {
    xdc_Bool enabled;
    xdc_runtime_Diags_Mask level1;
    xdc_runtime_Diags_Mask level2;
    xdc_runtime_Diags_Mask level3;
} ti_uia_loggers_LoggerStopMode_Module_State__;

/* Module__state__V */
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V;


/*
 * ======== ti.uia.runtime.EventHdr DECLARATIONS ========
 */


/*
 * ======== ti.uia.runtime.QueueDescriptor DECLARATIONS ========
 */

/* Module_State__ */
typedef struct ti_uia_runtime_QueueDescriptor_Module_State__ {
    xdc_Ptr mPtrToFirstDescriptor;
    xdc_UInt mUpdateCount;
    xdc_UInt32 is5555ifInitialized;
} ti_uia_runtime_QueueDescriptor_Module_State__;

/* Module__state__V */
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V;


/*
 * ======== ti.uia.runtime.UIAMetaData DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Assert DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Core DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Defaults DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Diags DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Error DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Error_Module_State__ {
    xdc_UInt16 count;
} xdc_runtime_Error_Module_State__;

/* Module__state__V */
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V;


/*
 * ======== xdc.runtime.Gate DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Log DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Main_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Memory DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Memory_Module_State__ {
    xdc_SizeT maxDefaultTypeAlign;
} xdc_runtime_Memory_Module_State__;

/* Module__state__V */
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V;


/*
 * ======== xdc.runtime.Memory_HeapProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Registry DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Registry_Module_State__ {
    xdc_runtime_Registry_Desc *listHead;
    xdc_runtime_Types_ModuleId curId;
} xdc_runtime_Registry_Module_State__;

/* Module__state__V */
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V;


/*
 * ======== xdc.runtime.Startup DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Startup_Module_State__ {
    xdc_Int *stateTab;
    xdc_Bool execFlag;
    xdc_Bool rtsDoneFlag;
} xdc_runtime_Startup_Module_State__;

/* Module__state__V */
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V;

/* --> ti_sysbios_hal_Hwi_initStack */
extern xdc_Void ti_sysbios_hal_Hwi_initStack(xdc_Void);

/* --> xdc_runtime_Startup_firstFxns__A */
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[4];

/* --> xdc_runtime_Startup_lastFxns__A */
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1];

/* --> xdc_runtime_System_Module_startup__E */
extern xdc_Int xdc_runtime_System_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_SysMin_Module_startup__E */
extern xdc_Int xdc_runtime_SysMin_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Clock_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Clock_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Swi_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Swi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_knl_Task_Module_startup__E */
extern xdc_Int ti_sysbios_knl_Task_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_hal_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_hal_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_m3_Hwi_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_m3_Hwi_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E(xdc_Int f_arg0);

/* --> ti_sysbios_family_arm_lm4_Timer_Module_startup__E */
extern xdc_Int ti_sysbios_family_arm_lm4_Timer_Module_startup__E(xdc_Int f_arg0);

/* --> ti_uia_loggers_LoggerStopMode_Module_startup__E */
extern xdc_Int ti_uia_loggers_LoggerStopMode_Module_startup__E(xdc_Int f_arg0);

/* --> xdc_runtime_Startup_sfxnTab__A */
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10];

/* --> xdc_runtime_Startup_sfxnRts__A */
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10];


/*
 * ======== xdc.runtime.SysMin DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_SysMin_Module_State__ {
    __TA_xdc_runtime_SysMin_Module_State__outbuf outbuf;
    xdc_UInt outidx;
    xdc_Bool wrapped;
} xdc_runtime_SysMin_Module_State__;

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V;

/* --> xdc_runtime_SysMin_output__I */
extern xdc_Void xdc_runtime_SysMin_output__I(xdc_Char* f_arg0,xdc_UInt f_arg1);


/*
 * ======== xdc.runtime.System DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_System_Module_State__ {
    __TA_xdc_runtime_System_Module_State__atexitHandlers atexitHandlers;
    xdc_Int numAtexitHandlers;
} xdc_runtime_System_Module_State__;

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2];

/* Module__state__V */
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V;

/* --> xdc_runtime_System_printfExtend__I */
extern xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char** f_arg0,xdc_CString* f_arg1,xdc_VaList* f_arg2,xdc_runtime_System_ParseData* f_arg3);


/*
 * ======== xdc.runtime.System_Module_GateProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Text DECLARATIONS ========
 */

/* Module_State__ */
typedef struct xdc_runtime_Text_Module_State__ {
    xdc_CPtr charBase;
    xdc_CPtr nodeBase;
} xdc_runtime_Text_Module_State__;

/* Module__state__V */
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V;

/* --> xdc_runtime_Text_charTab__A */
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8169];

/* --> xdc_runtime_Text_nodeTab__A */
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[62];


/*
 * ======== xdc.runtime.Timestamp DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.TimestampNull DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Timestamp_SupportProxy DECLARATIONS ========
 */


/*
 * ======== xdc.runtime.Types DECLARATIONS ========
 */


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Instance_State_sem__O, ".const:ti_sysbios_gates_GateMutex_Instance_State_sem__O");
__FAR__ const xdc_SizeT ti_sysbios_gates_GateMutex_Instance_State_sem__O = offsetof(ti_sysbios_gates_GateMutex_Object__,Object_field_sem);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module_State_clockQ__O, ".const:ti_sysbios_knl_Clock_Module_State_clockQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Clock_Module_State_clockQ__O = offsetof(ti_sysbios_knl_Clock_Module_State__,Object_field_clockQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Event_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Event_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Event_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Event_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Instance_State_pendQ__O, ".const:ti_sysbios_knl_Semaphore_Instance_State_pendQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Semaphore_Instance_State_pendQ__O = offsetof(ti_sysbios_knl_Semaphore_Object__,Object_field_pendQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_inactiveQ__O, ".const:ti_sysbios_knl_Task_Module_State_inactiveQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_inactiveQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_inactiveQ);
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module_State_terminatedQ__O, ".const:ti_sysbios_knl_Task_Module_State_terminatedQ__O");
__FAR__ const xdc_SizeT ti_sysbios_knl_Task_Module_State_terminatedQ__O = offsetof(ti_sysbios_knl_Task_Module_State__,Object_field_terminatedQ);


/*
 * ======== OBJECT OFFSETS ========
 */

#pragma DATA_SECTION(ti_sysbios_utils_Load_Module_State_taskList__O, ".const:ti_sysbios_utils_Load_Module_State_taskList__O");
__FAR__ const xdc_SizeT ti_sysbios_utils_Load_Module_State_taskList__O = offsetof(ti_sysbios_utils_Load_Module_State__,Object_field_taskList);


/*
 * ======== xdc.cfg.Program TEMPLATE ========
 */

/*
 *  ======== __ASM__ ========
 *  Define absolute path prefix for this executable's
 *  configuration generated files.
 */
xdc__META(__ASM__, "@(#)__ASM__ = C:/Users/joshu/workspace_v12/CPE403_DA3/Debug/configPkg/package/cfg/mutex_pem4f");

/*
 *  ======== __ISA__ ========
 *  Define the ISA of this executable.  This symbol is used by platform
 *  specific "exec" commands that support more than one ISA; e.g., gdb
 */
xdc__META(__ISA__, "@(#)__ISA__ = v7M4");

/*
 *  ======== __PLAT__ ========
 *  Define the name of the platform that can run this executable.  This
 *  symbol is used by platform independent "exec" commands
 */
xdc__META(__PLAT__, "@(#)__PLAT__ = ti.platforms.msp432");

/*
 *  ======== __TARG__ ========
 *  Define the name of the target used to build this executable.
 */
xdc__META(__TARG__, "@(#)__TARG__ = ti.targets.arm.elf.M4F");

/*
 *  ======== __TRDR__ ========
 *  Define the name of the class that can read/parse this executable.
 */
xdc__META(__TRDR__, "@(#)__TRDR__ = xdc.targets.omf.Elf");


/*
 * ======== xdc.cfg.SourceDir TEMPLATE ========
 */



/*
 * ======== xdc.runtime.Diags TEMPLATE ========
 */

xdc_runtime_Diags_DictElem xdc_runtime_Diags_dictElems[] = {
    {32777, &xdc_runtime_Main_Module__root__V.mask},
    {32801, &ti_sysbios_knl_Event_Module__root__V.mask},
    {32805, &ti_sysbios_knl_Task_Module__root__V.mask},
    {0, 0}
};


/*
 * ======== xdc.runtime.Error TEMPLATE ========
 */


xdc_runtime_Error_Block xdc_runtime_Error_IgnoreBlock = {
    (unsigned short)(~0U), /* unused */
    {
        {0, 0} /* data */
    },
    0,  /* id */
    NULL,  /* msg */
    {
        0,  /* mod */
        NULL,  /* file */
        0   /* line */
    }
};

/*
 *  ======== Error_policyLog ========
 */
Void xdc_runtime_Error_policyLog__I(xdc_runtime_Types_ModuleId mod,
    CString file, Int line, CString msg, IArg arg1, IArg arg2)
{
    /*
     * Log the error, now that we've retrieved the error message.
     *
     * We call Log_put here instead of Log_write so that we can log the
     * caller's module id instead of the Error module's id.
     *
     * In logging this event, we'll use the Error module's mask and logger. We
     * don't have a way to reliably access the caller's diags mask and logger.
     * The caller isn't guaranteed to have a mask on the target, even if they
     * are performing logging.
     */
#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Error_Module__diagsIncluded__C
#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Error_Module__diagsEnabled__C
#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Error_Module__diagsMask__C
#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Error_Module__loggerObj__C
#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Error_Module__loggerFxn8__C

    if (xdc_runtime_Diags_query(xdc_runtime_Log_L_error)) {
        xdc_runtime_Log_put8(xdc_runtime_Log_L_error, mod, (IArg) file, line,
                 (IArg) msg, arg1, arg2, 0, 0, 0);
    }
}

/*
 * ======== xdc.runtime.Startup TEMPLATE ========
 */

/*
 *  ======== MODULE STARTUP DONE FUNCTIONS ========
 */
/* REQ_TAG(SYSBIOS-953) */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_System_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[0] < 0);
}
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[1] < 0);
}
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[2] < 0);
}
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[3] < 0);
}
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[4] < 0);
}
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[5] < 0);
}
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[6] < 0);
}
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[7] < 0);
}
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[8] < 0);
}
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__F(void); /* keep GCC prototype warning quiet */
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__F(void) {
    return (xdc_Bool)((&xdc_runtime_Startup_Module__state__V)->stateTab == NULL || (&xdc_runtime_Startup_Module__state__V)->stateTab[9] < 0);
}


/*
 * Startup_exec__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * attribute, whole program optimizers would otherwise optimize-out this
 * function.
 */
xdc_Void xdc_runtime_Startup_exec__I(void) __attribute__ ((used));

/*
 *  ======== xdc_runtime_Startup_exec__I ========
 *  Initialize all used modules that have startup functions
 */
/* REQ_TAG(SYSBIOS-949) */
xdc_Void xdc_runtime_Startup_exec__I(void)
{
    xdc_Int state[10];
    xdc_runtime_Startup_startModsFxn__C(state, 10);
}

/*
 * ======== xdc.runtime.Reset TEMPLATE ========
 */

/*
 * Startup_reset__I is an internal entry point called by target/platform boot
 * code. Boot code is not brought into a partial-link assembly. So, without this
 * pragma, whole program optimizers would otherwise optimize-out this function.
 */
xdc_Void xdc_runtime_Startup_reset__I(void) __attribute__ ((used));

extern xdc_Void ti_sysbios_family_arm_msp432e4_init_Boot_init(void);  /* user defined reset function */

/*
 *  ======== xdc_runtime_Startup_reset__I ========
 *  This function is called by bootstrap initialization code as early as
 *  possible in the startup process.  This function calls all functions in
 *  the Reset.fxns array _as well as_ Startup.resetFxn (if it's non-NULL)
 */
xdc_Void xdc_runtime_Startup_reset__I(void)
{
    ti_sysbios_family_arm_msp432e4_init_Boot_init();
}

/*
 * ======== xdc.runtime.System TEMPLATE ========
 */


#include <xdc/std.h>
#include <limits.h>
#include <xdc/runtime/Types.h>

#include <xdc/runtime/System.h>
#include <xdc/runtime/System__internal.h>

/*
 *  ======== System_printfExtend__I ========
 *  This function processes optional extended formats of printf.
 *
 *  It returns the number of characters added to the result.
 *
 *  Precision (maximum string length) is not supported for %$S.
 *
 *  Right-justified (which is default) minimum width is not supported
 *  for %$L, %$S, or %$F.
 */
/* REQ_TAG(SYSBIOS-1072) */
xdc_Int xdc_runtime_System_printfExtend__I(xdc_Char **pbuf, xdc_CString *pfmt,
    xdc_VaList *pva, xdc_runtime_System_ParseData *parse)
{
    xdc_Int     res;
    xdc_Char    c;
    xdc_Bool    found = FALSE;

    /*
     * Create a local variable 'va' to ensure that the dereference of
     * pva only occurs once.
     */
    va_list va = *pva;

    res = 0;

    c = **pfmt;
    *pfmt = *pfmt + 1;


    if (c == '$') {
        c = **pfmt;
        *pfmt = *pfmt + 1;

        if (c == 'L') {
            xdc_runtime_Types_Label *lab = (parse->aFlag == TRUE) ?
                (xdc_runtime_Types_Label *)xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_runtime_Types_Label *)va_arg(va, void *);

            /*
             * Call Text_putLab to write out the label, taking the precision
             * into account.
             */
            res = xdc_runtime_Text_putLab(lab, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field. */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'F') {
            xdc_runtime_Types_Site site;

            /* Retrieve the file name string from the argument list */
            site.file = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Retrieve the line number from the argument list. */
            site.line = (parse->aFlag == TRUE) ?
                (xdc_Int) va_arg(va, xdc_IArg) :
                (xdc_Int) va_arg(va, xdc_Int);

            /*
             * Omit the 'mod' field, set it to 0.
             * '0' is a safe sentinel value - the IDs for named modules are
             * 0x8000 and higher, and the IDs for unnamed modules go from 0x1
             * to 0x7fff.
             */
            site.mod = 0;

            /*
             * Call putSite to format the file and line number.
             * If a precision was specified, it will be used as the maximum
             * string length.
             */
            res = xdc_runtime_Text_putSite(&site, pbuf, parse->precis);

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr.
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            found = TRUE;
        }

        if (c == 'S') {
            /* Retrieve the format string from the argument list */
            parse->ptr = (parse->aFlag == TRUE) ?
                (xdc_Char *) xdc_iargToPtr(va_arg(va, xdc_IArg)) :
                (xdc_Char *) va_arg(va, xdc_Char *);

            /* Update pva before passing it to doPrint. */
            *pva = va;

            /* Perform the recursive format. System_doPrint does not advance
             * the buffer pointer, so it has to be done explicitly.
             * System_doPrint guarantees that parse->precis is positive.
             */
            res = xdc_runtime_System_doPrint__I(*pbuf, (xdc_SizeT)parse->precis,
                                                parse->ptr, pva, parse->aFlag);

            if (*pbuf != NULL) {
                if (res >= parse->precis) {
                    /* Not enough space for all characters, only
                     * (parse->precis - 1) and '\0' were printed.
                     */
                    res = parse->precis - 1;
                }
                *pbuf += res;
            }

            /* Update the temporary variable with any changes to *pva */
            va = *pva;

            /*
             * Set the length to 0 to indicate to 'doPrint' that nothing should
             * be copied from parse.ptr
             */
            parse->len = 0;

            /* Update the minimum width field */
            parse->width -= res;

            /* Indicate that we were able to interpret the specifier */
            found = TRUE;
        }

    }

    if (c == 'f') {
        /* support arguments _after_ optional float support */
        if (parse->aFlag == TRUE) {
            (void)va_arg(va, xdc_IArg);
        }
        else {
            (void)va_arg(va, double);
        }
    }

    if (found == FALSE) {
        /* other character (like %) copy to output */
        *(parse->ptr) = c;
        parse->len = 1;
    }

    /*
     * Before returning, we must update the value of pva. We use a label here
     * so that all return points will go through this update.
     * The 'goto end' is here to ensure that there is always a reference to the
     * label (to avoid the compiler complaining).
     */
    goto end;
end:
    *pva = va;
    return (res);
}

/*
 * ======== xdc.runtime.SysMin TEMPLATE ========
 */


#if defined(__ti__)
extern int HOSTwrite(int out, const char *buffer, unsigned count);
#elif (defined(gnu_targets_arm_STD_) && defined(xdc_target__os_undefined))
extern int _write(int out, char *buffer, int count);
#define HOSTwrite(x,y,z) _write((int)(x),(char *)(y),(int)(z))
#elif defined(__IAR_SYSTEMS_ICC__)
#include <yfuns.h>
#define HOSTwrite(x,y,z) __write((x),(unsigned char *)(y),(z))
#else
#include <stdio.h>
#endif

/*
 *  ======== SysMin_output__I ========
 *  HOSTWrite only writes a max of N chars at a time. The amount it writes
 *  is returned. This function loops until the entire buffer is written.
 *  Being a static function allows it to conditionally compile out.
 */
xdc_Void xdc_runtime_SysMin_output__I(xdc_Char *buf, xdc_UInt size)
{
#if defined(__ti__) || (defined(gnu_targets_arm_STD_) && defined(xdc_target__os_undefined)) || defined (__IAR_SYSTEMS_ICC__)
    xdc_Int printCount;

    while (size != 0U) {
        printCount = HOSTwrite(1, buf, size);
        if ((printCount <= 0) || ((xdc_UInt)printCount > size)) {
            break;  /* ensure we never get stuck in an infinite loop */
        }
        size -= (xdc_UInt)printCount;
        buf = buf + printCount;
    }
#else
    fwrite(buf, 1, size, stdout);
#endif
}

/*
 * ======== xdc.runtime.Text TEMPLATE ========
 */

/*
 *  ======== xdc_runtime_Text_visitRope__I ========
 *  This function is indirectly called within Text.c through
 *  the visitRopeFxn configuration parameter of xdc.runtime.Text.
 */
void xdc_runtime_Text_visitRope__I(xdc_runtime_Text_RopeId rope,
    xdc_runtime_Text_RopeVisitor visFxn, xdc_Ptr visState)
{
    xdc_CString stack[7];
    xdc_runtime_Text_visitRope2__I(rope, visFxn, visState, stack);
}

/*
 * ======== ti.platforms.msp432.Platform TEMPLATE ========
 */



/*
 * ======== ti.sysbios.knl.Clock TEMPLATE ========
 */

Void ti_sysbios_knl_Clock_doTick__I(UArg arg)
{
    /* update system time */
    (&ti_sysbios_knl_Clock_Module__state__V)->ticks++;

    ti_sysbios_knl_Clock_logTick__E();

    if (ti_sysbios_knl_Queue_empty(ti_sysbios_knl_Clock_Module_State_clockQ())
        == 0U) {
        (&ti_sysbios_knl_Clock_Module__state__V)->swiCount++;

        ti_sysbios_knl_Swi_post((&ti_sysbios_knl_Clock_Module__state__V)->swi);
    }
}

/*
 * ======== ti.sysbios.knl.Task TEMPLATE ========
 */




/*
 * ======== ti.sysbios.BIOS TEMPLATE ========
 */


Void ti_sysbios_BIOS_atExitFunc__I(Int stat);

extern Void ti_sysbios_BIOS_registerRTSLock(Void);
extern Void ti_sysbios_family_arm_lm4_Timer_startup__E(Void);

Void ti_sysbios_BIOS_startFunc__I(Void)
{
    /*
     *  Check if XDC runtime startup functions have been called. If not, then
     *  call BIOS_linkedWithIncorrectBootLibrary() function. This function
     *  will spin forever.
     */
    if (xdc_runtime_Startup_rtsDone() != TRUE) {
        ti_sysbios_BIOS_linkedWithIncorrectBootLibrary();
    }

    (void)xdc_runtime_System_atexit(
        (xdc_runtime_System_AtexitHandler)ti_sysbios_BIOS_atExitFunc__I);
    ti_sysbios_BIOS_registerRTSLock();
    ti_sysbios_family_arm_lm4_Timer_startup__E();
    ti_sysbios_hal_Hwi_startup();
    ti_sysbios_knl_Swi_startup();
    ti_sysbios_utils_Load_startup();
    ti_sysbios_knl_Task_startup();
}

#include <_lock.h>

Void ti_sysbios_BIOS_atExitFunc__I(Int notused)
{
    ti_sysbios_knl_Swi_disable();
    (void)ti_sysbios_knl_Task_disable();
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(_nop);
        _register_unlock(_nop);
    }
}

/*
 *  ======== BIOS_rtsLock ========
 *  Called by rts _lock() function
 */
Void ti_sysbios_BIOS_rtsLock()
{
    IArg key;

    key = ti_sysbios_BIOS_RtsGateProxy_enter((&ti_sysbios_BIOS_Module__state__V)->rtsGate);
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey = key;
    }
    /* Increment need not be atomic */
    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount++;
}

/*
 *  ======== BIOS_rtsUnLock ========
 *  Called by rts _unlock() function
 */
Void ti_sysbios_BIOS_rtsUnlock()
{
    xdc_runtime_Assert_isTrue(((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount), NULL);

    (&ti_sysbios_BIOS_Module__state__V)->rtsGateCount--;

    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGateCount == 0) {
        ti_sysbios_BIOS_RtsGateProxy_leave((&ti_sysbios_BIOS_Module__state__V)->rtsGate, (&ti_sysbios_BIOS_Module__state__V)->rtsGateKey);
    }
}

/*
 *  ======== BIOS_nullFunc ========
 */
Void ti_sysbios_BIOS_nullFunc__I(Void)
{
}

/*
 *  ======== BIOS_registerRTSLock ========
 */
Void ti_sysbios_BIOS_registerRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_rtsLock);
        _register_unlock(ti_sysbios_BIOS_rtsUnlock);
    }
}

/*
 *  ======== BIOS_removeRTSLock ========
 */
Void ti_sysbios_BIOS_removeRTSLock(Void)
{
    if ((&ti_sysbios_BIOS_Module__state__V)->rtsGate != NULL) {
        _register_lock(ti_sysbios_BIOS_nullFunc);
        _register_unlock(ti_sysbios_BIOS_nullFunc);
    }
}

/*
 *  ======== BIOS_exitFunc ========
 */
Void ti_sysbios_BIOS_exitFunc(Int stat)
{
    /* remove the RTS lock */
    ti_sysbios_BIOS_removeRTSLock();

    /* force thread type to 'Main' */
    (void)ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);

    xdc_runtime_System_exit(stat);
}

/*
 *  ======== BIOS_errorRaiseHook ========
 */
Void ti_sysbios_BIOS_errorRaiseHook(xdc_runtime_Error_Block *eb)
{
    /*
     * If this is an Assert thread, defang Gate threadtype check
     */
    if (eb->id == xdc_runtime_Assert_E_assertFailed) {
        /* remove the RTS lock */
        ti_sysbios_BIOS_removeRTSLock();
        /* force thread type to 'Main' */
        ti_sysbios_BIOS_setThreadType(ti_sysbios_BIOS_ThreadType_Main);
    }
    /* Call the installed Error.raiseHook */
    ti_sysbios_BIOS_installedErrorHook(eb);
}

/*
 * ======== ti.sysbios.Build TEMPLATE ========
 */


/*
 * ======== ti.sysbios.family.arm.msp432e4.init.Boot TEMPLATE ========
 */

#if defined(__ti__) && !defined(__clang__)
#pragma CODE_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_init, ".text:.bootCodeSection")
#endif

/*
 *  ======== ti_sysbios_family_arm_msp432e4_init_Boot_init ========
 */
xdc_Void ti_sysbios_family_arm_msp432e4_init_Boot_init()
{
    (void)ti_sysbios_family_arm_msp432e4_init_Boot_sysCtlClockFreqSet((xdc_ULong)
        (-251657664), (xdc_ULong)(120000000));
}

/*
 * ======== ti.sysbios.family.arm.m3.Hwi TEMPLATE ========
 */

extern Void _c_int00(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);
extern Void ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I(Void);


#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_resetVectors, ".resetVecs");

/* const because it is meant to be placed in ROM */
const UInt32 ti_sysbios_family_arm_m3_Hwi_resetVectors[] = {
    (UInt32)(&__TI_STACK_BASE),
    (UInt32)(&_c_int00),
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),            /* NMI */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),      /* Hard Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Mem Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Bus Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),     /* Usage Fault */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),         /* SVCall */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* Debug Mon */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I),       /* reserved */
    (UInt32)(&ti_sysbios_family_arm_m3_Hwi_pendSV__I),  /* pendSV */
};

#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ramVectors, ".vecs");

/* place holder for RAM vector table */
UInt32 ti_sysbios_family_arm_m3_Hwi_ramVectors[216];

UInt32 ti_sysbios_family_arm_m3_Hwi_dispatchTable[216];

#if defined(__IAR_SYSTEMS_ICC__)
Void ti_sysbios_family_arm_m3_Hwi_initIsrStackSize()
{
    #pragma section = "CSTACK"
    ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackBase = (Void *)__section_begin("CSTACK");
    size_t size = (uint8_t *)__section_end("CSTACK") - (uint8_t *)__section_begin("CSTACK");
    ti_sysbios_family_arm_m3_Hwi_Module__state__V.isrStackSize = (Void *)size;
}
#endif

/*
 * ======== ti.sysbios.utils.Load TEMPLATE ========
 */

#include <ti/sysbios/utils/Load.h>
#include <ti/sysbios/hal/Core.h>

/*
 *  ======== Load_update ========
 */
Void ti_sysbios_utils_Load_update__E()
{
    /* Update and Log CPU load, Task, Swi, and Hwi loads (if enabled). */
    ti_sysbios_utils_Load_updateLoads();
}


/*
 * ======== ti.sysbios.rts.MemAlloc TEMPLATE ========
 */



#if defined(__ti__) && !defined(__clang__)

#pragma FUNC_EXT_CALLED(malloc);
#pragma FUNC_EXT_CALLED(memalign);
#pragma FUNC_EXT_CALLED(free);
#pragma FUNC_EXT_CALLED(calloc);
#pragma FUNC_EXT_CALLED(realloc);
#pragma FUNC_EXT_CALLED(aligned_alloc);

#define ATTRIBUTE

#elif defined(__IAR_SYSTEMS_ICC__)

#define ATTRIBUTE

#else

#define ATTRIBUTE __attribute__ ((used))

#endif


#include <xdc/std.h>

#include <xdc/runtime/Memory.h>
#include <xdc/runtime/Error.h>

#include <string.h>

#if defined(__GNUC__) && !defined(__ti__)

#include <reent.h>

#endif

/*
 * Header is a union to make sure that the size is a power of 2.
 */
typedef union Header {
    struct {
        Ptr   actualBuf;
        SizeT size;
    } header;
    UArg pad[2];	/* 4 words on 28L, 8 bytes on most others */
} Header;

/*
 *  ======== ti_sysbios_rts_MemAlloc_alloc ========
 */
static Void *ti_sysbios_rts_MemAlloc_alloc(SizeT size)
{
    Header *packet;
    xdc_runtime_Error_Block eb;

    if (size == 0) {
        return (NULL);
    }

    xdc_runtime_Error_init(&eb);

    packet = (Header *)xdc_runtime_Memory_alloc(NULL,
        (SizeT)(size + sizeof(Header)), 0, &eb);

    if (packet == NULL) {
        return (NULL);
    }

    packet->header.actualBuf = (Ptr)packet;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== malloc ========
 */
Void ATTRIBUTE *malloc(SizeT size)
{
    return (ti_sysbios_rts_MemAlloc_alloc(size));
}

/*
 *  ======== memalign ========
 *  mirrors the memalign() function from the TI run-time library
 */
Void ATTRIBUTE *memalign(SizeT alignment, SizeT size)
{
    Header                      *packet;
    Void                        *tmp;
    xdc_runtime_Error_Block     eb;

    /* return NULL if size is 0, or alignment is not a power-of-2 */
    if (size == 0 || (alignment & (alignment - 1))) {
        return (NULL);
    }

    if (alignment < sizeof(Header)) {
        alignment = sizeof(Header);
    }

    xdc_runtime_Error_init(&eb);

    /*
     * Allocate 'align + size' so that we have room for the 'packet'
     * and can return an aligned buffer.
     */
    tmp = xdc_runtime_Memory_alloc(NULL, alignment + size, alignment, &eb);

    if (tmp == NULL) {
        return (NULL);
    }

    packet = (Header *)((char *)tmp + alignment - sizeof(Header));

    packet->header.actualBuf = tmp;
    packet->header.size = size + sizeof(Header);

    return (packet + 1);
}

/*
 *  ======== calloc ========
 */
Void ATTRIBUTE *calloc(SizeT nmemb, SizeT size)
{
    SizeT       nbytes;
    Ptr         retval;

    nbytes = nmemb * size;

    /* return NULL if there's an overflow */
    if (nmemb && size != (nbytes / nmemb)) {
        return (NULL);
    }

    retval = ti_sysbios_rts_MemAlloc_alloc(nbytes);
    if (retval != NULL) {
        (Void)memset(retval, (Int)'\0', nbytes);
    }

    return (retval);
}

/*
 *  ======== free ========
 */
Void ATTRIBUTE free(Void *ptr)
{
    Header      *packet;

    if (ptr != NULL) {
        packet = ((Header *)ptr) - 1;

        xdc_runtime_Memory_free(NULL, (Ptr)packet->header.actualBuf,
            (packet->header.size +
            ((char*)packet - (char*)packet->header.actualBuf)));
    }
}

/*
 *  ======== realloc ========
 */
Void ATTRIBUTE *realloc(Void *ptr, SizeT size)
{
    Ptr         retval;
    Header      *packet;
    SizeT       oldSize;

    if (ptr == NULL) {
        retval = malloc(size);
    }
    else if (size == 0) {
        free(ptr);
        retval = NULL;
    }
    else {
        packet = (Header *)ptr - 1;
        retval = malloc(size);
        if (retval != NULL) {
            oldSize = packet->header.size - sizeof(Header);
            (Void)memcpy(retval, ptr, (size < oldSize) ? size : oldSize);
            free(ptr);
        }
    }

    return (retval);
}

/*
 *  ======== aligned_alloc ========
 */
Void ATTRIBUTE *aligned_alloc(SizeT alignment, SizeT size)
{
    Void *retval;

    retval = memalign(alignment, size);

    return (retval);
}

#if defined(__GNUC__) && !defined(__ti__)

/*
 *  ======== _malloc_r ========
 */
Void ATTRIBUTE *_malloc_r(struct _reent *rptr, SizeT size)
{
    return malloc(size);
}

/*
 *  ======== _calloc_r ========
 */
Void ATTRIBUTE *_calloc_r(struct _reent *rptr, SizeT nmemb, SizeT size)
{
    return calloc(nmemb, size);
}

/*
 *  ======== _free_r ========
 */
Void ATTRIBUTE _free_r(struct _reent *rptr, Void *ptr)
{
    free(ptr);
}

/*
 *  ======== _realloc_r ========
 */
Void ATTRIBUTE *_realloc_r(struct _reent *rptr, Void *ptr, SizeT size)
{
    return realloc(ptr, size);
}

#endif


/*
 * ======== ti.uia.loggers.LoggerStopMode TEMPLATE ========
 */


#include <xdc/std.h>

#include <xdc/runtime/Log.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/Timestamp.h>
#include <xdc/runtime/Startup.h>
#include <xdc/runtime/System.h>
#include <xdc/runtime/Assert.h>
#include <xdc/runtime/Error.h>
#include <ti/sysbios/hal/Hwi.h>
#include <ti/uia/runtime/EventHdr.h>
#include <ti/uia/runtime/UIAPacket.h>
#include <ti/uia/runtime/QueueDescriptor.h>
#include <ti/uia/loggers/LoggerStopMode.h>

#include <string.h>  /* For memcpy */

#ifdef xdc_target__isaCompatible_64P
extern volatile cregister UInt32 TSCL, TSCH;
#endif

/*
 *  ======== ti_uia_loggers_LoggerStopMode_fillInTimestamp =========
 */
static inline UInt32 *ti_uia_loggers_LoggerStopMode_fillInTimestamp(UInt32 *writePtr)
{
#ifndef xdc_target__isaCompatible_64P
    xdc_runtime_Types_Timestamp64 tstamp;
    xdc_runtime_Timestamp_get64(&tstamp);
    *writePtr++ = tstamp.lo;
    *writePtr++ = tstamp.hi;
#else
    *writePtr++ = TSCL;
    *writePtr++ = TSCH;
#endif
    return (writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_filterOutEvent ========
 *  Returns TRUE if the event should be filtered out.
 */
Bool ti_uia_loggers_LoggerStopMode_filterOutEvent__I(xdc_runtime_Diags_Mask mask)
{
    return (FALSE);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeStart ========
 */
static inline UArg *ti_uia_loggers_LoggerStopMode_writeStart(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UArg *write, UInt32 numBytes,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid)
{
    UInt32 *writePtr = (UInt32 *)write;



    *writePtr++ = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
        numBytes,
        obj->numBytesInPrevEvent,
        obj->eventSequenceNum,
        ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWith64bTimestamp);

    obj->numBytesInPrevEvent = numBytes;

    writePtr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(writePtr);
    *writePtr++ = xdc_runtime_Types_makeEvent(xdc_runtime_Log_getEventId(evt), mid);

    return ((UArg *)writePtr);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_writeFinish ========
 */
static inline Void ti_uia_loggers_LoggerStopMode_writeFinish(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        UArg *writePtr)
{
    if (writePtr > obj->end) {
        /* Set UIA packet length and sequence number */
        ti_uia_runtime_UIAPacket_setEventLengthFast(
                (ti_uia_runtime_UIAPacket_Hdr *)obj->buffer,
                (writePtr - obj->buffer) * 4);

        /* Reset the write pointer to the beginning of the buffer */
        obj->write = obj->buffer + 4;

        /*
         *  Update the sequence count after the packet has been fully written
         *  in order to ensure that, if the target is halted it can decode the
         *  partially written packet correctly
         */
        obj->pktSequenceNum++;
        ti_uia_runtime_UIAPacket_setSequenceCounts(
            (ti_uia_runtime_UIAPacket_Hdr*)obj->buffer,
            obj->pktSequenceNum,
            obj->eventSequenceNum);
    }
    else {
        obj->write = writePtr;
    }

    ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
            (xdc_Bits32 *)obj->write;
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write0__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write0__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UArg *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            16, evt, mid);


    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            16,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write1__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write1__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid, IArg a1)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UArg *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            20, evt, mid);


    *writePtr++ = (UArg)a1;

    obj->numBytesInPrevEvent = 20;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            20,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write2__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write2__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UArg *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            24, evt, mid);


    *writePtr++ = (UArg)a1;
    *writePtr++ = (UArg)a2;

    obj->numBytesInPrevEvent = 24;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            24,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write4__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write4__E(
                                    ti_uia_loggers_LoggerStopMode_Object *obj,
                                    xdc_runtime_Log_Event evt,
                                    xdc_runtime_Types_ModuleId mid,
                                    IArg a1, IArg a2, IArg a3, IArg a4)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UArg *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            32, evt, mid);


    *writePtr++ = (UArg)a1;
    *writePtr++ = (UArg)a2;
    *writePtr++ = (UArg)a3;
    *writePtr++ = (UArg)a4;

    obj->numBytesInPrevEvent = 32;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            32,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_write8__E =========
 */
Void ti_uia_loggers_LoggerStopMode_write8__E(
        ti_uia_loggers_LoggerStopMode_Object *obj,
        xdc_runtime_Log_Event evt,
        xdc_runtime_Types_ModuleId mid,
        IArg a1, IArg a2, IArg a3, IArg a4,
        IArg a5, IArg a6, IArg a7, IArg a8)
{
    UInt key = ti_sysbios_hal_Hwi_disable();
    UArg *writePtr = obj->write;

    writePtr = ti_uia_loggers_LoggerStopMode_writeStart(obj, writePtr,
            48, evt, mid);


    *writePtr++ = (UArg)a1;
    *writePtr++ = (UArg)a2;
    *writePtr++ = (UArg)a3;
    *writePtr++ = (UArg)a4;
    *writePtr++ = (UArg)a5;
    *writePtr++ = (UArg)a6;
    *writePtr++ = (UArg)a7;
    *writePtr++ = (UArg)a8;

    obj->numBytesInPrevEvent = 48;
    obj->eventSequenceNum++;

    /*
     *  Store an empty event header containing the just-written event length
     *  in the previous event lenght field in order to allow the host to read
     *  events safely from partially written packets
     */
    *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
            0,
            48,
            obj->eventSequenceNum,
            ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

    ti_uia_loggers_LoggerStopMode_writeFinish(obj, writePtr);

    ti_sysbios_hal_Hwi_restore(key);
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_setFilterLevel__E ========
 *  Sets the filter level for the given diags level.
 *
 *  LoggerStopMode maintains a separate filter level for every diags category.
 *  This is accomplished by maintaining three masks, one for each of the levels
 *  1 - 3, wich store the diags categories which are currently at that level.
 *  There is no mask for level4; if the diags category is not found in levels
 *  1-3, it is  assumed that the filtering level is level4.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
Void ti_uia_loggers_LoggerStopMode_setFilterLevel__E(ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_Mask mask,
                xdc_runtime_Diags_EventLevel filterLevel)
{
}

/*
 *  ======== ti_uia_loggers_LoggerStopMode_getFilterLevel__E ========
 *  Returns the mask of diags categories which are set to the specified filter
 *  level.
 *
 *  This API is an instance function per the IFilterLogger interface, but
 *  LoggerStopMode only maintains module-wide filter levels.
 */
xdc_runtime_Diags_Mask ti_uia_loggers_LoggerStopMode_getFilterLevel__E (ti_uia_loggers_LoggerStopMode_Object *obj,
                xdc_runtime_Diags_EventLevel level)
{
    return (0);
}

/*  ======== writeMemoryRange =========
 *  logs a range of consecutive memory values.
 *
 *  Breaks up large blocks into a series of smaller blocks in order to limit the
 *  maximum amount of time that interrupts are disabled.
 */
Void ti_uia_loggers_LoggerStopMode_writeMemoryRange__E(ti_uia_loggers_LoggerStopMode_Object *obj, xdc_runtime_Log_Event evt,
                xdc_runtime_Types_ModuleId mid, UInt32 snapshotId,
                IArg fileName, IArg lineNum, IArg fmt,
                IArg startAdrs, UInt32 lengthInMAUs)
{
    Int i;
    SizeT eventSizeUArgs;
    SizeT dataSizeUArgs;
    Ptr pAdrs = iargToPtr(startAdrs);
    SizeT headerSizeUArgs;
    SizeT lenAdjustedUArgs;
    Int numRecords;
    UInt key;
    UArg *writePtr = obj->write;
    UInt32 *evtHdr = (UInt32 *)obj->write;

    if (obj->maxEventSizeUArgs == 0) {
        return;
    }

    /* Size of header in UArgs */
    headerSizeUArgs = 10;

    /* Round up to word (UArg) boundary */
    lenAdjustedUArgs = (lengthInMAUs + sizeof(UArg) - 1) / sizeof(UArg);

    numRecords = (lenAdjustedUArgs / (obj->maxEventSizeUArgs - headerSizeUArgs)) + 1;

    for (i = 0; i < numRecords; i++) {
        if ((headerSizeUArgs + lenAdjustedUArgs) > obj->maxEventSizeUArgs) {
            dataSizeUArgs = obj->maxEventSizeUArgs - headerSizeUArgs;
            lenAdjustedUArgs -= dataSizeUArgs;
        }
        else {
            dataSizeUArgs = lenAdjustedUArgs;
        }
        eventSizeUArgs = dataSizeUArgs + headerSizeUArgs;

        key = ti_sysbios_hal_Hwi_disable();

        if ((writePtr + eventSizeUArgs) >= obj->end) {
            ti_uia_loggers_LoggerStopMode_flush(obj);
            writePtr = obj->write;
        }

        if ((writePtr == NULL ) || ((writePtr + eventSizeUArgs) >= obj->end)) {
            obj->droppedEvents++;
            ti_sysbios_hal_Hwi_restore(key);

            continue;
        }

        /*
         *  Fill in Snapshot header.
         *  Use events with previous event length in header to allow events
         *  to be read from partially written packets
         */
        *(evtHdr++) = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
                eventSizeUArgs * 4,
                obj->numBytesInPrevEvent,
                obj->eventSequenceNum,
                ti_uia_runtime_EventHdr_HdrType_SnapshotEventWithPrevLenAnd64bTimestamp);

        evtHdr = ti_uia_loggers_LoggerStopMode_fillInTimestamp(evtHdr);

        *(evtHdr++) = ((evt) & 0xffff0000) | mid;
        writePtr = (UArg *)evtHdr;
        *(writePtr++) = fileName;
        *(writePtr++) = lineNum;
        *(writePtr++) = snapshotId;
        *(writePtr++) = (UArg)pAdrs;
        *(writePtr++) = ((((dataSizeUArgs * sizeof(UArg)) & 0x0FFFF)<<16) | (lengthInMAUs & 0x0FFFF));
        *(writePtr++) = fmt;

        memcpy((Ptr)writePtr, pAdrs, dataSizeUArgs * sizeof(UArg));
        writePtr = writePtr + dataSizeUArgs;

        /*
         * Update serial number even if the buffer is full or disabled.
         * We do this because a reader (decoder) of the buffer needs to
         * know if events have been missed, and the buffer might become
         * un-FULL at some later time.
         */
        obj->eventSequenceNum++;

        obj->numBytesInPrevEvent = eventSizeUArgs * 4;
        *writePtr = ti_uia_runtime_EventHdr_genEventWithPrevLenHdrWord1(
                0,
                obj->numBytesInPrevEvent,
                obj->eventSequenceNum,
                ti_uia_runtime_EventHdr_HdrType_EventWithPrevLenWithNoTimestamp);

        obj->write = writePtr;

        ((ti_uia_runtime_QueueDescriptor_Header *)obj->hdr)->partialPacketWritePtr =
                (xdc_Bits32 *)writePtr;
        pAdrs = (Ptr)((UArg *)pAdrs + dataSizeUArgs);
        ti_sysbios_hal_Hwi_restore(key);
    }
    obj->write = writePtr;
}

/*
 * ======== ti.sysbios.BIOS INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data:ti_sysbios_BIOS_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V __attribute__ ((section(".data_ti_sysbios_BIOS_Module__state__V")));
#endif
ti_sysbios_BIOS_Module_State__ ti_sysbios_BIOS_Module__state__V = {
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x7270e00U,  /* lo */
    },  /* cpuFreq */
    (xdc_UInt)0x0U,  /* rtsGateCount */
    ((xdc_IArg)(0x0)),  /* rtsGateKey */
    (ti_sysbios_BIOS_RtsGateProxy_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[1],  /* rtsGate */
    ti_sysbios_BIOS_ThreadType_Main,  /* threadType */
    ((void*)0),  /* smpThreadType */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_BIOS_startFunc)),  /* startFunc */
    ((xdc_Void(*)(xdc_Int f_arg0))(ti_sysbios_BIOS_exitFunc)),  /* exitFunc */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsEnabled__C, ".const:ti_sysbios_BIOS_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsEnabled ti_sysbios_BIOS_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsIncluded__C, ".const:ti_sysbios_BIOS_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsIncluded ti_sysbios_BIOS_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__diagsMask__C, ".const:ti_sysbios_BIOS_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__diagsMask ti_sysbios_BIOS_Module__diagsMask__C = ((const CT__ti_sysbios_BIOS_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gateObj__C, ".const:ti_sysbios_BIOS_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gateObj ti_sysbios_BIOS_Module__gateObj__C = ((const CT__ti_sysbios_BIOS_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__gatePrms__C, ".const:ti_sysbios_BIOS_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__gatePrms ti_sysbios_BIOS_Module__gatePrms__C = ((const CT__ti_sysbios_BIOS_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__id__C, ".const:ti_sysbios_BIOS_Module__id__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__id ti_sysbios_BIOS_Module__id__C = (xdc_Bits16)0x8028U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerDefined__C, ".const:ti_sysbios_BIOS_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerDefined ti_sysbios_BIOS_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerObj__C, ".const:ti_sysbios_BIOS_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerObj ti_sysbios_BIOS_Module__loggerObj__C = ((const CT__ti_sysbios_BIOS_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn0__C, ".const:ti_sysbios_BIOS_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn0 ti_sysbios_BIOS_Module__loggerFxn0__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn1__C, ".const:ti_sysbios_BIOS_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn1 ti_sysbios_BIOS_Module__loggerFxn1__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn2__C, ".const:ti_sysbios_BIOS_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn2 ti_sysbios_BIOS_Module__loggerFxn2__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn4__C, ".const:ti_sysbios_BIOS_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn4 ti_sysbios_BIOS_Module__loggerFxn4__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Module__loggerFxn8__C, ".const:ti_sysbios_BIOS_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_BIOS_Module__loggerFxn8 ti_sysbios_BIOS_Module__loggerFxn8__C = ((const CT__ti_sysbios_BIOS_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__count__C, ".const:ti_sysbios_BIOS_Object__count__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__count ti_sysbios_BIOS_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__heap__C, ".const:ti_sysbios_BIOS_Object__heap__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__heap ti_sysbios_BIOS_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__sizeof__C, ".const:ti_sysbios_BIOS_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__sizeof ti_sysbios_BIOS_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_Object__table__C, ".const:ti_sysbios_BIOS_Object__table__C");
__FAR__ const CT__ti_sysbios_BIOS_Object__table ti_sysbios_BIOS_Object__table__C = NULL;

/* smpEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_smpEnabled__C, ".const:ti_sysbios_BIOS_smpEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_smpEnabled ti_sysbios_BIOS_smpEnabled__C = 0;

/* cpuFreq__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_cpuFreq__C, ".const:ti_sysbios_BIOS_cpuFreq__C");
__FAR__ const CT__ti_sysbios_BIOS_cpuFreq ti_sysbios_BIOS_cpuFreq__C = {
    (xdc_Bits32)0x0U,  /* hi */
    (xdc_Bits32)0x7270e00U,  /* lo */
};

/* runtimeCreatesEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_runtimeCreatesEnabled__C, ".const:ti_sysbios_BIOS_runtimeCreatesEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_runtimeCreatesEnabled ti_sysbios_BIOS_runtimeCreatesEnabled__C = 1;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_taskEnabled__C, ".const:ti_sysbios_BIOS_taskEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_taskEnabled ti_sysbios_BIOS_taskEnabled__C = 1;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_swiEnabled__C, ".const:ti_sysbios_BIOS_swiEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_swiEnabled ti_sysbios_BIOS_swiEnabled__C = 1;

/* clockEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_clockEnabled__C, ".const:ti_sysbios_BIOS_clockEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_clockEnabled ti_sysbios_BIOS_clockEnabled__C = 1;

/* heapSize__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSize__C, ".const:ti_sysbios_BIOS_heapSize__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSize ti_sysbios_BIOS_heapSize__C = (xdc_SizeT)0x1000;

/* heapSection__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapSection__C, ".const:ti_sysbios_BIOS_heapSection__C");
__FAR__ const CT__ti_sysbios_BIOS_heapSection ti_sysbios_BIOS_heapSection__C = 0;

/* heapTrackEnabled__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_heapTrackEnabled__C, ".const:ti_sysbios_BIOS_heapTrackEnabled__C");
__FAR__ const CT__ti_sysbios_BIOS_heapTrackEnabled ti_sysbios_BIOS_heapTrackEnabled__C = 0;

/* setupSecureContext__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_setupSecureContext__C, ".const:ti_sysbios_BIOS_setupSecureContext__C");
__FAR__ const CT__ti_sysbios_BIOS_setupSecureContext ti_sysbios_BIOS_setupSecureContext__C = 0;

/* useSK__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_useSK__C, ".const:ti_sysbios_BIOS_useSK__C");
__FAR__ const CT__ti_sysbios_BIOS_useSK ti_sysbios_BIOS_useSK__C = 0;

/* installedErrorHook__C */
#pragma DATA_SECTION(ti_sysbios_BIOS_installedErrorHook__C, ".const:ti_sysbios_BIOS_installedErrorHook__C");
__FAR__ const CT__ti_sysbios_BIOS_installedErrorHook ti_sysbios_BIOS_installedErrorHook__C = ((const CT__ti_sysbios_BIOS_installedErrorHook)(xdc_runtime_Error_print__E));


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.family.arm.lm4.Timer INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_lm4_Timer_Params ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_lm4_Timer_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
    ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
    ((xdc_UArg)NULL),  /* arg */
    (xdc_UInt32)0x0U,  /* period */
    ti_sysbios_interfaces_ITimer_PeriodType_MICROSECS,  /* periodType */
    {
        (xdc_Bits32)0x0U,  /* hi */
        (xdc_Bits32)0x0U,  /* lo */
    },  /* extFreq */
    ((ti_sysbios_family_arm_m3_Hwi_Params*)NULL),  /* hwiParams */
    (xdc_UInt)0xffffffffU,  /* prevThreshold */
    0,  /* altclk */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_lm4_Timer_Module__ ti_sysbios_family_arm_lm4_Timer_Module__root__V = {
    {&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_lm4_Timer_Object__ ti_sysbios_family_arm_lm4_Timer_Object__table__V[2] = {
    {/* instance#0 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x0,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_AUTO,  /* startMode */
        (xdc_UInt)0x1d4c0U,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x23U,  /* intNum */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_knl_Clock_doTick__I)),  /* tickFxn */
        {
            (xdc_Bits32)0x0U,  /* hi */
            (xdc_Bits32)0x0U,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[0],  /* hwi */
        (xdc_UInt)0xffffffffU,  /* prevThreshold */
        (xdc_UInt)0x0U,  /* rollovers */
        (xdc_UInt)0x0U,  /* savedCurrCount */
        0,  /* altclk */
    },
    {/* instance#1 */
        0,
        1,  /* staticInst */
        (xdc_Int)0x1,  /* id */
        ti_sysbios_interfaces_ITimer_RunMode_CONTINUOUS,  /* runMode */
        ti_sysbios_interfaces_ITimer_StartMode_USER,  /* startMode */
        (xdc_UInt)0xffffffffU,  /* period */
        ti_sysbios_interfaces_ITimer_PeriodType_COUNTS,  /* periodType */
        (xdc_UInt)0x25U,  /* intNum */
        ((xdc_UArg)NULL),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_lm4_TimestampProvider_rolloverFunc__E)),  /* tickFxn */
        {
            (xdc_Bits32)0x0U,  /* hi */
            (xdc_Bits32)0x0U,  /* lo */
        },  /* extFreq */
        (ti_sysbios_family_arm_m3_Hwi_Handle)&ti_sysbios_family_arm_m3_Hwi_Object__table__V[1],  /* hwi */
        (xdc_UInt)0xffffffffU,  /* prevThreshold */
        (xdc_UInt)0x0U,  /* rollovers */
        (xdc_UInt)0x0U,  /* savedCurrCount */
        0,  /* altclk */
    },
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__device ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A[8] = {
    {
        (xdc_UInt)0x23U,  /* intNum */
        ((xdc_Ptr)(0x40030000)),  /* baseAddr */
    },  /* [0] */
    {
        (xdc_UInt)0x25U,  /* intNum */
        ((xdc_Ptr)(0x40031000)),  /* baseAddr */
    },  /* [1] */
    {
        (xdc_UInt)0x27U,  /* intNum */
        ((xdc_Ptr)(0x40032000)),  /* baseAddr */
    },  /* [2] */
    {
        (xdc_UInt)0x33U,  /* intNum */
        ((xdc_Ptr)(0x40033000)),  /* baseAddr */
    },  /* [3] */
    {
        (xdc_UInt)0x4fU,  /* intNum */
        ((xdc_Ptr)(0x40034000)),  /* baseAddr */
    },  /* [4] */
    {
        (xdc_UInt)0x51U,  /* intNum */
        ((xdc_Ptr)(0x40035000)),  /* baseAddr */
    },  /* [5] */
    {
        (xdc_UInt)0x72U,  /* intNum */
        ((xdc_Ptr)(0x400e0000)),  /* baseAddr */
    },  /* [6] */
    {
        (xdc_UInt)0x74U,  /* intNum */
        ((xdc_Ptr)(0x400e1000)),  /* baseAddr */
    },  /* [7] */
};

/* --> ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A */
__T1_ti_sysbios_family_arm_lm4_Timer_Module_State__handles ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A[8] = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* [0] */
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    0,  /* [7] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_lm4_Timer_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_Timer_Module__state__V")));
#endif
ti_sysbios_family_arm_lm4_Timer_Module_State__ ti_sysbios_family_arm_lm4_Timer_Module__state__V = {
    (xdc_UInt)0xfcU,  /* availMask */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_device__A),  /* device */
    ((void*)ti_sysbios_family_arm_lm4_Timer_Module_State_0_handles__A),  /* handles */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__id__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__id ti_sysbios_family_arm_lm4_Timer_Module__id__C = (xdc_Bits16)0x803bU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__count__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__count ti_sysbios_family_arm_lm4_Timer_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__heap ti_sysbios_family_arm_lm4_Timer_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__sizeof ti_sysbios_family_arm_lm4_Timer_Object__sizeof__C = sizeof(ti_sysbios_family_arm_lm4_Timer_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__table__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_Object__table ti_sysbios_family_arm_lm4_Timer_Object__table__C = ti_sysbios_family_arm_lm4_Timer_Object__table__V;

/* E_invalidTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_invalidTimer ti_sysbios_family_arm_lm4_Timer_E_invalidTimer__C = (((xdc_runtime_Error_Id)4939) << 16 | 0U);

/* E_notAvailable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_notAvailable ti_sysbios_family_arm_lm4_Timer_E_notAvailable__C = (((xdc_runtime_Error_Id)4975) << 16 | 0U);

/* E_cannotSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_cannotSupport ti_sysbios_family_arm_lm4_Timer_E_cannotSupport__C = (((xdc_runtime_Error_Id)5014) << 16 | 0U);

/* E_noaltclk__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C, ".const:ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_E_noaltclk ti_sysbios_family_arm_lm4_Timer_E_noaltclk__C = (((xdc_runtime_Error_Id)5198) << 16 | 0U);

/* anyMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_anyMask__C, ".const:ti_sysbios_family_arm_lm4_Timer_anyMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_anyMask ti_sysbios_family_arm_lm4_Timer_anyMask__C = (xdc_UInt)0xffU;

/* supportsAltclk__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C, ".const:ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_supportsAltclk ti_sysbios_family_arm_lm4_Timer_supportsAltclk__C = 1;

/* enableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_enableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_enableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc ti_sysbios_family_arm_lm4_Timer_enableFunc__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_enableFunc)(ti_sysbios_family_arm_lm4_Timer_enableTiva));

/* disableFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_disableFunc__C, ".const:ti_sysbios_family_arm_lm4_Timer_disableFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc ti_sysbios_family_arm_lm4_Timer_disableFunc__C = ((const CT__ti_sysbios_family_arm_lm4_Timer_disableFunc)(ti_sysbios_family_arm_lm4_Timer_disableTiva));

/* startupNeeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_startupNeeded__C, ".const:ti_sysbios_family_arm_lm4_Timer_startupNeeded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_startupNeeded ti_sysbios_family_arm_lm4_Timer_startupNeeded__C = (xdc_UInt)0x1U;

/* numTimerDevices__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C, ".const:ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_Timer_numTimerDevices ti_sysbios_family_arm_lm4_Timer_numTimerDevices__C = (xdc_Int)0x8;


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V")));
#endif
ti_sysbios_family_arm_lm4_TimestampProvider_Module_State__ ti_sysbios_family_arm_lm4_TimestampProvider_Module__state__V = {
    (ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1],  /* timer */
    (xdc_UInt32)0x0U,  /* hi */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__id ti_sysbios_family_arm_lm4_TimestampProvider_Module__id__C = (xdc_Bits16)0x803aU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8 ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__count ti_sysbios_family_arm_lm4_TimestampProvider_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap ti_sysbios_family_arm_lm4_TimestampProvider_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof ti_sysbios_family_arm_lm4_TimestampProvider_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_Object__table ti_sysbios_family_arm_lm4_TimestampProvider_Object__table__C = NULL;

/* useClockTimer__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer ti_sysbios_family_arm_lm4_TimestampProvider_useClockTimer__C = 0;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C, ".const:ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C");
__FAR__ const CT__ti_sysbios_family_arm_lm4_TimestampProvider_timerId ti_sysbios_family_arm_lm4_TimestampProvider_timerId__C = (xdc_UInt)(-0x0 - 1);


/*
 * ======== ti.sysbios.family.arm.m3.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_family_arm_m3_Hwi_Params ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_family_arm_m3_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)0xff,  /* priority */
    1,  /* useDispatcher */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_family_arm_m3_Hwi_Module__ ti_sysbios_family_arm_m3_Hwi_Module__root__V = {
    {&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_family_arm_m3_Hwi_Object__ ti_sysbios_family_arm_m3_Hwi_Object__table__V[2] = {
    {/* instance#0 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0])),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xffU,  /* priority */
        (xdc_Int16)0x23,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
    {/* instance#1 */
        0,
        ((xdc_UArg)((void*)(ti_sysbios_family_arm_lm4_Timer_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[1])),  /* arg */
        ((xdc_Void(*)(xdc_UArg f_arg0))(ti_sysbios_family_arm_lm4_Timer_isrStub__E)),  /* fxn */
        ((xdc_UArg)(0x3)),  /* irp */
        (xdc_UInt8)0xffU,  /* priority */
        (xdc_Int16)0x25,  /* intNum */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excActive ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excContext ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A[1] = {
    ((ti_sysbios_family_arm_m3_Hwi_ExcContext*)NULL),  /* [0] */
};

/* --> ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A */
__T1_ti_sysbios_family_arm_m3_Hwi_Module_State__excStack ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A[1] = {
    ((xdc_Ptr)NULL),  /* [0] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data:ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V __attribute__ ((section(".data_ti_sysbios_family_arm_m3_Hwi_Module__state__V")));
#endif
ti_sysbios_family_arm_m3_Hwi_Module_State__ ti_sysbios_family_arm_m3_Hwi_Module__state__V = {
    ((xdc_Char*)NULL),  /* taskSP */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excActive__A),  /* excActive */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excContext__A),  /* excContext */
    ((void*)ti_sysbios_family_arm_m3_Hwi_Module_State_0_excStack__A),  /* excStack */
    ((xdc_Ptr)NULL),  /* isrStack */
    ((xdc_Ptr)((void*)&__TI_STACK_BASE)),  /* isrStackBase */
    ((xdc_Ptr)((void*)&__TI_STACK_SIZE)),  /* isrStackSize */
    ((xdc_Ptr)(0x20000000)),  /* vectorTableBase */
    (xdc_UInt)0x101U,  /* swiTaskKeys */
    ((xdc_Ptr)((void*)&ti_sysbios_family_arm_m3_Hwi_dispatchTable[0])),  /* dispatchTable */
    0,  /* vnvicFlushRequired */
    ((void*)0),  /* intAffinity */
    ((void*)0),  /* intAffinityMasks */
};

/* --> ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A");
const __T1_ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A[2] = {
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext* f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(ti_sysbios_family_arm_m3_Hwi_ExcContext* f_arg0))NULL),  /* [1] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x390U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x390U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__id__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__id ti_sysbios_family_arm_m3_Hwi_Module__id__C = (xdc_Bits16)0x802fU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__count__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__count ti_sysbios_family_arm_m3_Hwi_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__heap__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__heap ti_sysbios_family_arm_m3_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__sizeof ti_sysbios_family_arm_m3_Hwi_Object__sizeof__C = sizeof(ti_sysbios_family_arm_m3_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__table__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_Object__table ti_sysbios_family_arm_m3_Hwi_Object__table__C = ti_sysbios_family_arm_m3_Hwi_Object__table__V;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport ti_sysbios_family_arm_m3_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport ti_sysbios_family_arm_m3_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport ti_sysbios_family_arm_m3_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* NUM_INTERRUPTS__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS ti_sysbios_family_arm_m3_Hwi_NUM_INTERRUPTS__C = (xdc_Int)0xd8;

/* NUM_PRIORITIES__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C, ".const:ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES ti_sysbios_family_arm_m3_Hwi_NUM_PRIORITIES__C = (xdc_Int)0x8;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LM_begin__C, ".const:ti_sysbios_family_arm_m3_Hwi_LM_begin__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LM_begin ti_sysbios_family_arm_m3_Hwi_LM_begin__C = (((xdc_runtime_Log_Event)7439) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_LD_end__C, ".const:ti_sysbios_family_arm_m3_Hwi_LD_end__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_LD_end ti_sysbios_family_arm_m3_Hwi_LD_end__C = (((xdc_runtime_Log_Event)7509) << 16 | 512);

/* A_unsupportedMaskingOption__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C, ".const:ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption ti_sysbios_family_arm_m3_Hwi_A_unsupportedMaskingOption__C = (((xdc_runtime_Assert_Id)2429) << 16 | 16);

/* E_badIntNum__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_badIntNum ti_sysbios_family_arm_m3_Hwi_E_badIntNum__C = (((xdc_runtime_Error_Id)4413) << 16 | 0U);

/* E_alreadyDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined ti_sysbios_family_arm_m3_Hwi_E_alreadyDefined__C = (((xdc_runtime_Error_Id)4453) << 16 | 0U);

/* E_hwiLimitExceeded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded ti_sysbios_family_arm_m3_Hwi_E_hwiLimitExceeded__C = (((xdc_runtime_Error_Id)4501) << 16 | 0U);

/* E_exception__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_exception__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_exception__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_exception ti_sysbios_family_arm_m3_Hwi_E_exception__C = (((xdc_runtime_Error_Id)4549) << 16 | 0U);

/* E_noIsr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_noIsr__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_noIsr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_noIsr ti_sysbios_family_arm_m3_Hwi_E_noIsr__C = (((xdc_runtime_Error_Id)4754) << 16 | 0U);

/* E_NMI__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_NMI__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_NMI__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_NMI ti_sysbios_family_arm_m3_Hwi_E_NMI__C = (((xdc_runtime_Error_Id)4782) << 16 | 0U);

/* E_hardFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_hardFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_hardFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_hardFault ti_sysbios_family_arm_m3_Hwi_E_hardFault__C = (((xdc_runtime_Error_Id)4792) << 16 | 0U);

/* E_memFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_memFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_memFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_memFault ti_sysbios_family_arm_m3_Hwi_E_memFault__C = (((xdc_runtime_Error_Id)4808) << 16 | 0U);

/* E_busFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_busFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_busFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_busFault ti_sysbios_family_arm_m3_Hwi_E_busFault__C = (((xdc_runtime_Error_Id)4838) << 16 | 0U);

/* E_usageFault__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_usageFault__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_usageFault__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_usageFault ti_sysbios_family_arm_m3_Hwi_E_usageFault__C = (((xdc_runtime_Error_Id)4868) << 16 | 0U);

/* E_svCall__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_svCall__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_svCall__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_svCall ti_sysbios_family_arm_m3_Hwi_E_svCall__C = (((xdc_runtime_Error_Id)4885) << 16 | 0U);

/* E_debugMon__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_debugMon__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_debugMon__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_debugMon ti_sysbios_family_arm_m3_Hwi_E_debugMon__C = (((xdc_runtime_Error_Id)4906) << 16 | 0U);

/* E_reserved__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_E_reserved__C, ".const:ti_sysbios_family_arm_m3_Hwi_E_reserved__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_E_reserved ti_sysbios_family_arm_m3_Hwi_E_reserved__C = (((xdc_runtime_Error_Id)4921) << 16 | 0U);

/* nullIsrFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc ti_sysbios_family_arm_m3_Hwi_nullIsrFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_nullIsrFunc)(ti_sysbios_family_arm_m3_Hwi_excHandlerAsm__I));

/* excHandlerFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc ti_sysbios_family_arm_m3_Hwi_excHandlerFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHandlerFunc)(ti_sysbios_family_arm_m3_Hwi_excHandlerMax__I));

/* excHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFunc__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFunc__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc ti_sysbios_family_arm_m3_Hwi_excHookFunc__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHookFunc)NULL);

/* excHookFuncs__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C, ".const:ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs ti_sysbios_family_arm_m3_Hwi_excHookFuncs__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_excHookFuncs)ti_sysbios_family_arm_m3_Hwi_excHookFuncs__A);

/* disablePriority__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_disablePriority__C, ".const:ti_sysbios_family_arm_m3_Hwi_disablePriority__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_disablePriority ti_sysbios_family_arm_m3_Hwi_disablePriority__C = (xdc_UInt)0x20U;

/* priGroup__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_priGroup__C, ".const:ti_sysbios_family_arm_m3_Hwi_priGroup__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_priGroup ti_sysbios_family_arm_m3_Hwi_priGroup__C = (xdc_UInt)0x0U;

/* numSparseInterrupts__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C, ".const:ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts ti_sysbios_family_arm_m3_Hwi_numSparseInterrupts__C = (xdc_UInt)0x0U;

/* swiDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable ti_sysbios_family_arm_m3_Hwi_swiDisable__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiDisable)(ti_sysbios_knl_Swi_disable__E));

/* swiRestore__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestore__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestore__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore ti_sysbios_family_arm_m3_Hwi_swiRestore__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiRestore)(ti_sysbios_knl_Swi_restore__E));

/* swiRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_swiRestoreHwi)(ti_sysbios_knl_Swi_restoreHwi__E));

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskDisable__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskDisable__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable ti_sysbios_family_arm_m3_Hwi_taskDisable__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestoreHwi__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C, ".const:ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi__C = ((const CT__ti_sysbios_family_arm_m3_Hwi_taskRestoreHwi)(ti_sysbios_knl_Task_restoreHwi__E));

/* ccr__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_ccr__C, ".const:ti_sysbios_family_arm_m3_Hwi_ccr__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_ccr ti_sysbios_family_arm_m3_Hwi_ccr__C = (xdc_UInt32)0x200U;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_hooks__C, ".const:ti_sysbios_family_arm_m3_Hwi_hooks__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_Hwi_hooks ti_sysbios_family_arm_m3_Hwi_hooks__C = {0, 0};


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__id__C = (xdc_Bits16)0x8030U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table ti_sysbios_family_arm_m3_IntrinsicsSupport_Object__table__C = NULL;


/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled ti_sysbios_family_arm_m3_TaskSupport_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded ti_sysbios_family_arm_m3_TaskSupport_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__id__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__id ti_sysbios_family_arm_m3_TaskSupport_Module__id__C = (xdc_Bits16)0x8031U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined ti_sysbios_family_arm_m3_TaskSupport_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8 ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_m3_TaskSupport_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__count__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__count ti_sysbios_family_arm_m3_TaskSupport_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__heap ti_sysbios_family_arm_m3_TaskSupport_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof ti_sysbios_family_arm_m3_TaskSupport_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_Object__table__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_Object__table ti_sysbios_family_arm_m3_TaskSupport_Object__table__C = NULL;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize ti_sysbios_family_arm_m3_TaskSupport_defaultStackSize__C = (xdc_SizeT)0x800;

/* stackAlignment__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C, ".const:ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C");
__FAR__ const CT__ti_sysbios_family_arm_m3_TaskSupport_stackAlignment ti_sysbios_family_arm_m3_TaskSupport_stackAlignment__C = (xdc_UInt)0x8U;


/*
 * ======== ti.sysbios.family.arm.msp432e4.init.Boot INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsEnabled__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsEnabled ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsIncluded__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsIncluded ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsMask__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsMask ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsMask__C = ((const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__gateObj__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__gateObj ti_sysbios_family_arm_msp432e4_init_Boot_Module__gateObj__C = ((const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__gatePrms__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__gatePrms ti_sysbios_family_arm_msp432e4_init_Boot_Module__gatePrms__C = ((const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__id__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__id__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__id ti_sysbios_family_arm_msp432e4_init_Boot_Module__id__C = (xdc_Bits16)0x802dU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerDefined__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerDefined ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerObj__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerObj ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerObj__C = ((const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn0__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn0 ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn0__C = ((const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn1__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn1 ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn1__C = ((const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn2__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn2 ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn2__C = ((const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn4__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn4 ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn4__C = ((const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn8__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn8 ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn8__C = ((const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Object__count__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Object__count__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Object__count ti_sysbios_family_arm_msp432e4_init_Boot_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Object__heap__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Object__heap__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Object__heap ti_sysbios_family_arm_msp432e4_init_Boot_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Object__sizeof__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Object__sizeof ti_sysbios_family_arm_msp432e4_init_Boot_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_family_arm_msp432e4_init_Boot_Object__table__C, ".const:ti_sysbios_family_arm_msp432e4_init_Boot_Object__table__C");
__FAR__ const CT__ti_sysbios_family_arm_msp432e4_init_Boot_Object__table ti_sysbios_family_arm_msp432e4_init_Boot_Object__table__C = NULL;


/*
 * ======== ti.sysbios.gates.GateHwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__PARAMS__C, ".const:ti_sysbios_gates_GateHwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateHwi_Params ti_sysbios_gates_GateHwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateHwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateHwi_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateHwi_Module__ ti_sysbios_gates_GateHwi_Module__root__V = {
    {&ti_sysbios_gates_GateHwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateHwi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateHwi_Object__ ti_sysbios_gates_GateHwi_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateHwi_Module__FXNS__C,
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsEnabled ti_sysbios_gates_GateHwi_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsIncluded ti_sysbios_gates_GateHwi_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__diagsMask__C, ".const:ti_sysbios_gates_GateHwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__diagsMask ti_sysbios_gates_GateHwi_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateHwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gateObj__C, ".const:ti_sysbios_gates_GateHwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gateObj ti_sysbios_gates_GateHwi_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__gatePrms__C, ".const:ti_sysbios_gates_GateHwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__gatePrms ti_sysbios_gates_GateHwi_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateHwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__id__C, ".const:ti_sysbios_gates_GateHwi_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__id ti_sysbios_gates_GateHwi_Module__id__C = (xdc_Bits16)0x8037U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerDefined ti_sysbios_gates_GateHwi_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerObj__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerObj ti_sysbios_gates_GateHwi_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateHwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateHwi_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__count__C, ".const:ti_sysbios_gates_GateHwi_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__count ti_sysbios_gates_GateHwi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__heap__C, ".const:ti_sysbios_gates_GateHwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__heap ti_sysbios_gates_GateHwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__sizeof__C, ".const:ti_sysbios_gates_GateHwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__sizeof ti_sysbios_gates_GateHwi_Object__sizeof__C = sizeof(ti_sysbios_gates_GateHwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__table__C, ".const:ti_sysbios_gates_GateHwi_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateHwi_Object__table ti_sysbios_gates_GateHwi_Object__table__C = ti_sysbios_gates_GateHwi_Object__table__V;


/*
 * ======== ti.sysbios.gates.GateMutex INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__PARAMS__C, ".const:ti_sysbios_gates_GateMutex_Object__PARAMS__C");
__FAR__ const ti_sysbios_gates_GateMutex_Params ti_sysbios_gates_GateMutex_Object__PARAMS__C = {
    sizeof (ti_sysbios_gates_GateMutex_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_gates_GateMutex_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_gates_GateMutex_Module__ ti_sysbios_gates_GateMutex_Module__root__V = {
    {&ti_sysbios_gates_GateMutex_Module__root__V.link,  /* link.next */
    &ti_sysbios_gates_GateMutex_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_gates_GateMutex_Object__ ti_sysbios_gates_GateMutex_Object__table__V[2] = {
    {/* instance#0 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1U,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1U,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[0].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
    {/* instance#1 */
        &ti_sysbios_gates_GateMutex_Module__FXNS__C,
        0,  /* owner */
        {
            0,  /* event */
            (xdc_UInt)0x1U,  /* eventId */
            ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
            (xdc_UInt16)0x1U,  /* count */
            {
                {
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* next */
                    ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_gates_GateMutex_Object__table__V[1].Object_field_sem.Object_field_pendQ.elem)),  /* prev */
                },  /* elem */
            },  /* Object_field_pendQ */
        },  /* Object_field_sem */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsEnabled__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsEnabled ti_sysbios_gates_GateMutex_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsIncluded__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsIncluded ti_sysbios_gates_GateMutex_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__diagsMask__C, ".const:ti_sysbios_gates_GateMutex_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__diagsMask ti_sysbios_gates_GateMutex_Module__diagsMask__C = ((const CT__ti_sysbios_gates_GateMutex_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gateObj__C, ".const:ti_sysbios_gates_GateMutex_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gateObj ti_sysbios_gates_GateMutex_Module__gateObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__gatePrms__C, ".const:ti_sysbios_gates_GateMutex_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__gatePrms ti_sysbios_gates_GateMutex_Module__gatePrms__C = ((const CT__ti_sysbios_gates_GateMutex_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__id__C, ".const:ti_sysbios_gates_GateMutex_Module__id__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__id ti_sysbios_gates_GateMutex_Module__id__C = (xdc_Bits16)0x8038U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerDefined__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerDefined ti_sysbios_gates_GateMutex_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerObj__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerObj ti_sysbios_gates_GateMutex_Module__loggerObj__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn0__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn1__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn2__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn4__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Module__loggerFxn8__C, ".const:ti_sysbios_gates_GateMutex_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C = ((const CT__ti_sysbios_gates_GateMutex_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__count__C, ".const:ti_sysbios_gates_GateMutex_Object__count__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__count ti_sysbios_gates_GateMutex_Object__count__C = 2;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__heap__C, ".const:ti_sysbios_gates_GateMutex_Object__heap__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__heap ti_sysbios_gates_GateMutex_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__sizeof__C, ".const:ti_sysbios_gates_GateMutex_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__sizeof ti_sysbios_gates_GateMutex_Object__sizeof__C = sizeof(ti_sysbios_gates_GateMutex_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__table__C, ".const:ti_sysbios_gates_GateMutex_Object__table__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_Object__table ti_sysbios_gates_GateMutex_Object__table__C = ti_sysbios_gates_GateMutex_Object__table__V;

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_A_badContext__C, ".const:ti_sysbios_gates_GateMutex_A_badContext__C");
__FAR__ const CT__ti_sysbios_gates_GateMutex_A_badContext ti_sysbios_gates_GateMutex_A_badContext__C = (((xdc_runtime_Assert_Id)3672) << 16 | 16);


/*
 * ======== ti.sysbios.hal.Hwi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__PARAMS__C, ".const:ti_sysbios_hal_Hwi_Object__PARAMS__C");
__FAR__ const ti_sysbios_hal_Hwi_Params ti_sysbios_hal_Hwi_Object__PARAMS__C = {
    sizeof (ti_sysbios_hal_Hwi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_hal_Hwi_Object__PARAMS__C.__iprms, /* instance */
    ti_sysbios_interfaces_IHwi_MaskingOption_LOWER,  /* maskSetting */
    ((xdc_UArg)(0x0)),  /* arg */
    1,  /* enableInt */
    (xdc_Int)(-0x0 - 1),  /* eventId */
    (xdc_Int)(-0x0 - 1),  /* priority */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_hal_Hwi_Module__ ti_sysbios_hal_Hwi_Module__root__V = {
    {&ti_sysbios_hal_Hwi_Module__root__V.link,  /* link.next */
    &ti_sysbios_hal_Hwi_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsEnabled__C, ".const:ti_sysbios_hal_Hwi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsEnabled ti_sysbios_hal_Hwi_Module__diagsEnabled__C = (xdc_Bits32)0x390U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsIncluded__C, ".const:ti_sysbios_hal_Hwi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsIncluded ti_sysbios_hal_Hwi_Module__diagsIncluded__C = (xdc_Bits32)0x390U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__diagsMask__C, ".const:ti_sysbios_hal_Hwi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__diagsMask ti_sysbios_hal_Hwi_Module__diagsMask__C = ((const CT__ti_sysbios_hal_Hwi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gateObj__C, ".const:ti_sysbios_hal_Hwi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gateObj ti_sysbios_hal_Hwi_Module__gateObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__gatePrms__C, ".const:ti_sysbios_hal_Hwi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__gatePrms ti_sysbios_hal_Hwi_Module__gatePrms__C = ((const CT__ti_sysbios_hal_Hwi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__id__C, ".const:ti_sysbios_hal_Hwi_Module__id__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__id ti_sysbios_hal_Hwi_Module__id__C = (xdc_Bits16)0x8027U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerDefined__C, ".const:ti_sysbios_hal_Hwi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerDefined ti_sysbios_hal_Hwi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerObj__C, ".const:ti_sysbios_hal_Hwi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerObj ti_sysbios_hal_Hwi_Module__loggerObj__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn0__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn1__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn2__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn4__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Module__loggerFxn8__C, ".const:ti_sysbios_hal_Hwi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C = ((const CT__ti_sysbios_hal_Hwi_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__count__C, ".const:ti_sysbios_hal_Hwi_Object__count__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__count ti_sysbios_hal_Hwi_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__heap__C, ".const:ti_sysbios_hal_Hwi_Object__heap__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__heap ti_sysbios_hal_Hwi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__sizeof__C, ".const:ti_sysbios_hal_Hwi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__sizeof ti_sysbios_hal_Hwi_Object__sizeof__C = sizeof(ti_sysbios_hal_Hwi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__table__C, ".const:ti_sysbios_hal_Hwi_Object__table__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_Object__table ti_sysbios_hal_Hwi_Object__table__C = NULL;

/* dispatcherAutoNestingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport ti_sysbios_hal_Hwi_dispatcherAutoNestingSupport__C = 1;

/* dispatcherSwiSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherSwiSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherSwiSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherSwiSupport ti_sysbios_hal_Hwi_dispatcherSwiSupport__C = 1;

/* dispatcherTaskSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherTaskSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherTaskSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherTaskSupport ti_sysbios_hal_Hwi_dispatcherTaskSupport__C = 1;

/* dispatcherIrpTrackingSupport__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C, ".const:ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport ti_sysbios_hal_Hwi_dispatcherIrpTrackingSupport__C = 1;

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_E_stackOverflow__C, ".const:ti_sysbios_hal_Hwi_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_hal_Hwi_E_stackOverflow ti_sysbios_hal_Hwi_E_stackOverflow__C = (((xdc_runtime_Error_Id)4376) << 16 | 0U);


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.heaps.HeapMem INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__PARAMS__C, ".const:ti_sysbios_heaps_HeapMem_Object__PARAMS__C");
__FAR__ const ti_sysbios_heaps_HeapMem_Params ti_sysbios_heaps_HeapMem_Object__PARAMS__C = {
    sizeof (ti_sysbios_heaps_HeapMem_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C.__iprms, /* instance */
    (xdc_SizeT)0x0,  /* minBlockAlign */
    ((xdc_Ptr)(0x0)),  /* buf */
    ((xdc_UArg)(0x0)),  /* size */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_heaps_HeapMem_Module__ ti_sysbios_heaps_HeapMem_Module__root__V = {
    {&ti_sysbios_heaps_HeapMem_Module__root__V.link,  /* link.next */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_heaps_HeapMem_Object__ ti_sysbios_heaps_HeapMem_Object__table__V[1] = {
    {/* instance#0 */
        &ti_sysbios_heaps_HeapMem_Module__FXNS__C,
        ((xdc_UArg)(0x8)),  /* align */
        ((void*)0),  /* buf */
        {
            ((ti_sysbios_heaps_HeapMem_Header*)NULL),  /* next */
            ((xdc_UArg)(0x0)),  /* size */
        },  /* head */
        (xdc_SizeT)0x8,  /* minBlockAlign */
    },
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsEnabled ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsIncluded ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__diagsMask__C, ".const:ti_sysbios_heaps_HeapMem_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask ti_sysbios_heaps_HeapMem_Module__diagsMask__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gateObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gateObj ti_sysbios_heaps_HeapMem_Module__gateObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateMutex_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__gatePrms__C, ".const:ti_sysbios_heaps_HeapMem_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms ti_sysbios_heaps_HeapMem_Module__gatePrms__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__id__C, ".const:ti_sysbios_heaps_HeapMem_Module__id__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__id ti_sysbios_heaps_HeapMem_Module__id__C = (xdc_Bits16)0x8033U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerDefined__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerDefined ti_sysbios_heaps_HeapMem_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerObj__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj ti_sysbios_heaps_HeapMem_Module__loggerObj__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C, ".const:ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C = ((const CT__ti_sysbios_heaps_HeapMem_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__count__C, ".const:ti_sysbios_heaps_HeapMem_Object__count__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__count ti_sysbios_heaps_HeapMem_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__heap__C, ".const:ti_sysbios_heaps_HeapMem_Object__heap__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__heap ti_sysbios_heaps_HeapMem_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__sizeof__C, ".const:ti_sysbios_heaps_HeapMem_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__sizeof ti_sysbios_heaps_HeapMem_Object__sizeof__C = sizeof(ti_sysbios_heaps_HeapMem_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__table__C, ".const:ti_sysbios_heaps_HeapMem_Object__table__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_Object__table ti_sysbios_heaps_HeapMem_Object__table__C = ti_sysbios_heaps_HeapMem_Object__table__V;

/* A_zeroBlock__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_zeroBlock__C, ".const:ti_sysbios_heaps_HeapMem_A_zeroBlock__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_zeroBlock ti_sysbios_heaps_HeapMem_A_zeroBlock__C = (((xdc_runtime_Assert_Id)2969) << 16 | 16);

/* A_heapSize__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_heapSize__C, ".const:ti_sysbios_heaps_HeapMem_A_heapSize__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_heapSize ti_sysbios_heaps_HeapMem_A_heapSize__C = (((xdc_runtime_Assert_Id)3005) << 16 | 16);

/* A_align__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_align__C, ".const:ti_sysbios_heaps_HeapMem_A_align__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_align ti_sysbios_heaps_HeapMem_A_align__C = (((xdc_runtime_Assert_Id)3050) << 16 | 16);

/* E_memory__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_E_memory__C, ".const:ti_sysbios_heaps_HeapMem_E_memory__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_E_memory ti_sysbios_heaps_HeapMem_E_memory__C = (((xdc_runtime_Error_Id)5120) << 16 | 0U);

/* A_invalidFree__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_A_invalidFree__C, ".const:ti_sysbios_heaps_HeapMem_A_invalidFree__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_A_invalidFree ti_sysbios_heaps_HeapMem_A_invalidFree__C = (((xdc_runtime_Assert_Id)2941) << 16 | 16);

/* primaryHeapBaseAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapBaseAddr)((void*)&__primary_heap_start__));

/* primaryHeapEndAddr__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C, ".const:ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr ti_sysbios_heaps_HeapMem_primaryHeapEndAddr__C = ((const CT__ti_sysbios_heaps_HeapMem_primaryHeapEndAddr)((void*)&__primary_heap_end__));

/* reqAlign__C */
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_reqAlign__C, ".const:ti_sysbios_heaps_HeapMem_reqAlign__C");
__FAR__ const CT__ti_sysbios_heaps_HeapMem_reqAlign ti_sysbios_heaps_HeapMem_reqAlign__C = (xdc_SizeT)0x8;


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Clock INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__PARAMS__C, ".const:ti_sysbios_knl_Clock_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Clock_Params ti_sysbios_knl_Clock_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Clock_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Clock_Object__PARAMS__C.__iprms, /* instance */
    0,  /* startFlag */
    (xdc_UInt32)0x0U,  /* period */
    ((xdc_UArg)NULL),  /* arg */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Clock_Module__ ti_sysbios_knl_Clock_Module__root__V = {
    {&ti_sysbios_knl_Clock_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Clock_Module__root__V.link},  /* link.prev */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Clock_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Clock_Module__state__V")));
#endif
ti_sysbios_knl_Clock_Module_State__ ti_sysbios_knl_Clock_Module__state__V = {
    (xdc_UInt32)0x0U,  /* ticks */
    (xdc_UInt)0x0U,  /* swiCount */
    (ti_sysbios_knl_Clock_TimerProxy_Handle)&ti_sysbios_family_arm_lm4_Timer_Object__table__V[0],  /* timer */
    (ti_sysbios_knl_Swi_Handle)&ti_sysbios_knl_Swi_Object__table__V[0],  /* swi */
    (xdc_UInt)0x1U,  /* numTickSkip */
    (xdc_UInt32)0x1U,  /* nextScheduledTick */
    (xdc_UInt32)0x0U,  /* maxSkippable */
    0,  /* inWorkFunc */
    0,  /* startDuringWorkFunc */
    0,  /* ticking */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Clock_Module__state__V.Object_field_clockQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_clockQ */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Clock_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsEnabled ti_sysbios_knl_Clock_Module__diagsEnabled__C = (xdc_Bits32)0x790U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Clock_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsIncluded ti_sysbios_knl_Clock_Module__diagsIncluded__C = (xdc_Bits32)0x790U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__diagsMask__C, ".const:ti_sysbios_knl_Clock_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__diagsMask ti_sysbios_knl_Clock_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Clock_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gateObj__C, ".const:ti_sysbios_knl_Clock_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gateObj ti_sysbios_knl_Clock_Module__gateObj__C = ((const CT__ti_sysbios_knl_Clock_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__gatePrms__C, ".const:ti_sysbios_knl_Clock_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__gatePrms ti_sysbios_knl_Clock_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Clock_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__id__C, ".const:ti_sysbios_knl_Clock_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__id ti_sysbios_knl_Clock_Module__id__C = (xdc_Bits16)0x801eU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerDefined__C, ".const:ti_sysbios_knl_Clock_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerDefined ti_sysbios_knl_Clock_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerObj__C, ".const:ti_sysbios_knl_Clock_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerObj ti_sysbios_knl_Clock_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn0 ti_sysbios_knl_Clock_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn1 ti_sysbios_knl_Clock_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn2 ti_sysbios_knl_Clock_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn4 ti_sysbios_knl_Clock_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Clock_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Module__loggerFxn8 ti_sysbios_knl_Clock_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Clock_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__count__C, ".const:ti_sysbios_knl_Clock_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__count ti_sysbios_knl_Clock_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__heap__C, ".const:ti_sysbios_knl_Clock_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__heap ti_sysbios_knl_Clock_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__sizeof__C, ".const:ti_sysbios_knl_Clock_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__sizeof ti_sysbios_knl_Clock_Object__sizeof__C = sizeof(ti_sysbios_knl_Clock_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__table__C, ".const:ti_sysbios_knl_Clock_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Clock_Object__table ti_sysbios_knl_Clock_Object__table__C = NULL;

/* LW_delayed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LW_delayed__C, ".const:ti_sysbios_knl_Clock_LW_delayed__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LW_delayed ti_sysbios_knl_Clock_LW_delayed__C = (((xdc_runtime_Log_Event)6494) << 16 | 1024);

/* LM_tick__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_tick__C, ".const:ti_sysbios_knl_Clock_LM_tick__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_tick ti_sysbios_knl_Clock_LM_tick__C = (((xdc_runtime_Log_Event)6516) << 16 | 768);

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_LM_begin__C, ".const:ti_sysbios_knl_Clock_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_LM_begin ti_sysbios_knl_Clock_LM_begin__C = (((xdc_runtime_Log_Event)6534) << 16 | 768);

/* A_clockDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_clockDisabled__C, ".const:ti_sysbios_knl_Clock_A_clockDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_clockDisabled ti_sysbios_knl_Clock_A_clockDisabled__C = (((xdc_runtime_Assert_Id)795) << 16 | 16);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_A_badThreadType__C, ".const:ti_sysbios_knl_Clock_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Clock_A_badThreadType ti_sysbios_knl_Clock_A_badThreadType__C = (((xdc_runtime_Assert_Id)876) << 16 | 16);

/* serviceMargin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_serviceMargin__C, ".const:ti_sysbios_knl_Clock_serviceMargin__C");
__FAR__ const CT__ti_sysbios_knl_Clock_serviceMargin ti_sysbios_knl_Clock_serviceMargin__C = (xdc_UInt32)0x0U;

/* tickSource__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickSource__C, ".const:ti_sysbios_knl_Clock_tickSource__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickSource ti_sysbios_knl_Clock_tickSource__C = ti_sysbios_knl_Clock_TickSource_TIMER;

/* tickMode__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickMode__C, ".const:ti_sysbios_knl_Clock_tickMode__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickMode ti_sysbios_knl_Clock_tickMode__C = ti_sysbios_knl_Clock_TickMode_PERIODIC;

/* timerId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_timerId__C, ".const:ti_sysbios_knl_Clock_timerId__C");
__FAR__ const CT__ti_sysbios_knl_Clock_timerId ti_sysbios_knl_Clock_timerId__C = (xdc_UInt)(-0x0 - 1);

/* tickPeriod__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_tickPeriod__C, ".const:ti_sysbios_knl_Clock_tickPeriod__C");
__FAR__ const CT__ti_sysbios_knl_Clock_tickPeriod ti_sysbios_knl_Clock_tickPeriod__C = (xdc_UInt32)0x3e8U;

/* doTickFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_doTickFunc__C, ".const:ti_sysbios_knl_Clock_doTickFunc__C");
__FAR__ const CT__ti_sysbios_knl_Clock_doTickFunc ti_sysbios_knl_Clock_doTickFunc__C = ((const CT__ti_sysbios_knl_Clock_doTickFunc)(ti_sysbios_knl_Clock_doTick__I));

/* triggerClock__C */
#pragma DATA_SECTION(ti_sysbios_knl_Clock_triggerClock__C, ".const:ti_sysbios_knl_Clock_triggerClock__C");
__FAR__ const CT__ti_sysbios_knl_Clock_triggerClock ti_sysbios_knl_Clock_triggerClock__C = 0;


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Event INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__PARAMS__C, ".const:ti_sysbios_knl_Event_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Event_Params ti_sysbios_knl_Event_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Event_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Event_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Event_Module__ ti_sysbios_knl_Event_Module__root__V = {
    {&ti_sysbios_knl_Event_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Event_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Event_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsEnabled ti_sysbios_knl_Event_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Event_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsIncluded ti_sysbios_knl_Event_Module__diagsIncluded__C = (xdc_Bits32)0x390U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__diagsMask__C, ".const:ti_sysbios_knl_Event_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__diagsMask ti_sysbios_knl_Event_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Event_Module__diagsMask)((void*)&ti_sysbios_knl_Event_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gateObj__C, ".const:ti_sysbios_knl_Event_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gateObj ti_sysbios_knl_Event_Module__gateObj__C = ((const CT__ti_sysbios_knl_Event_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__gatePrms__C, ".const:ti_sysbios_knl_Event_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__gatePrms ti_sysbios_knl_Event_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Event_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__id__C, ".const:ti_sysbios_knl_Event_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__id ti_sysbios_knl_Event_Module__id__C = (xdc_Bits16)0x8021U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerDefined__C, ".const:ti_sysbios_knl_Event_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerDefined ti_sysbios_knl_Event_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerObj__C, ".const:ti_sysbios_knl_Event_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerObj ti_sysbios_knl_Event_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Event_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn0 ti_sysbios_knl_Event_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn1 ti_sysbios_knl_Event_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn2 ti_sysbios_knl_Event_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn4 ti_sysbios_knl_Event_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Event_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Event_Module__loggerFxn8 ti_sysbios_knl_Event_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Event_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__count__C, ".const:ti_sysbios_knl_Event_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__count ti_sysbios_knl_Event_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__heap__C, ".const:ti_sysbios_knl_Event_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__heap ti_sysbios_knl_Event_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__sizeof__C, ".const:ti_sysbios_knl_Event_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__sizeof ti_sysbios_knl_Event_Object__sizeof__C = sizeof(ti_sysbios_knl_Event_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__table__C, ".const:ti_sysbios_knl_Event_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Event_Object__table ti_sysbios_knl_Event_Object__table__C = NULL;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_post__C, ".const:ti_sysbios_knl_Event_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_post ti_sysbios_knl_Event_LM_post__C = (((xdc_runtime_Log_Event)6566) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_LM_pend__C, ".const:ti_sysbios_knl_Event_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Event_LM_pend ti_sysbios_knl_Event_LM_pend__C = (((xdc_runtime_Log_Event)6620) << 16 | 768);

/* A_nullEventMasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventMasks__C, ".const:ti_sysbios_knl_Event_A_nullEventMasks__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventMasks ti_sysbios_knl_Event_A_nullEventMasks__C = (((xdc_runtime_Assert_Id)946) << 16 | 16);

/* A_nullEventId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_nullEventId__C, ".const:ti_sysbios_knl_Event_A_nullEventId__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_nullEventId ti_sysbios_knl_Event_A_nullEventId__C = (((xdc_runtime_Assert_Id)993) << 16 | 16);

/* A_eventInUse__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_eventInUse__C, ".const:ti_sysbios_knl_Event_A_eventInUse__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_eventInUse ti_sysbios_knl_Event_A_eventInUse__C = (((xdc_runtime_Assert_Id)1032) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_badContext__C, ".const:ti_sysbios_knl_Event_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_badContext ti_sysbios_knl_Event_A_badContext__C = (((xdc_runtime_Assert_Id)1075) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Event_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Event_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Event_A_pendTaskDisabled ti_sysbios_knl_Event_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1138) << 16 | 16);


/*
 * ======== ti.sysbios.knl.Idle INITIALIZERS ========
 */

/* --> ti_sysbios_knl_Idle_funcList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__A, ".const:ti_sysbios_knl_Idle_funcList__A");
const __T1_ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__A[3] = {
    ((xdc_Void(*)(xdc_Void))(Power_idleFunc)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_checkStack)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_utils_Load_idleFxn__E)),  /* [2] */
};

/* --> ti_sysbios_knl_Idle_coreList__A */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__A, ".const:ti_sysbios_knl_Idle_coreList__A");
const __T1_ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__A[3] = {
    (xdc_UInt)0x0U,  /* [0] */
    (xdc_UInt)0x0U,  /* [1] */
    (xdc_UInt)0x0U,  /* [2] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Idle_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsEnabled ti_sysbios_knl_Idle_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Idle_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsIncluded ti_sysbios_knl_Idle_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__diagsMask__C, ".const:ti_sysbios_knl_Idle_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__diagsMask ti_sysbios_knl_Idle_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Idle_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gateObj__C, ".const:ti_sysbios_knl_Idle_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gateObj ti_sysbios_knl_Idle_Module__gateObj__C = ((const CT__ti_sysbios_knl_Idle_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__gatePrms__C, ".const:ti_sysbios_knl_Idle_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__gatePrms ti_sysbios_knl_Idle_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Idle_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__id__C, ".const:ti_sysbios_knl_Idle_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__id ti_sysbios_knl_Idle_Module__id__C = (xdc_Bits16)0x801fU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerDefined__C, ".const:ti_sysbios_knl_Idle_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerDefined ti_sysbios_knl_Idle_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerObj__C, ".const:ti_sysbios_knl_Idle_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerObj ti_sysbios_knl_Idle_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn0 ti_sysbios_knl_Idle_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn1 ti_sysbios_knl_Idle_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn2 ti_sysbios_knl_Idle_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn4 ti_sysbios_knl_Idle_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Idle_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Module__loggerFxn8 ti_sysbios_knl_Idle_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Idle_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__count__C, ".const:ti_sysbios_knl_Idle_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__count ti_sysbios_knl_Idle_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__heap__C, ".const:ti_sysbios_knl_Idle_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__heap ti_sysbios_knl_Idle_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__sizeof__C, ".const:ti_sysbios_knl_Idle_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__sizeof ti_sysbios_knl_Idle_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_Object__table__C, ".const:ti_sysbios_knl_Idle_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Idle_Object__table ti_sysbios_knl_Idle_Object__table__C = NULL;

/* funcList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_funcList__C, ".const:ti_sysbios_knl_Idle_funcList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_funcList ti_sysbios_knl_Idle_funcList__C = {3, ((__T1_ti_sysbios_knl_Idle_funcList const  *)ti_sysbios_knl_Idle_funcList__A)};

/* coreList__C */
#pragma DATA_SECTION(ti_sysbios_knl_Idle_coreList__C, ".const:ti_sysbios_knl_Idle_coreList__C");
__FAR__ const CT__ti_sysbios_knl_Idle_coreList ti_sysbios_knl_Idle_coreList__C = {3, ((__T1_ti_sysbios_knl_Idle_coreList const  *)ti_sysbios_knl_Idle_coreList__A)};


/*
 * ======== ti.sysbios.knl.Intrinsics INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsEnabled ti_sysbios_knl_Intrinsics_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsIncluded ti_sysbios_knl_Intrinsics_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__diagsMask__C, ".const:ti_sysbios_knl_Intrinsics_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask ti_sysbios_knl_Intrinsics_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gateObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gateObj ti_sysbios_knl_Intrinsics_Module__gateObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__gatePrms__C, ".const:ti_sysbios_knl_Intrinsics_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms ti_sysbios_knl_Intrinsics_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__id__C, ".const:ti_sysbios_knl_Intrinsics_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__id ti_sysbios_knl_Intrinsics_Module__id__C = (xdc_Bits16)0x8020U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerDefined__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerDefined ti_sysbios_knl_Intrinsics_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerObj__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj ti_sysbios_knl_Intrinsics_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0 ti_sysbios_knl_Intrinsics_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1 ti_sysbios_knl_Intrinsics_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2 ti_sysbios_knl_Intrinsics_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4 ti_sysbios_knl_Intrinsics_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8 ti_sysbios_knl_Intrinsics_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Intrinsics_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__count__C, ".const:ti_sysbios_knl_Intrinsics_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__count ti_sysbios_knl_Intrinsics_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__heap__C, ".const:ti_sysbios_knl_Intrinsics_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__heap ti_sysbios_knl_Intrinsics_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__sizeof__C, ".const:ti_sysbios_knl_Intrinsics_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__sizeof ti_sysbios_knl_Intrinsics_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Intrinsics_Object__table__C, ".const:ti_sysbios_knl_Intrinsics_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Intrinsics_Object__table ti_sysbios_knl_Intrinsics_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.knl.Queue INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__PARAMS__C, ".const:ti_sysbios_knl_Queue_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Queue_Params ti_sysbios_knl_Queue_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Queue_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Queue_Object__PARAMS__C.__iprms, /* instance */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Queue_Module__ ti_sysbios_knl_Queue_Module__root__V = {
    {&ti_sysbios_knl_Queue_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Queue_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Queue_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsEnabled ti_sysbios_knl_Queue_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Queue_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsIncluded ti_sysbios_knl_Queue_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__diagsMask__C, ".const:ti_sysbios_knl_Queue_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__diagsMask ti_sysbios_knl_Queue_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Queue_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gateObj__C, ".const:ti_sysbios_knl_Queue_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gateObj ti_sysbios_knl_Queue_Module__gateObj__C = ((const CT__ti_sysbios_knl_Queue_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__gatePrms__C, ".const:ti_sysbios_knl_Queue_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__gatePrms ti_sysbios_knl_Queue_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Queue_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__id__C, ".const:ti_sysbios_knl_Queue_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__id ti_sysbios_knl_Queue_Module__id__C = (xdc_Bits16)0x8022U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerDefined__C, ".const:ti_sysbios_knl_Queue_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerDefined ti_sysbios_knl_Queue_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerObj__C, ".const:ti_sysbios_knl_Queue_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerObj ti_sysbios_knl_Queue_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn0 ti_sysbios_knl_Queue_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn1 ti_sysbios_knl_Queue_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn2 ti_sysbios_knl_Queue_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn4 ti_sysbios_knl_Queue_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Queue_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Module__loggerFxn8 ti_sysbios_knl_Queue_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Queue_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__count__C, ".const:ti_sysbios_knl_Queue_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__count ti_sysbios_knl_Queue_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__heap__C, ".const:ti_sysbios_knl_Queue_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__heap ti_sysbios_knl_Queue_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__sizeof__C, ".const:ti_sysbios_knl_Queue_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__sizeof ti_sysbios_knl_Queue_Object__sizeof__C = sizeof(ti_sysbios_knl_Queue_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__table__C, ".const:ti_sysbios_knl_Queue_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Queue_Object__table ti_sysbios_knl_Queue_Object__table__C = NULL;


/*
 * ======== ti.sysbios.knl.Semaphore INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__PARAMS__C, ".const:ti_sysbios_knl_Semaphore_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Semaphore_Params ti_sysbios_knl_Semaphore_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Semaphore_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Semaphore_Object__PARAMS__C.__iprms, /* instance */
    0,  /* event */
    (xdc_UInt)0x1U,  /* eventId */
    ti_sysbios_knl_Semaphore_Mode_COUNTING,  /* mode */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Semaphore_Module__ ti_sysbios_knl_Semaphore_Module__root__V = {
    {&ti_sysbios_knl_Semaphore_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Semaphore_Module__root__V.link},  /* link.prev */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsEnabled ti_sysbios_knl_Semaphore_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsIncluded ti_sysbios_knl_Semaphore_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__diagsMask__C, ".const:ti_sysbios_knl_Semaphore_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__diagsMask ti_sysbios_knl_Semaphore_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Semaphore_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gateObj__C, ".const:ti_sysbios_knl_Semaphore_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gateObj ti_sysbios_knl_Semaphore_Module__gateObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__gatePrms__C, ".const:ti_sysbios_knl_Semaphore_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__gatePrms ti_sysbios_knl_Semaphore_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Semaphore_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__id__C, ".const:ti_sysbios_knl_Semaphore_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__id ti_sysbios_knl_Semaphore_Module__id__C = (xdc_Bits16)0x8023U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerDefined__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerDefined ti_sysbios_knl_Semaphore_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerObj__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerObj ti_sysbios_knl_Semaphore_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Semaphore_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Semaphore_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__count__C, ".const:ti_sysbios_knl_Semaphore_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__count ti_sysbios_knl_Semaphore_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__heap__C, ".const:ti_sysbios_knl_Semaphore_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__heap ti_sysbios_knl_Semaphore_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__sizeof__C, ".const:ti_sysbios_knl_Semaphore_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__sizeof ti_sysbios_knl_Semaphore_Object__sizeof__C = sizeof(ti_sysbios_knl_Semaphore_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__table__C, ".const:ti_sysbios_knl_Semaphore_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_Object__table ti_sysbios_knl_Semaphore_Object__table__C = NULL;

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_post__C, ".const:ti_sysbios_knl_Semaphore_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_post ti_sysbios_knl_Semaphore_LM_post__C = (((xdc_runtime_Log_Event)6701) << 16 | 768);

/* LM_pend__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_LM_pend__C, ".const:ti_sysbios_knl_Semaphore_LM_pend__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_LM_pend ti_sysbios_knl_Semaphore_LM_pend__C = (((xdc_runtime_Log_Event)6731) << 16 | 768);

/* A_noEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_noEvents__C, ".const:ti_sysbios_knl_Semaphore_A_noEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_noEvents ti_sysbios_knl_Semaphore_A_noEvents__C = (((xdc_runtime_Assert_Id)1286) << 16 | 16);

/* A_invTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_invTimeout__C, ".const:ti_sysbios_knl_Semaphore_A_invTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_invTimeout ti_sysbios_knl_Semaphore_A_invTimeout__C = (((xdc_runtime_Assert_Id)1341) << 16 | 16);

/* A_badContext__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_badContext__C, ".const:ti_sysbios_knl_Semaphore_A_badContext__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_badContext ti_sysbios_knl_Semaphore_A_badContext__C = (((xdc_runtime_Assert_Id)1075) << 16 | 16);

/* A_overflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_overflow__C, ".const:ti_sysbios_knl_Semaphore_A_overflow__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_overflow ti_sysbios_knl_Semaphore_A_overflow__C = (((xdc_runtime_Assert_Id)1406) << 16 | 16);

/* A_pendTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C, ".const:ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_A_pendTaskDisabled ti_sysbios_knl_Semaphore_A_pendTaskDisabled__C = (((xdc_runtime_Assert_Id)1460) << 16 | 16);

/* supportsEvents__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsEvents__C, ".const:ti_sysbios_knl_Semaphore_supportsEvents__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsEvents ti_sysbios_knl_Semaphore_supportsEvents__C = 0;

/* supportsPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_supportsPriority__C, ".const:ti_sysbios_knl_Semaphore_supportsPriority__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_supportsPriority ti_sysbios_knl_Semaphore_supportsPriority__C = 0;

/* eventPost__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventPost__C, ".const:ti_sysbios_knl_Semaphore_eventPost__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventPost ti_sysbios_knl_Semaphore_eventPost__C = ((const CT__ti_sysbios_knl_Semaphore_eventPost)NULL);

/* eventSync__C */
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_eventSync__C, ".const:ti_sysbios_knl_Semaphore_eventSync__C");
__FAR__ const CT__ti_sysbios_knl_Semaphore_eventSync ti_sysbios_knl_Semaphore_eventSync__C = ((const CT__ti_sysbios_knl_Semaphore_eventSync)NULL);


/*
 * ======== ti.sysbios.knl.Swi INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__PARAMS__C, ".const:ti_sysbios_knl_Swi_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Swi_Params ti_sysbios_knl_Swi_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Swi_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Swi_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_UInt)(-0x0 - 1),  /* priority */
    (xdc_UInt)0x0U,  /* trigger */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* Module__root__V */
ti_sysbios_knl_Swi_Module__ ti_sysbios_knl_Swi_Module__root__V = {
    {&ti_sysbios_knl_Swi_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Swi_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_sysbios_knl_Swi_Object__ ti_sysbios_knl_Swi_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Clock_workFunc__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        (xdc_UInt)0xfU,  /* priority */
        (xdc_UInt)0x8000U,  /* mask */
        0,  /* posted */
        (xdc_UInt)0x0U,  /* initTrigger */
        (xdc_UInt)0x0U,  /* trigger */
        (ti_sysbios_knl_Queue_Handle)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15],  /* readyQ */
        ((void*)0),  /* hookEnv */
    },
};

/* --> ti_sysbios_knl_Swi_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Swi_Module_State__readyQ ti_sysbios_knl_Swi_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Swi_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Swi_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Swi_Module__state__V")));
#endif
ti_sysbios_knl_Swi_Module_State__ ti_sysbios_knl_Swi_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0U,  /* curSet */
    (xdc_UInt)0x0U,  /* curTrigger */
    0,  /* curSwi */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Swi_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* constructedSwis */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Swi_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsEnabled ti_sysbios_knl_Swi_Module__diagsEnabled__C = (xdc_Bits32)0x390U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Swi_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsIncluded ti_sysbios_knl_Swi_Module__diagsIncluded__C = (xdc_Bits32)0x390U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__diagsMask__C, ".const:ti_sysbios_knl_Swi_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__diagsMask ti_sysbios_knl_Swi_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Swi_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gateObj__C, ".const:ti_sysbios_knl_Swi_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gateObj ti_sysbios_knl_Swi_Module__gateObj__C = ((const CT__ti_sysbios_knl_Swi_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__gatePrms__C, ".const:ti_sysbios_knl_Swi_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__gatePrms ti_sysbios_knl_Swi_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Swi_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__id__C, ".const:ti_sysbios_knl_Swi_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__id ti_sysbios_knl_Swi_Module__id__C = (xdc_Bits16)0x8024U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerDefined__C, ".const:ti_sysbios_knl_Swi_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerDefined ti_sysbios_knl_Swi_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerObj__C, ".const:ti_sysbios_knl_Swi_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerObj ti_sysbios_knl_Swi_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn0 ti_sysbios_knl_Swi_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn1 ti_sysbios_knl_Swi_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn2 ti_sysbios_knl_Swi_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn4 ti_sysbios_knl_Swi_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Swi_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Module__loggerFxn8 ti_sysbios_knl_Swi_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Swi_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__count__C, ".const:ti_sysbios_knl_Swi_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__count ti_sysbios_knl_Swi_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__heap__C, ".const:ti_sysbios_knl_Swi_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__heap ti_sysbios_knl_Swi_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__sizeof__C, ".const:ti_sysbios_knl_Swi_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__sizeof ti_sysbios_knl_Swi_Object__sizeof__C = sizeof(ti_sysbios_knl_Swi_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__table__C, ".const:ti_sysbios_knl_Swi_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Swi_Object__table ti_sysbios_knl_Swi_Object__table__C = ti_sysbios_knl_Swi_Object__table__V;

/* LM_begin__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_begin__C, ".const:ti_sysbios_knl_Swi_LM_begin__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_begin ti_sysbios_knl_Swi_LM_begin__C = (((xdc_runtime_Log_Event)6774) << 16 | 768);

/* LD_end__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LD_end__C, ".const:ti_sysbios_knl_Swi_LD_end__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LD_end ti_sysbios_knl_Swi_LD_end__C = (((xdc_runtime_Log_Event)6821) << 16 | 512);

/* LM_post__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_LM_post__C, ".const:ti_sysbios_knl_Swi_LM_post__C");
__FAR__ const CT__ti_sysbios_knl_Swi_LM_post ti_sysbios_knl_Swi_LM_post__C = (((xdc_runtime_Log_Event)6839) << 16 | 768);

/* A_swiDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_swiDisabled__C, ".const:ti_sysbios_knl_Swi_A_swiDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_swiDisabled ti_sysbios_knl_Swi_A_swiDisabled__C = (((xdc_runtime_Assert_Id)1554) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_A_badPriority__C, ".const:ti_sysbios_knl_Swi_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Swi_A_badPriority ti_sysbios_knl_Swi_A_badPriority__C = (((xdc_runtime_Assert_Id)1611) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numPriorities__C, ".const:ti_sysbios_knl_Swi_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numPriorities ti_sysbios_knl_Swi_numPriorities__C = (xdc_UInt)0x10U;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_hooks__C, ".const:ti_sysbios_knl_Swi_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Swi_hooks ti_sysbios_knl_Swi_hooks__C = {0, 0};

/* taskDisable__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskDisable__C, ".const:ti_sysbios_knl_Swi_taskDisable__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskDisable ti_sysbios_knl_Swi_taskDisable__C = ((const CT__ti_sysbios_knl_Swi_taskDisable)(ti_sysbios_knl_Task_disable__E));

/* taskRestore__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_taskRestore__C, ".const:ti_sysbios_knl_Swi_taskRestore__C");
__FAR__ const CT__ti_sysbios_knl_Swi_taskRestore ti_sysbios_knl_Swi_taskRestore__C = ((const CT__ti_sysbios_knl_Swi_taskRestore)(ti_sysbios_knl_Task_restore__E));

/* numConstructedSwis__C */
#pragma DATA_SECTION(ti_sysbios_knl_Swi_numConstructedSwis__C, ".const:ti_sysbios_knl_Swi_numConstructedSwis__C");
__FAR__ const CT__ti_sysbios_knl_Swi_numConstructedSwis ti_sysbios_knl_Swi_numConstructedSwis__C = (xdc_UInt)0x0U;


/*
 * ======== ti.sysbios.knl.Task INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__PARAMS__C, ".const:ti_sysbios_knl_Task_Object__PARAMS__C");
__FAR__ const ti_sysbios_knl_Task_Params ti_sysbios_knl_Task_Object__PARAMS__C = {
    sizeof (ti_sysbios_knl_Task_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_sysbios_knl_Task_Object__PARAMS__C.__iprms, /* instance */
    ((xdc_UArg)(0x0)),  /* arg0 */
    ((xdc_UArg)(0x0)),  /* arg1 */
    (xdc_Int)0x1,  /* priority */
    ((xdc_Ptr)NULL),  /* stack */
    (xdc_SizeT)0x0,  /* stackSize */
    0,  /* stackHeap */
    ((xdc_Ptr)NULL),  /* env */
    1,  /* vitalTaskFlag */
    (xdc_UInt)0x0U,  /* affinity */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_sysbios_knl_Task_Instance_State_0_stack__A */
__T1_ti_sysbios_knl_Task_Instance_State__stack ti_sysbios_knl_Task_Instance_State_0_stack__A[512];

/* --> ti_sysbios_knl_Task_Instance_State_0_hookEnv__A */
__T1_ti_sysbios_knl_Task_Instance_State__hookEnv ti_sysbios_knl_Task_Instance_State_0_hookEnv__A[1];

/* Module__root__V */
ti_sysbios_knl_Task_Module__ ti_sysbios_knl_Task_Module__root__V = {
    {&ti_sysbios_knl_Task_Module__root__V.link,  /* link.next */
    &ti_sysbios_knl_Task_Module__root__V.link},  /* link.prev */
    768,  /* mask */
};

/* Object__table__V */
ti_sysbios_knl_Task_Object__ ti_sysbios_knl_Task_Object__table__V[1] = {
    {/* instance#0 */
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Object__table__V[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_Int)0x0,  /* priority */
        (xdc_UInt)0x1U,  /* mask */
        ((xdc_Ptr)NULL),  /* context */
        ti_sysbios_knl_Task_Mode_INACTIVE,  /* mode */
        ((ti_sysbios_knl_Task_PendElem*)NULL),  /* pendElem */
        (xdc_SizeT)0x200,  /* stackSize */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_stack__A),  /* stack */
        0,  /* stackHeap */
        ((xdc_Void(*)(xdc_UArg f_arg0,xdc_UArg f_arg1))(ti_sysbios_knl_Idle_loop__E)),  /* fxn */
        ((xdc_UArg)(0x0)),  /* arg0 */
        ((xdc_UArg)(0x0)),  /* arg1 */
        ((xdc_Ptr)NULL),  /* env */
        ((void*)ti_sysbios_knl_Task_Instance_State_0_hookEnv__A),  /* hookEnv */
        1,  /* vitalTaskFlag */
        0,  /* readyQ */
        (xdc_UInt)0x0U,  /* curCoreId */
        (xdc_UInt)0x0U,  /* affinity */
        (xdc_runtime_Text_CordAddr)(xdc_runtime_Text_charTab__A+8094) /* __name */
    },
};

/* --> ti_sysbios_knl_Task_Module_State_0_readyQ__A */
__T1_ti_sysbios_knl_Task_Module_State__readyQ ti_sysbios_knl_Task_Module_State_0_readyQ__A[16] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[0].elem)),  /* prev */
        },  /* elem */
    },  /* [0] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[1].elem)),  /* prev */
        },  /* elem */
    },  /* [1] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[2].elem)),  /* prev */
        },  /* elem */
    },  /* [2] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[3].elem)),  /* prev */
        },  /* elem */
    },  /* [3] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[4].elem)),  /* prev */
        },  /* elem */
    },  /* [4] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[5].elem)),  /* prev */
        },  /* elem */
    },  /* [5] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[6].elem)),  /* prev */
        },  /* elem */
    },  /* [6] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[7].elem)),  /* prev */
        },  /* elem */
    },  /* [7] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[8].elem)),  /* prev */
        },  /* elem */
    },  /* [8] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[9].elem)),  /* prev */
        },  /* elem */
    },  /* [9] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[10].elem)),  /* prev */
        },  /* elem */
    },  /* [10] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[11].elem)),  /* prev */
        },  /* elem */
    },  /* [11] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[12].elem)),  /* prev */
        },  /* elem */
    },  /* [12] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[13].elem)),  /* prev */
        },  /* elem */
    },  /* [13] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[14].elem)),  /* prev */
        },  /* elem */
    },  /* [14] */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module_State_0_readyQ__A[15].elem)),  /* prev */
        },  /* elem */
    },  /* [15] */
};

/* --> ti_sysbios_knl_Task_Module_State_0_idleTask__A */
__T1_ti_sysbios_knl_Task_Module_State__idleTask ti_sysbios_knl_Task_Module_State_0_idleTask__A[1] = {
    (ti_sysbios_knl_Task_Handle)&ti_sysbios_knl_Task_Object__table__V[0],  /* [0] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data:ti_sysbios_knl_Task_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V __attribute__ ((section(".data_ti_sysbios_knl_Task_Module__state__V")));
#endif
ti_sysbios_knl_Task_Module_State__ ti_sysbios_knl_Task_Module__state__V = {
    1,  /* locked */
    (xdc_UInt)0x0U,  /* curSet */
    0,  /* workFlag */
    (xdc_UInt)0x1U,  /* vitalTasks */
    0,  /* curTask */
    0,  /* curQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_readyQ__A),  /* readyQ */
    ((void*)0),  /* smpCurSet */
    ((void*)0),  /* smpCurMask */
    ((void*)0),  /* smpCurTask */
    ((void*)0),  /* smpReadyQ */
    ((void*)ti_sysbios_knl_Task_Module_State_0_idleTask__A),  /* idleTask */
    ((void*)0),  /* constructedTasks */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_inactiveQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_inactiveQ */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_knl_Task_Module__state__V.Object_field_terminatedQ.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_terminatedQ */
};

/* --> ti_sysbios_knl_Task_hooks__A */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__A, ".const:ti_sysbios_knl_Task_hooks__A");
const __T1_ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__A[1] = {
    {
        ((xdc_Void(*)(xdc_Int f_arg0))(ti_sysbios_utils_Load_taskRegHook__E)),  /* registerFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0,xdc_runtime_Error_Block* f_arg1))(ti_sysbios_utils_Load_taskCreateHook__E)),  /* createFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0))NULL),  /* readyFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0,ti_sysbios_knl_Task_Handle f_arg1))(ti_sysbios_utils_Load_taskSwitchHook__E)),  /* switchFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0))NULL),  /* exitFxn */
        ((xdc_Void(*)(ti_sysbios_knl_Task_Handle f_arg0))(ti_sysbios_utils_Load_taskDeleteHook__E)),  /* deleteFxn */
    },  /* [0] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsEnabled__C, ".const:ti_sysbios_knl_Task_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsEnabled ti_sysbios_knl_Task_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsIncluded__C, ".const:ti_sysbios_knl_Task_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsIncluded ti_sysbios_knl_Task_Module__diagsIncluded__C = (xdc_Bits32)0x390U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__diagsMask__C, ".const:ti_sysbios_knl_Task_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__diagsMask ti_sysbios_knl_Task_Module__diagsMask__C = ((const CT__ti_sysbios_knl_Task_Module__diagsMask)((void*)&ti_sysbios_knl_Task_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gateObj__C, ".const:ti_sysbios_knl_Task_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gateObj ti_sysbios_knl_Task_Module__gateObj__C = ((const CT__ti_sysbios_knl_Task_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__gatePrms__C, ".const:ti_sysbios_knl_Task_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__gatePrms ti_sysbios_knl_Task_Module__gatePrms__C = ((const CT__ti_sysbios_knl_Task_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__id__C, ".const:ti_sysbios_knl_Task_Module__id__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__id ti_sysbios_knl_Task_Module__id__C = (xdc_Bits16)0x8025U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerDefined__C, ".const:ti_sysbios_knl_Task_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerDefined ti_sysbios_knl_Task_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerObj__C, ".const:ti_sysbios_knl_Task_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerObj ti_sysbios_knl_Task_Module__loggerObj__C = ((const CT__ti_sysbios_knl_Task_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[2]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn0__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn0 ti_sysbios_knl_Task_Module__loggerFxn0__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn1__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn1 ti_sysbios_knl_Task_Module__loggerFxn1__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn2__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn2 ti_sysbios_knl_Task_Module__loggerFxn2__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn4__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn4 ti_sysbios_knl_Task_Module__loggerFxn4__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Module__loggerFxn8__C, ".const:ti_sysbios_knl_Task_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_knl_Task_Module__loggerFxn8 ti_sysbios_knl_Task_Module__loggerFxn8__C = ((const CT__ti_sysbios_knl_Task_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__count__C, ".const:ti_sysbios_knl_Task_Object__count__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__count ti_sysbios_knl_Task_Object__count__C = 1;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__heap__C, ".const:ti_sysbios_knl_Task_Object__heap__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__heap ti_sysbios_knl_Task_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__sizeof__C, ".const:ti_sysbios_knl_Task_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__sizeof ti_sysbios_knl_Task_Object__sizeof__C = sizeof(ti_sysbios_knl_Task_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__table__C, ".const:ti_sysbios_knl_Task_Object__table__C");
__FAR__ const CT__ti_sysbios_knl_Task_Object__table ti_sysbios_knl_Task_Object__table__C = ti_sysbios_knl_Task_Object__table__V;

/* LM_switch__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_switch__C, ".const:ti_sysbios_knl_Task_LM_switch__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_switch ti_sysbios_knl_Task_LM_switch__C = (((xdc_runtime_Log_Event)6879) << 16 | 768);

/* LM_sleep__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_sleep__C, ".const:ti_sysbios_knl_Task_LM_sleep__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_sleep ti_sysbios_knl_Task_LM_sleep__C = (((xdc_runtime_Log_Event)6947) << 16 | 768);

/* LD_ready__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_ready__C, ".const:ti_sysbios_knl_Task_LD_ready__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_ready ti_sysbios_knl_Task_LD_ready__C = (((xdc_runtime_Log_Event)6992) << 16 | 512);

/* LD_block__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_block__C, ".const:ti_sysbios_knl_Task_LD_block__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_block ti_sysbios_knl_Task_LD_block__C = (((xdc_runtime_Log_Event)7033) << 16 | 512);

/* LM_yield__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_yield__C, ".const:ti_sysbios_knl_Task_LM_yield__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_yield ti_sysbios_knl_Task_LM_yield__C = (((xdc_runtime_Log_Event)7065) << 16 | 768);

/* LM_setPri__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setPri__C, ".const:ti_sysbios_knl_Task_LM_setPri__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setPri ti_sysbios_knl_Task_LM_setPri__C = (((xdc_runtime_Log_Event)7113) << 16 | 768);

/* LD_exit__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LD_exit__C, ".const:ti_sysbios_knl_Task_LD_exit__C");
__FAR__ const CT__ti_sysbios_knl_Task_LD_exit ti_sysbios_knl_Task_LD_exit__C = (((xdc_runtime_Log_Event)7169) << 16 | 512);

/* LM_setAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_setAffinity__C, ".const:ti_sysbios_knl_Task_LM_setAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_setAffinity ti_sysbios_knl_Task_LM_setAffinity__C = (((xdc_runtime_Log_Event)7200) << 16 | 768);

/* LM_schedule__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_schedule__C, ".const:ti_sysbios_knl_Task_LM_schedule__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_schedule ti_sysbios_knl_Task_LM_schedule__C = (((xdc_runtime_Log_Event)7283) << 16 | 1024);

/* LM_noWork__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_LM_noWork__C, ".const:ti_sysbios_knl_Task_LM_noWork__C");
__FAR__ const CT__ti_sysbios_knl_Task_LM_noWork ti_sysbios_knl_Task_LM_noWork__C = (((xdc_runtime_Log_Event)7369) << 16 | 1024);

/* E_stackOverflow__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_stackOverflow__C, ".const:ti_sysbios_knl_Task_E_stackOverflow__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_stackOverflow ti_sysbios_knl_Task_E_stackOverflow__C = (((xdc_runtime_Error_Id)4111) << 16 | 0U);

/* E_spOutOfBounds__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_spOutOfBounds__C, ".const:ti_sysbios_knl_Task_E_spOutOfBounds__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_spOutOfBounds ti_sysbios_knl_Task_E_spOutOfBounds__C = (((xdc_runtime_Error_Id)4154) << 16 | 0U);

/* E_deleteNotAllowed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_deleteNotAllowed__C, ".const:ti_sysbios_knl_Task_E_deleteNotAllowed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_deleteNotAllowed ti_sysbios_knl_Task_E_deleteNotAllowed__C = (((xdc_runtime_Error_Id)4205) << 16 | 0U);

/* E_moduleStateCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_moduleStateCheckFailed__C, ".const:ti_sysbios_knl_Task_E_moduleStateCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_moduleStateCheckFailed ti_sysbios_knl_Task_E_moduleStateCheckFailed__C = (((xdc_runtime_Error_Id)4236) << 16 | 0U);

/* E_objectCheckFailed__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_E_objectCheckFailed__C, ".const:ti_sysbios_knl_Task_E_objectCheckFailed__C");
__FAR__ const CT__ti_sysbios_knl_Task_E_objectCheckFailed ti_sysbios_knl_Task_E_objectCheckFailed__C = (((xdc_runtime_Error_Id)4309) << 16 | 0U);

/* A_badThreadType__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badThreadType__C, ".const:ti_sysbios_knl_Task_A_badThreadType__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badThreadType ti_sysbios_knl_Task_A_badThreadType__C = (((xdc_runtime_Assert_Id)1660) << 16 | 16);

/* A_badTaskState__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTaskState__C, ".const:ti_sysbios_knl_Task_A_badTaskState__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTaskState ti_sysbios_knl_Task_A_badTaskState__C = (((xdc_runtime_Assert_Id)1729) << 16 | 16);

/* A_noPendElem__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_noPendElem__C, ".const:ti_sysbios_knl_Task_A_noPendElem__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_noPendElem ti_sysbios_knl_Task_A_noPendElem__C = (((xdc_runtime_Assert_Id)1783) << 16 | 16);

/* A_taskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_taskDisabled__C, ".const:ti_sysbios_knl_Task_A_taskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_taskDisabled ti_sysbios_knl_Task_A_taskDisabled__C = (((xdc_runtime_Assert_Id)1837) << 16 | 16);

/* A_badPriority__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badPriority__C, ".const:ti_sysbios_knl_Task_A_badPriority__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badPriority ti_sysbios_knl_Task_A_badPriority__C = (((xdc_runtime_Assert_Id)1900) << 16 | 16);

/* A_badTimeout__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badTimeout__C, ".const:ti_sysbios_knl_Task_A_badTimeout__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badTimeout ti_sysbios_knl_Task_A_badTimeout__C = (((xdc_runtime_Assert_Id)1950) << 16 | 16);

/* A_badAffinity__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_badAffinity__C, ".const:ti_sysbios_knl_Task_A_badAffinity__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_badAffinity ti_sysbios_knl_Task_A_badAffinity__C = (((xdc_runtime_Assert_Id)1985) << 16 | 16);

/* A_sleepTaskDisabled__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_sleepTaskDisabled__C, ".const:ti_sysbios_knl_Task_A_sleepTaskDisabled__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_sleepTaskDisabled ti_sysbios_knl_Task_A_sleepTaskDisabled__C = (((xdc_runtime_Assert_Id)2018) << 16 | 16);

/* A_invalidCoreId__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_A_invalidCoreId__C, ".const:ti_sysbios_knl_Task_A_invalidCoreId__C");
__FAR__ const CT__ti_sysbios_knl_Task_A_invalidCoreId ti_sysbios_knl_Task_A_invalidCoreId__C = (((xdc_runtime_Assert_Id)2102) << 16 | 16);

/* numPriorities__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numPriorities__C, ".const:ti_sysbios_knl_Task_numPriorities__C");
__FAR__ const CT__ti_sysbios_knl_Task_numPriorities ti_sysbios_knl_Task_numPriorities__C = (xdc_UInt)0x10U;

/* defaultStackSize__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackSize__C, ".const:ti_sysbios_knl_Task_defaultStackSize__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackSize ti_sysbios_knl_Task_defaultStackSize__C = (xdc_SizeT)0x200;

/* defaultStackHeap__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_defaultStackHeap__C, ".const:ti_sysbios_knl_Task_defaultStackHeap__C");
__FAR__ const CT__ti_sysbios_knl_Task_defaultStackHeap ti_sysbios_knl_Task_defaultStackHeap__C = 0;

/* allBlockedFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_allBlockedFunc__C, ".const:ti_sysbios_knl_Task_allBlockedFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_allBlockedFunc ti_sysbios_knl_Task_allBlockedFunc__C = ((const CT__ti_sysbios_knl_Task_allBlockedFunc)NULL);

/* initStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_initStackFlag__C, ".const:ti_sysbios_knl_Task_initStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_initStackFlag ti_sysbios_knl_Task_initStackFlag__C = 1;

/* checkStackFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_checkStackFlag__C, ".const:ti_sysbios_knl_Task_checkStackFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_checkStackFlag ti_sysbios_knl_Task_checkStackFlag__C = 1;

/* deleteTerminatedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_deleteTerminatedTasks__C, ".const:ti_sysbios_knl_Task_deleteTerminatedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_deleteTerminatedTasks ti_sysbios_knl_Task_deleteTerminatedTasks__C = 0;

/* hooks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_hooks__C, ".const:ti_sysbios_knl_Task_hooks__C");
__FAR__ const CT__ti_sysbios_knl_Task_hooks ti_sysbios_knl_Task_hooks__C = {1, ((__T1_ti_sysbios_knl_Task_hooks const  *)ti_sysbios_knl_Task_hooks__A)};

/* moduleStateCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFxn ti_sysbios_knl_Task_moduleStateCheckFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckFxn)(ti_sysbios_knl_Task_moduleStateCheck__I));

/* moduleStateCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckValueFxn__C, ".const:ti_sysbios_knl_Task_moduleStateCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn ti_sysbios_knl_Task_moduleStateCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_moduleStateCheckValueFxn)(ti_sysbios_knl_Task_getModuleStateCheckValue__I));

/* moduleStateCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_moduleStateCheckFlag__C, ".const:ti_sysbios_knl_Task_moduleStateCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_moduleStateCheckFlag ti_sysbios_knl_Task_moduleStateCheckFlag__C = 0;

/* objectCheckFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFxn__C, ".const:ti_sysbios_knl_Task_objectCheckFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFxn ti_sysbios_knl_Task_objectCheckFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckFxn)(ti_sysbios_knl_Task_objectCheck__I));

/* objectCheckValueFxn__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckValueFxn__C, ".const:ti_sysbios_knl_Task_objectCheckValueFxn__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckValueFxn ti_sysbios_knl_Task_objectCheckValueFxn__C = ((const CT__ti_sysbios_knl_Task_objectCheckValueFxn)(ti_sysbios_knl_Task_getObjectCheckValue__I));

/* objectCheckFlag__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_objectCheckFlag__C, ".const:ti_sysbios_knl_Task_objectCheckFlag__C");
__FAR__ const CT__ti_sysbios_knl_Task_objectCheckFlag ti_sysbios_knl_Task_objectCheckFlag__C = 0;

/* numConstructedTasks__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_numConstructedTasks__C, ".const:ti_sysbios_knl_Task_numConstructedTasks__C");
__FAR__ const CT__ti_sysbios_knl_Task_numConstructedTasks ti_sysbios_knl_Task_numConstructedTasks__C = (xdc_UInt)0x0U;

/* startupHookFunc__C */
#pragma DATA_SECTION(ti_sysbios_knl_Task_startupHookFunc__C, ".const:ti_sysbios_knl_Task_startupHookFunc__C");
__FAR__ const CT__ti_sysbios_knl_Task_startupHookFunc ti_sysbios_knl_Task_startupHookFunc__C = ((const CT__ti_sysbios_knl_Task_startupHookFunc)NULL);


/*
 * ======== ti.sysbios.knl.Task_SupportProxy INITIALIZERS ========
 */


/*
 * ======== ti.sysbios.utils.Load INITIALIZERS ========
 */

/* --> ti_sysbios_utils_Load_Module_State_0_taskStartTime__A */
__T1_ti_sysbios_utils_Load_Module_State__taskStartTime ti_sysbios_utils_Load_Module_State_0_taskStartTime__A[1] = {
    (xdc_UInt32)0x0U,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_runningTask__A */
__T1_ti_sysbios_utils_Load_Module_State__runningTask ti_sysbios_utils_Load_Module_State_0_runningTask__A[1] = {
    0,  /* [0] */
};

/* --> ti_sysbios_utils_Load_Module_State_0_taskEnv__A */
__T1_ti_sysbios_utils_Load_Module_State__taskEnv ti_sysbios_utils_Load_Module_State_0_taskEnv__A[1] = {
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[0].qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module_State_0_taskEnv__A[0].qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0U,  /* totalTimeElapsed */
        (xdc_UInt32)0x0U,  /* totalTime */
        (xdc_UInt32)0x0U,  /* nextTotalTime */
        (xdc_UInt32)0x0U,  /* timeOfLastUpdate */
        ((xdc_Ptr)NULL),  /* threadHandle */
    },  /* [0] */
};

/* Module__state__V */
#ifdef __ti__
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data:ti_sysbios_utils_Load_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V __attribute__ ((section(".data_ti_sysbios_utils_Load_Module__state__V")));
#endif
ti_sysbios_utils_Load_Module_State__ ti_sysbios_utils_Load_Module__state__V = {
    (xdc_Int)0x0,  /* taskHId */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskStartTime__A),  /* taskStartTime */
    (xdc_UInt32)0x0U,  /* timeElapsed */
    ((void*)ti_sysbios_utils_Load_Module_State_0_runningTask__A),  /* runningTask */
    0,  /* firstSwitchDone */
    (xdc_UInt32)0x0U,  /* swiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.swiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0U,  /* totalTimeElapsed */
        (xdc_UInt32)0x0U,  /* totalTime */
        (xdc_UInt32)0x0U,  /* nextTotalTime */
        (xdc_UInt32)0x0U,  /* timeOfLastUpdate */
        ((xdc_Ptr)NULL),  /* threadHandle */
    },  /* swiEnv */
    ((void*)ti_sysbios_utils_Load_Module_State_0_taskEnv__A),  /* taskEnv */
    (xdc_UInt32)0x0U,  /* swiCnt */
    (xdc_UInt32)0x0U,  /* hwiStartTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.hwiEnv.qElem)),  /* prev */
        },  /* qElem */
        (xdc_UInt32)0x0U,  /* totalTimeElapsed */
        (xdc_UInt32)0x0U,  /* totalTime */
        (xdc_UInt32)0x0U,  /* nextTotalTime */
        (xdc_UInt32)0x0U,  /* timeOfLastUpdate */
        ((xdc_Ptr)NULL),  /* threadHandle */
    },  /* hwiEnv */
    (xdc_UInt32)0x0U,  /* hwiCnt */
    (xdc_UInt32)0x0U,  /* timeSlotCnt */
    (xdc_UInt32)0xffffffffU,  /* minLoop */
    (xdc_UInt32)0x0U,  /* minIdle */
    (xdc_UInt32)0x0U,  /* t0 */
    (xdc_UInt32)0x0U,  /* idleCnt */
    (xdc_UInt32)0x0U,  /* cpuLoad */
    (xdc_UInt32)0x1U,  /* taskEnvLen */
    (xdc_UInt32)0x0U,  /* taskNum */
    0,  /* powerEnabled */
    (xdc_UInt32)0x0U,  /* idleStartTime */
    (xdc_UInt32)0x0U,  /* busyStartTime */
    (xdc_UInt32)0x0U,  /* busyTime */
    {
        {
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* next */
            ((ti_sysbios_knl_Queue_Elem*)((void*)&ti_sysbios_utils_Load_Module__state__V.Object_field_taskList.elem)),  /* prev */
        },  /* elem */
    },  /* Object_field_taskList */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsEnabled__C, ".const:ti_sysbios_utils_Load_Module__diagsEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsEnabled ti_sysbios_utils_Load_Module__diagsEnabled__C = (xdc_Bits32)0x890U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsIncluded__C, ".const:ti_sysbios_utils_Load_Module__diagsIncluded__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsIncluded ti_sysbios_utils_Load_Module__diagsIncluded__C = (xdc_Bits32)0x890U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__diagsMask__C, ".const:ti_sysbios_utils_Load_Module__diagsMask__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__diagsMask ti_sysbios_utils_Load_Module__diagsMask__C = ((const CT__ti_sysbios_utils_Load_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gateObj__C, ".const:ti_sysbios_utils_Load_Module__gateObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gateObj ti_sysbios_utils_Load_Module__gateObj__C = ((const CT__ti_sysbios_utils_Load_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__gatePrms__C, ".const:ti_sysbios_utils_Load_Module__gatePrms__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__gatePrms ti_sysbios_utils_Load_Module__gatePrms__C = ((const CT__ti_sysbios_utils_Load_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__id__C, ".const:ti_sysbios_utils_Load_Module__id__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__id ti_sysbios_utils_Load_Module__id__C = (xdc_Bits16)0x8035U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerDefined__C, ".const:ti_sysbios_utils_Load_Module__loggerDefined__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerDefined ti_sysbios_utils_Load_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerObj__C, ".const:ti_sysbios_utils_Load_Module__loggerObj__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerObj ti_sysbios_utils_Load_Module__loggerObj__C = ((const CT__ti_sysbios_utils_Load_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[0]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn0__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn0__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn0 ti_sysbios_utils_Load_Module__loggerFxn0__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn1__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn1__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn1 ti_sysbios_utils_Load_Module__loggerFxn1__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn2__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn2__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn2 ti_sysbios_utils_Load_Module__loggerFxn2__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn4__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn4__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn4 ti_sysbios_utils_Load_Module__loggerFxn4__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Module__loggerFxn8__C, ".const:ti_sysbios_utils_Load_Module__loggerFxn8__C");
__FAR__ const CT__ti_sysbios_utils_Load_Module__loggerFxn8 ti_sysbios_utils_Load_Module__loggerFxn8__C = ((const CT__ti_sysbios_utils_Load_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__count__C, ".const:ti_sysbios_utils_Load_Object__count__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__count ti_sysbios_utils_Load_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__heap__C, ".const:ti_sysbios_utils_Load_Object__heap__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__heap ti_sysbios_utils_Load_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__sizeof__C, ".const:ti_sysbios_utils_Load_Object__sizeof__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__sizeof ti_sysbios_utils_Load_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_Object__table__C, ".const:ti_sysbios_utils_Load_Object__table__C");
__FAR__ const CT__ti_sysbios_utils_Load_Object__table ti_sysbios_utils_Load_Object__table__C = NULL;

/* LS_cpuLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_cpuLoad__C, ".const:ti_sysbios_utils_Load_LS_cpuLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_cpuLoad ti_sysbios_utils_Load_LS_cpuLoad__C = (((xdc_runtime_Log_Event)7527) << 16 | 2048);

/* LS_hwiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_hwiLoad__C, ".const:ti_sysbios_utils_Load_LS_hwiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_hwiLoad ti_sysbios_utils_Load_LS_hwiLoad__C = (((xdc_runtime_Log_Event)7544) << 16 | 2048);

/* LS_swiLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_swiLoad__C, ".const:ti_sysbios_utils_Load_LS_swiLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_swiLoad ti_sysbios_utils_Load_LS_swiLoad__C = (((xdc_runtime_Log_Event)7562) << 16 | 2048);

/* LS_taskLoad__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_LS_taskLoad__C, ".const:ti_sysbios_utils_Load_LS_taskLoad__C");
__FAR__ const CT__ti_sysbios_utils_Load_LS_taskLoad ti_sysbios_utils_Load_LS_taskLoad__C = (((xdc_runtime_Log_Event)7580) << 16 | 2048);

/* postUpdate__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_postUpdate__C, ".const:ti_sysbios_utils_Load_postUpdate__C");
__FAR__ const CT__ti_sysbios_utils_Load_postUpdate ti_sysbios_utils_Load_postUpdate__C = ((const CT__ti_sysbios_utils_Load_postUpdate)NULL);

/* updateInIdle__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_updateInIdle__C, ".const:ti_sysbios_utils_Load_updateInIdle__C");
__FAR__ const CT__ti_sysbios_utils_Load_updateInIdle ti_sysbios_utils_Load_updateInIdle__C = 1;

/* windowInMs__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_windowInMs__C, ".const:ti_sysbios_utils_Load_windowInMs__C");
__FAR__ const CT__ti_sysbios_utils_Load_windowInMs ti_sysbios_utils_Load_windowInMs__C = (xdc_UInt)0x1f4U;

/* hwiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_hwiEnabled__C, ".const:ti_sysbios_utils_Load_hwiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_hwiEnabled ti_sysbios_utils_Load_hwiEnabled__C = 0;

/* swiEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_swiEnabled__C, ".const:ti_sysbios_utils_Load_swiEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_swiEnabled ti_sysbios_utils_Load_swiEnabled__C = 0;

/* taskEnabled__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_taskEnabled__C, ".const:ti_sysbios_utils_Load_taskEnabled__C");
__FAR__ const CT__ti_sysbios_utils_Load_taskEnabled ti_sysbios_utils_Load_taskEnabled__C = 1;

/* autoAddTasks__C */
#pragma DATA_SECTION(ti_sysbios_utils_Load_autoAddTasks__C, ".const:ti_sysbios_utils_Load_autoAddTasks__C");
__FAR__ const CT__ti_sysbios_utils_Load_autoAddTasks ti_sysbios_utils_Load_autoAddTasks__C = 1;


/*
 * ======== ti.uia.events.DvtTypes INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsEnabled__C, ".const:ti_uia_events_DvtTypes_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsEnabled ti_uia_events_DvtTypes_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsIncluded__C, ".const:ti_uia_events_DvtTypes_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsIncluded ti_uia_events_DvtTypes_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__diagsMask__C, ".const:ti_uia_events_DvtTypes_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__diagsMask ti_uia_events_DvtTypes_Module__diagsMask__C = ((const CT__ti_uia_events_DvtTypes_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gateObj__C, ".const:ti_uia_events_DvtTypes_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gateObj ti_uia_events_DvtTypes_Module__gateObj__C = ((const CT__ti_uia_events_DvtTypes_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__gatePrms__C, ".const:ti_uia_events_DvtTypes_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__gatePrms ti_uia_events_DvtTypes_Module__gatePrms__C = ((const CT__ti_uia_events_DvtTypes_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__id__C, ".const:ti_uia_events_DvtTypes_Module__id__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__id ti_uia_events_DvtTypes_Module__id__C = (xdc_Bits16)0x8015U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerDefined__C, ".const:ti_uia_events_DvtTypes_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerDefined ti_uia_events_DvtTypes_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerObj__C, ".const:ti_uia_events_DvtTypes_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerObj ti_uia_events_DvtTypes_Module__loggerObj__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn0__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn0 ti_uia_events_DvtTypes_Module__loggerFxn0__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn1__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn1 ti_uia_events_DvtTypes_Module__loggerFxn1__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn2__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn2 ti_uia_events_DvtTypes_Module__loggerFxn2__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn4__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn4 ti_uia_events_DvtTypes_Module__loggerFxn4__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Module__loggerFxn8__C, ".const:ti_uia_events_DvtTypes_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Module__loggerFxn8 ti_uia_events_DvtTypes_Module__loggerFxn8__C = ((const CT__ti_uia_events_DvtTypes_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__count__C, ".const:ti_uia_events_DvtTypes_Object__count__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__count ti_uia_events_DvtTypes_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__heap__C, ".const:ti_uia_events_DvtTypes_Object__heap__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__heap ti_uia_events_DvtTypes_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__sizeof__C, ".const:ti_uia_events_DvtTypes_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__sizeof ti_uia_events_DvtTypes_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_DvtTypes_Object__table__C, ".const:ti_uia_events_DvtTypes_Object__table__C");
__FAR__ const CT__ti_uia_events_DvtTypes_Object__table ti_uia_events_DvtTypes_Object__table__C = NULL;


/*
 * ======== ti.uia.events.UIAErr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsEnabled__C, ".const:ti_uia_events_UIAErr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsEnabled ti_uia_events_UIAErr_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsIncluded__C, ".const:ti_uia_events_UIAErr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsIncluded ti_uia_events_UIAErr_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__diagsMask__C, ".const:ti_uia_events_UIAErr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__diagsMask ti_uia_events_UIAErr_Module__diagsMask__C = ((const CT__ti_uia_events_UIAErr_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gateObj__C, ".const:ti_uia_events_UIAErr_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gateObj ti_uia_events_UIAErr_Module__gateObj__C = ((const CT__ti_uia_events_UIAErr_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__gatePrms__C, ".const:ti_uia_events_UIAErr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__gatePrms ti_uia_events_UIAErr_Module__gatePrms__C = ((const CT__ti_uia_events_UIAErr_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__id__C, ".const:ti_uia_events_UIAErr_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__id ti_uia_events_UIAErr_Module__id__C = (xdc_Bits16)0x8016U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerDefined__C, ".const:ti_uia_events_UIAErr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerDefined ti_uia_events_UIAErr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerObj__C, ".const:ti_uia_events_UIAErr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerObj ti_uia_events_UIAErr_Module__loggerObj__C = ((const CT__ti_uia_events_UIAErr_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn0__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn0 ti_uia_events_UIAErr_Module__loggerFxn0__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn1__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn1 ti_uia_events_UIAErr_Module__loggerFxn1__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn2__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn2 ti_uia_events_UIAErr_Module__loggerFxn2__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn4__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn4 ti_uia_events_UIAErr_Module__loggerFxn4__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Module__loggerFxn8__C, ".const:ti_uia_events_UIAErr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAErr_Module__loggerFxn8 ti_uia_events_UIAErr_Module__loggerFxn8__C = ((const CT__ti_uia_events_UIAErr_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__count__C, ".const:ti_uia_events_UIAErr_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__count ti_uia_events_UIAErr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__heap__C, ".const:ti_uia_events_UIAErr_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__heap ti_uia_events_UIAErr_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__sizeof__C, ".const:ti_uia_events_UIAErr_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__sizeof ti_uia_events_UIAErr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_Object__table__C, ".const:ti_uia_events_UIAErr_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAErr_Object__table ti_uia_events_UIAErr_Object__table__C = NULL;

/* error__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_error__C, ".const:ti_uia_events_UIAErr_error__C");
__FAR__ const CT__ti_uia_events_UIAErr_error ti_uia_events_UIAErr_error__C = (((xdc_runtime_Log_Event)5416) << 16 | 192);

/* errorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_errorWithStr__C, ".const:ti_uia_events_UIAErr_errorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_errorWithStr ti_uia_events_UIAErr_errorWithStr__C = (((xdc_runtime_Log_Event)5438) << 16 | 192);

/* hwError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwError__C, ".const:ti_uia_events_UIAErr_hwError__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwError ti_uia_events_UIAErr_hwError__C = (((xdc_runtime_Log_Event)5465) << 16 | 192);

/* hwErrorWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_hwErrorWithStr__C, ".const:ti_uia_events_UIAErr_hwErrorWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_hwErrorWithStr ti_uia_events_UIAErr_hwErrorWithStr__C = (((xdc_runtime_Log_Event)5490) << 16 | 192);

/* fatal__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatal__C, ".const:ti_uia_events_UIAErr_fatal__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatal ti_uia_events_UIAErr_fatal__C = (((xdc_runtime_Log_Event)5520) << 16 | 128);

/* fatalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_fatalWithStr__C, ".const:ti_uia_events_UIAErr_fatalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_fatalWithStr ti_uia_events_UIAErr_fatalWithStr__C = (((xdc_runtime_Log_Event)5548) << 16 | 128);

/* critical__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_critical__C, ".const:ti_uia_events_UIAErr_critical__C");
__FAR__ const CT__ti_uia_events_UIAErr_critical ti_uia_events_UIAErr_critical__C = (((xdc_runtime_Log_Event)5581) << 16 | 160);

/* criticalWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_criticalWithStr__C, ".const:ti_uia_events_UIAErr_criticalWithStr__C");
__FAR__ const CT__ti_uia_events_UIAErr_criticalWithStr ti_uia_events_UIAErr_criticalWithStr__C = (((xdc_runtime_Log_Event)5612) << 16 | 160);

/* exception__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_exception__C, ".const:ti_uia_events_UIAErr_exception__C");
__FAR__ const CT__ti_uia_events_UIAErr_exception ti_uia_events_UIAErr_exception__C = (((xdc_runtime_Log_Event)5648) << 16 | 192);

/* uncaughtException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_uncaughtException__C, ".const:ti_uia_events_UIAErr_uncaughtException__C");
__FAR__ const CT__ti_uia_events_UIAErr_uncaughtException ti_uia_events_UIAErr_uncaughtException__C = (((xdc_runtime_Log_Event)5673) << 16 | 192);

/* nullPointerException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_nullPointerException__C, ".const:ti_uia_events_UIAErr_nullPointerException__C");
__FAR__ const CT__ti_uia_events_UIAErr_nullPointerException ti_uia_events_UIAErr_nullPointerException__C = (((xdc_runtime_Log_Event)5707) << 16 | 192);

/* unexpectedInterrupt__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_unexpectedInterrupt__C, ".const:ti_uia_events_UIAErr_unexpectedInterrupt__C");
__FAR__ const CT__ti_uia_events_UIAErr_unexpectedInterrupt ti_uia_events_UIAErr_unexpectedInterrupt__C = (((xdc_runtime_Log_Event)5745) << 16 | 192);

/* memoryAccessFault__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_memoryAccessFault__C, ".const:ti_uia_events_UIAErr_memoryAccessFault__C");
__FAR__ const CT__ti_uia_events_UIAErr_memoryAccessFault ti_uia_events_UIAErr_memoryAccessFault__C = (((xdc_runtime_Log_Event)5781) << 16 | 192);

/* securityException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_securityException__C, ".const:ti_uia_events_UIAErr_securityException__C");
__FAR__ const CT__ti_uia_events_UIAErr_securityException ti_uia_events_UIAErr_securityException__C = (((xdc_runtime_Log_Event)5827) << 16 | 192);

/* divisionByZero__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_divisionByZero__C, ".const:ti_uia_events_UIAErr_divisionByZero__C");
__FAR__ const CT__ti_uia_events_UIAErr_divisionByZero ti_uia_events_UIAErr_divisionByZero__C = (((xdc_runtime_Log_Event)5861) << 16 | 192);

/* overflowException__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_overflowException__C, ".const:ti_uia_events_UIAErr_overflowException__C");
__FAR__ const CT__ti_uia_events_UIAErr_overflowException ti_uia_events_UIAErr_overflowException__C = (((xdc_runtime_Log_Event)5893) << 16 | 192);

/* indexOutOfRange__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_indexOutOfRange__C, ".const:ti_uia_events_UIAErr_indexOutOfRange__C");
__FAR__ const CT__ti_uia_events_UIAErr_indexOutOfRange ti_uia_events_UIAErr_indexOutOfRange__C = (((xdc_runtime_Log_Event)5927) << 16 | 192);

/* notImplemented__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_notImplemented__C, ".const:ti_uia_events_UIAErr_notImplemented__C");
__FAR__ const CT__ti_uia_events_UIAErr_notImplemented ti_uia_events_UIAErr_notImplemented__C = (((xdc_runtime_Log_Event)5973) << 16 | 192);

/* stackOverflow__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_stackOverflow__C, ".const:ti_uia_events_UIAErr_stackOverflow__C");
__FAR__ const CT__ti_uia_events_UIAErr_stackOverflow ti_uia_events_UIAErr_stackOverflow__C = (((xdc_runtime_Log_Event)6038) << 16 | 160);

/* illegalInstruction__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_illegalInstruction__C, ".const:ti_uia_events_UIAErr_illegalInstruction__C");
__FAR__ const CT__ti_uia_events_UIAErr_illegalInstruction ti_uia_events_UIAErr_illegalInstruction__C = (((xdc_runtime_Log_Event)6077) << 16 | 192);

/* entryPointNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_entryPointNotFound__C, ".const:ti_uia_events_UIAErr_entryPointNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_entryPointNotFound ti_uia_events_UIAErr_entryPointNotFound__C = (((xdc_runtime_Log_Event)6121) << 16 | 192);

/* moduleNotFound__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_moduleNotFound__C, ".const:ti_uia_events_UIAErr_moduleNotFound__C");
__FAR__ const CT__ti_uia_events_UIAErr_moduleNotFound ti_uia_events_UIAErr_moduleNotFound__C = (((xdc_runtime_Log_Event)6158) << 16 | 192);

/* floatingPointError__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_floatingPointError__C, ".const:ti_uia_events_UIAErr_floatingPointError__C");
__FAR__ const CT__ti_uia_events_UIAErr_floatingPointError ti_uia_events_UIAErr_floatingPointError__C = (((xdc_runtime_Log_Event)6207) << 16 | 192);

/* invalidParameter__C */
#pragma DATA_SECTION(ti_uia_events_UIAErr_invalidParameter__C, ".const:ti_uia_events_UIAErr_invalidParameter__C");
__FAR__ const CT__ti_uia_events_UIAErr_invalidParameter ti_uia_events_UIAErr_invalidParameter__C = (((xdc_runtime_Log_Event)6243) << 16 | 192);


/*
 * ======== ti.uia.events.UIAEvt INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsEnabled__C, ".const:ti_uia_events_UIAEvt_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsEnabled ti_uia_events_UIAEvt_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsIncluded__C, ".const:ti_uia_events_UIAEvt_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsIncluded ti_uia_events_UIAEvt_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__diagsMask__C, ".const:ti_uia_events_UIAEvt_Module__diagsMask__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__diagsMask ti_uia_events_UIAEvt_Module__diagsMask__C = ((const CT__ti_uia_events_UIAEvt_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gateObj__C, ".const:ti_uia_events_UIAEvt_Module__gateObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gateObj ti_uia_events_UIAEvt_Module__gateObj__C = ((const CT__ti_uia_events_UIAEvt_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__gatePrms__C, ".const:ti_uia_events_UIAEvt_Module__gatePrms__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__gatePrms ti_uia_events_UIAEvt_Module__gatePrms__C = ((const CT__ti_uia_events_UIAEvt_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__id__C, ".const:ti_uia_events_UIAEvt_Module__id__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__id ti_uia_events_UIAEvt_Module__id__C = (xdc_Bits16)0x8017U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerDefined__C, ".const:ti_uia_events_UIAEvt_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerDefined ti_uia_events_UIAEvt_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerObj__C, ".const:ti_uia_events_UIAEvt_Module__loggerObj__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerObj ti_uia_events_UIAEvt_Module__loggerObj__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn0__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn0 ti_uia_events_UIAEvt_Module__loggerFxn0__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn1__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn1 ti_uia_events_UIAEvt_Module__loggerFxn1__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn2__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn2 ti_uia_events_UIAEvt_Module__loggerFxn2__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn4__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn4 ti_uia_events_UIAEvt_Module__loggerFxn4__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Module__loggerFxn8__C, ".const:ti_uia_events_UIAEvt_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Module__loggerFxn8 ti_uia_events_UIAEvt_Module__loggerFxn8__C = ((const CT__ti_uia_events_UIAEvt_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__count__C, ".const:ti_uia_events_UIAEvt_Object__count__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__count ti_uia_events_UIAEvt_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__heap__C, ".const:ti_uia_events_UIAEvt_Object__heap__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__heap ti_uia_events_UIAEvt_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__sizeof__C, ".const:ti_uia_events_UIAEvt_Object__sizeof__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__sizeof ti_uia_events_UIAEvt_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_Object__table__C, ".const:ti_uia_events_UIAEvt_Object__table__C");
__FAR__ const CT__ti_uia_events_UIAEvt_Object__table ti_uia_events_UIAEvt_Object__table__C = NULL;

/* warning__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warning__C, ".const:ti_uia_events_UIAEvt_warning__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warning ti_uia_events_UIAEvt_warning__C = (((xdc_runtime_Log_Event)6306) << 16 | 224);

/* warningWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_warningWithStr__C, ".const:ti_uia_events_UIAEvt_warningWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_warningWithStr ti_uia_events_UIAEvt_warningWithStr__C = (((xdc_runtime_Log_Event)6330) << 16 | 224);

/* info__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_info__C, ".const:ti_uia_events_UIAEvt_info__C");
__FAR__ const CT__ti_uia_events_UIAEvt_info ti_uia_events_UIAEvt_info__C = (((xdc_runtime_Log_Event)6359) << 16 | 16384);

/* infoWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_infoWithStr__C, ".const:ti_uia_events_UIAEvt_infoWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_infoWithStr ti_uia_events_UIAEvt_infoWithStr__C = (((xdc_runtime_Log_Event)6381) << 16 | 16384);

/* detail__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detail__C, ".const:ti_uia_events_UIAEvt_detail__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detail ti_uia_events_UIAEvt_detail__C = (((xdc_runtime_Log_Event)6408) << 16 | 16480);

/* detailWithStr__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_detailWithStr__C, ".const:ti_uia_events_UIAEvt_detailWithStr__C");
__FAR__ const CT__ti_uia_events_UIAEvt_detailWithStr ti_uia_events_UIAEvt_detailWithStr__C = (((xdc_runtime_Log_Event)6431) << 16 | 16480);

/* intWithKey__C */
#pragma DATA_SECTION(ti_uia_events_UIAEvt_intWithKey__C, ".const:ti_uia_events_UIAEvt_intWithKey__C");
__FAR__ const CT__ti_uia_events_UIAEvt_intWithKey ti_uia_events_UIAEvt_intWithKey__C = (((xdc_runtime_Log_Event)6460) << 16 | 32768);


/*
 * ======== ti.uia.loggers.LoggerStopMode INITIALIZERS ========
 */

/* Object__DESC__C */
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C;

/* Object__PARAMS__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, ".const:ti_uia_loggers_LoggerStopMode_Object__PARAMS__C");
__FAR__ const ti_uia_loggers_LoggerStopMode_Params ti_uia_loggers_LoggerStopMode_Object__PARAMS__C = {
    sizeof (ti_uia_loggers_LoggerStopMode_Params), /* __size */
    NULL, /* __self */
    NULL, /* __fxns */
    (xdc_runtime_IInstance_Params*)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C.__iprms, /* instance */
    ti_uia_runtime_IUIATransfer_TransferType_LOSSY,  /* transferType */
    ti_uia_runtime_IUIATransfer_Priority_STANDARD,  /* priority */
    (xdc_Int16)0x1,  /* instanceId */
    (xdc_SizeT)0x0,  /* transferBufSize */
    (xdc_SizeT)0x200,  /* maxEventSize */
    (xdc_SizeT)0x578,  /* bufSize */
    {
        sizeof (xdc_runtime_IInstance_Params), /* __size */
        0,  /* name */
    },  /* instance */
};

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A[512];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A[1024];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__hdr ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A[48];

/* --> ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A */
__T1_ti_uia_loggers_LoggerStopMode_Instance_State__packetArray ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A[1024];

/* Module__root__V */
ti_uia_loggers_LoggerStopMode_Module__ ti_uia_loggers_LoggerStopMode_Module__root__V = {
    {&ti_uia_loggers_LoggerStopMode_Module__root__V.link,  /* link.next */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link},  /* link.prev */
};

/* Object__table__V */
ti_uia_loggers_LoggerStopMode_Object__ ti_uia_loggers_LoggerStopMode_Object__table__V[3] = {
    {/* instance#0 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x1,  /* instanceId */
        (xdc_UInt32)0x200U,  /* bufSize */
        ((xdc_UArg*)NULL),  /* buffer */
        ((xdc_UArg*)NULL),  /* write */
        ((xdc_UArg*)NULL),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeUArgs */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0U,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0U,  /* droppedEvents */
        (xdc_UInt16)0x0U,  /* eventSequenceNum */
        (xdc_UInt16)0x0U,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_0_packetArray__A),  /* packetArray */
    },
    {/* instance#1 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x2,  /* instanceId */
        (xdc_UInt32)0x400U,  /* bufSize */
        ((xdc_UArg*)NULL),  /* buffer */
        ((xdc_UArg*)NULL),  /* write */
        ((xdc_UArg*)NULL),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeUArgs */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0U,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0U,  /* droppedEvents */
        (xdc_UInt16)0x0U,  /* eventSequenceNum */
        (xdc_UInt16)0x0U,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_1_packetArray__A),  /* packetArray */
    },
    {/* instance#2 */
        &ti_uia_loggers_LoggerStopMode_Module__FXNS__C,
        1,  /* enabled */
        (xdc_Int16)0x3,  /* instanceId */
        (xdc_UInt32)0x400U,  /* bufSize */
        ((xdc_UArg*)NULL),  /* buffer */
        ((xdc_UArg*)NULL),  /* write */
        ((xdc_UArg*)NULL),  /* end */
        (xdc_SizeT)0x0,  /* maxEventSizeUArgs */
        (xdc_SizeT)0x0,  /* maxEventSize */
        (xdc_UInt16)0x0U,  /* numBytesInPrevEvent */
        (xdc_Bits32)0x0U,  /* droppedEvents */
        (xdc_UInt16)0x0U,  /* eventSequenceNum */
        (xdc_UInt16)0x0U,  /* pktSequenceNum */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_hdr__A),  /* hdr */
        ((void*)ti_uia_loggers_LoggerStopMode_Instance_State_2_packetArray__A),  /* packetArray */
    },
};

/* Module__state__V */
#ifdef __ti__
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V __attribute__ ((section(".data:ti_uia_loggers_LoggerStopMode_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V __attribute__ ((section(".data_ti_uia_loggers_LoggerStopMode_Module__state__V")));
#endif
ti_uia_loggers_LoggerStopMode_Module_State__ ti_uia_loggers_LoggerStopMode_Module__state__V = {
    1,  /* enabled */
    (xdc_Bits16)0x0U,  /* level1 */
    (xdc_Bits16)0x0U,  /* level2 */
    (xdc_Bits16)0x0U,  /* level3 */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsEnabled ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsIncluded ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__diagsMask__C, ".const:ti_uia_loggers_LoggerStopMode_Module__diagsMask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask ti_uia_loggers_LoggerStopMode_Module__diagsMask__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gateObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gateObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gateObj ti_uia_loggers_LoggerStopMode_Module__gateObj__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__gatePrms__C, ".const:ti_uia_loggers_LoggerStopMode_Module__gatePrms__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms ti_uia_loggers_LoggerStopMode_Module__gatePrms__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__id__C, ".const:ti_uia_loggers_LoggerStopMode_Module__id__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__id ti_uia_loggers_LoggerStopMode_Module__id__C = (xdc_Bits16)0x803dU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerDefined ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerObj__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerObj__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj ti_uia_loggers_LoggerStopMode_Module__loggerObj__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C, ".const:ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C = ((const CT__ti_uia_loggers_LoggerStopMode_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__count__C, ".const:ti_uia_loggers_LoggerStopMode_Object__count__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__count ti_uia_loggers_LoggerStopMode_Object__count__C = 3;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__heap__C, ".const:ti_uia_loggers_LoggerStopMode_Object__heap__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__heap ti_uia_loggers_LoggerStopMode_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__sizeof__C, ".const:ti_uia_loggers_LoggerStopMode_Object__sizeof__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__sizeof ti_uia_loggers_LoggerStopMode_Object__sizeof__C = sizeof(ti_uia_loggers_LoggerStopMode_Object__);

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__table__C, ".const:ti_uia_loggers_LoggerStopMode_Object__table__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_Object__table ti_uia_loggers_LoggerStopMode_Object__table__C = ti_uia_loggers_LoggerStopMode_Object__table__V;

/* filterByLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_filterByLevel__C, ".const:ti_uia_loggers_LoggerStopMode_filterByLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_filterByLevel ti_uia_loggers_LoggerStopMode_filterByLevel__C = 0;

/* isTimestampEnabled__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C, ".const:ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_isTimestampEnabled ti_uia_loggers_LoggerStopMode_isTimestampEnabled__C = 1;

/* supportLoggerDisable__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C, ".const:ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_supportLoggerDisable ti_uia_loggers_LoggerStopMode_supportLoggerDisable__C = 0;

/* level1Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level1Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level1Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level1Mask ti_uia_loggers_LoggerStopMode_level1Mask__C = (xdc_Bits16)0x0U;

/* level2Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level2Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level2Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level2Mask ti_uia_loggers_LoggerStopMode_level2Mask__C = (xdc_Bits16)0x0U;

/* level3Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level3Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level3Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level3Mask ti_uia_loggers_LoggerStopMode_level3Mask__C = (xdc_Bits16)0x0U;

/* level4Mask__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_level4Mask__C, ".const:ti_uia_loggers_LoggerStopMode_level4Mask__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_level4Mask ti_uia_loggers_LoggerStopMode_level4Mask__C = (xdc_Bits16)0xff87U;

/* L_test__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_L_test__C, ".const:ti_uia_loggers_LoggerStopMode_L_test__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_L_test ti_uia_loggers_LoggerStopMode_L_test__C = (((xdc_runtime_Log_Event)7609) << 16 | 256);

/* E_badLevel__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_E_badLevel__C, ".const:ti_uia_loggers_LoggerStopMode_E_badLevel__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_E_badLevel ti_uia_loggers_LoggerStopMode_E_badLevel__C = (((xdc_runtime_Error_Id)3939) << 16 | 0U);

/* numCores__C */
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_numCores__C, ".const:ti_uia_loggers_LoggerStopMode_numCores__C");
__FAR__ const CT__ti_uia_loggers_LoggerStopMode_numCores ti_uia_loggers_LoggerStopMode_numCores__C = (xdc_Int)0x1;


/*
 * ======== ti.uia.runtime.EventHdr INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsEnabled__C, ".const:ti_uia_runtime_EventHdr_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsEnabled ti_uia_runtime_EventHdr_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsIncluded__C, ".const:ti_uia_runtime_EventHdr_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsIncluded ti_uia_runtime_EventHdr_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__diagsMask__C, ".const:ti_uia_runtime_EventHdr_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__diagsMask ti_uia_runtime_EventHdr_Module__diagsMask__C = ((const CT__ti_uia_runtime_EventHdr_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gateObj__C, ".const:ti_uia_runtime_EventHdr_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gateObj ti_uia_runtime_EventHdr_Module__gateObj__C = ((const CT__ti_uia_runtime_EventHdr_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__gatePrms__C, ".const:ti_uia_runtime_EventHdr_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__gatePrms ti_uia_runtime_EventHdr_Module__gatePrms__C = ((const CT__ti_uia_runtime_EventHdr_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__id__C, ".const:ti_uia_runtime_EventHdr_Module__id__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__id ti_uia_runtime_EventHdr_Module__id__C = (xdc_Bits16)0x8019U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerDefined__C, ".const:ti_uia_runtime_EventHdr_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerDefined ti_uia_runtime_EventHdr_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerObj__C, ".const:ti_uia_runtime_EventHdr_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerObj ti_uia_runtime_EventHdr_Module__loggerObj__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn0__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0 ti_uia_runtime_EventHdr_Module__loggerFxn0__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn1__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1 ti_uia_runtime_EventHdr_Module__loggerFxn1__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn2__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2 ti_uia_runtime_EventHdr_Module__loggerFxn2__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn4__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4 ti_uia_runtime_EventHdr_Module__loggerFxn4__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Module__loggerFxn8__C, ".const:ti_uia_runtime_EventHdr_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8 ti_uia_runtime_EventHdr_Module__loggerFxn8__C = ((const CT__ti_uia_runtime_EventHdr_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__count__C, ".const:ti_uia_runtime_EventHdr_Object__count__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__count ti_uia_runtime_EventHdr_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__heap__C, ".const:ti_uia_runtime_EventHdr_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__heap ti_uia_runtime_EventHdr_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__sizeof__C, ".const:ti_uia_runtime_EventHdr_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__sizeof ti_uia_runtime_EventHdr_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_EventHdr_Object__table__C, ".const:ti_uia_runtime_EventHdr_Object__table__C");
__FAR__ const CT__ti_uia_runtime_EventHdr_Object__table ti_uia_runtime_EventHdr_Object__table__C = NULL;


/*
 * ======== ti.uia.runtime.QueueDescriptor INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V __attribute__ ((section(".data:ti_uia_runtime_QueueDescriptor_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V __attribute__ ((section(".data_ti_uia_runtime_QueueDescriptor_Module__state__V")));
#endif
ti_uia_runtime_QueueDescriptor_Module_State__ ti_uia_runtime_QueueDescriptor_Module__state__V = {
    ((xdc_Ptr)NULL),  /* mPtrToFirstDescriptor */
    (xdc_UInt)0x0U,  /* mUpdateCount */
    (xdc_UInt32)0x5555U,  /* is5555ifInitialized */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsEnabled ti_uia_runtime_QueueDescriptor_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsIncluded ti_uia_runtime_QueueDescriptor_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__diagsMask__C, ".const:ti_uia_runtime_QueueDescriptor_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask ti_uia_runtime_QueueDescriptor_Module__diagsMask__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gateObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj ti_uia_runtime_QueueDescriptor_Module__gateObj__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__gatePrms__C, ".const:ti_uia_runtime_QueueDescriptor_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms ti_uia_runtime_QueueDescriptor_Module__gatePrms__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__id__C, ".const:ti_uia_runtime_QueueDescriptor_Module__id__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__id ti_uia_runtime_QueueDescriptor_Module__id__C = (xdc_Bits16)0x801aU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerDefined ti_uia_runtime_QueueDescriptor_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerObj__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj ti_uia_runtime_QueueDescriptor_Module__loggerObj__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0 ti_uia_runtime_QueueDescriptor_Module__loggerFxn0__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1 ti_uia_runtime_QueueDescriptor_Module__loggerFxn1__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2 ti_uia_runtime_QueueDescriptor_Module__loggerFxn2__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4 ti_uia_runtime_QueueDescriptor_Module__loggerFxn4__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C, ".const:ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8 ti_uia_runtime_QueueDescriptor_Module__loggerFxn8__C = ((const CT__ti_uia_runtime_QueueDescriptor_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__count__C, ".const:ti_uia_runtime_QueueDescriptor_Object__count__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__count ti_uia_runtime_QueueDescriptor_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__heap__C, ".const:ti_uia_runtime_QueueDescriptor_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__heap ti_uia_runtime_QueueDescriptor_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__sizeof__C, ".const:ti_uia_runtime_QueueDescriptor_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__sizeof ti_uia_runtime_QueueDescriptor_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_QueueDescriptor_Object__table__C, ".const:ti_uia_runtime_QueueDescriptor_Object__table__C");
__FAR__ const CT__ti_uia_runtime_QueueDescriptor_Object__table ti_uia_runtime_QueueDescriptor_Object__table__C = NULL;


/*
 * ======== ti.uia.runtime.UIAMetaData INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsEnabled ti_uia_runtime_UIAMetaData_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsIncluded ti_uia_runtime_UIAMetaData_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__diagsMask__C, ".const:ti_uia_runtime_UIAMetaData_Module__diagsMask__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask ti_uia_runtime_UIAMetaData_Module__diagsMask__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gateObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__gateObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gateObj ti_uia_runtime_UIAMetaData_Module__gateObj__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__gatePrms__C, ".const:ti_uia_runtime_UIAMetaData_Module__gatePrms__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms ti_uia_runtime_UIAMetaData_Module__gatePrms__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__id__C, ".const:ti_uia_runtime_UIAMetaData_Module__id__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__id ti_uia_runtime_UIAMetaData_Module__id__C = (xdc_Bits16)0x801bU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerDefined__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerDefined__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerDefined ti_uia_runtime_UIAMetaData_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerObj__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerObj__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj ti_uia_runtime_UIAMetaData_Module__loggerObj__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0 ti_uia_runtime_UIAMetaData_Module__loggerFxn0__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1 ti_uia_runtime_UIAMetaData_Module__loggerFxn1__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2 ti_uia_runtime_UIAMetaData_Module__loggerFxn2__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4 ti_uia_runtime_UIAMetaData_Module__loggerFxn4__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C, ".const:ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8 ti_uia_runtime_UIAMetaData_Module__loggerFxn8__C = ((const CT__ti_uia_runtime_UIAMetaData_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__count__C, ".const:ti_uia_runtime_UIAMetaData_Object__count__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__count ti_uia_runtime_UIAMetaData_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__heap__C, ".const:ti_uia_runtime_UIAMetaData_Object__heap__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__heap ti_uia_runtime_UIAMetaData_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__sizeof__C, ".const:ti_uia_runtime_UIAMetaData_Object__sizeof__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__sizeof ti_uia_runtime_UIAMetaData_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(ti_uia_runtime_UIAMetaData_Object__table__C, ".const:ti_uia_runtime_UIAMetaData_Object__table__C");
__FAR__ const CT__ti_uia_runtime_UIAMetaData_Object__table ti_uia_runtime_UIAMetaData_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Assert INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsEnabled__C, ".const:xdc_runtime_Assert_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsEnabled xdc_runtime_Assert_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsIncluded__C, ".const:xdc_runtime_Assert_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsIncluded xdc_runtime_Assert_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__diagsMask__C, ".const:xdc_runtime_Assert_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Assert_Module__diagsMask xdc_runtime_Assert_Module__diagsMask__C = ((const CT__xdc_runtime_Assert_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gateObj__C, ".const:xdc_runtime_Assert_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gateObj xdc_runtime_Assert_Module__gateObj__C = ((const CT__xdc_runtime_Assert_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__gatePrms__C, ".const:xdc_runtime_Assert_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Assert_Module__gatePrms xdc_runtime_Assert_Module__gatePrms__C = ((const CT__xdc_runtime_Assert_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__id__C, ".const:xdc_runtime_Assert_Module__id__C");
__FAR__ const CT__xdc_runtime_Assert_Module__id xdc_runtime_Assert_Module__id__C = (xdc_Bits16)0x8002U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerDefined__C, ".const:xdc_runtime_Assert_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerDefined xdc_runtime_Assert_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerObj__C, ".const:xdc_runtime_Assert_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerObj xdc_runtime_Assert_Module__loggerObj__C = ((const CT__xdc_runtime_Assert_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn0__C, ".const:xdc_runtime_Assert_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn0 xdc_runtime_Assert_Module__loggerFxn0__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn1__C, ".const:xdc_runtime_Assert_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn1 xdc_runtime_Assert_Module__loggerFxn1__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn2__C, ".const:xdc_runtime_Assert_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn2 xdc_runtime_Assert_Module__loggerFxn2__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn4__C, ".const:xdc_runtime_Assert_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn4 xdc_runtime_Assert_Module__loggerFxn4__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Module__loggerFxn8__C, ".const:xdc_runtime_Assert_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Assert_Module__loggerFxn8 xdc_runtime_Assert_Module__loggerFxn8__C = ((const CT__xdc_runtime_Assert_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__count__C, ".const:xdc_runtime_Assert_Object__count__C");
__FAR__ const CT__xdc_runtime_Assert_Object__count xdc_runtime_Assert_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__heap__C, ".const:xdc_runtime_Assert_Object__heap__C");
__FAR__ const CT__xdc_runtime_Assert_Object__heap xdc_runtime_Assert_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__sizeof__C, ".const:xdc_runtime_Assert_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Assert_Object__sizeof xdc_runtime_Assert_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Assert_Object__table__C, ".const:xdc_runtime_Assert_Object__table__C");
__FAR__ const CT__xdc_runtime_Assert_Object__table xdc_runtime_Assert_Object__table__C = NULL;

/* E_assertFailed__C */
#pragma DATA_SECTION(xdc_runtime_Assert_E_assertFailed__C, ".const:xdc_runtime_Assert_E_assertFailed__C");
__FAR__ const CT__xdc_runtime_Assert_E_assertFailed xdc_runtime_Assert_E_assertFailed__C = (((xdc_runtime_Error_Id)3871) << 16 | 0U);


/*
 * ======== xdc.runtime.Core INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsEnabled__C, ".const:xdc_runtime_Core_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsEnabled xdc_runtime_Core_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsIncluded__C, ".const:xdc_runtime_Core_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsIncluded xdc_runtime_Core_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__diagsMask__C, ".const:xdc_runtime_Core_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Core_Module__diagsMask xdc_runtime_Core_Module__diagsMask__C = ((const CT__xdc_runtime_Core_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gateObj__C, ".const:xdc_runtime_Core_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__gateObj xdc_runtime_Core_Module__gateObj__C = ((const CT__xdc_runtime_Core_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__gatePrms__C, ".const:xdc_runtime_Core_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Core_Module__gatePrms xdc_runtime_Core_Module__gatePrms__C = ((const CT__xdc_runtime_Core_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__id__C, ".const:xdc_runtime_Core_Module__id__C");
__FAR__ const CT__xdc_runtime_Core_Module__id xdc_runtime_Core_Module__id__C = (xdc_Bits16)0x8003U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerDefined__C, ".const:xdc_runtime_Core_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerDefined xdc_runtime_Core_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerObj__C, ".const:xdc_runtime_Core_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerObj xdc_runtime_Core_Module__loggerObj__C = ((const CT__xdc_runtime_Core_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn0__C, ".const:xdc_runtime_Core_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn0 xdc_runtime_Core_Module__loggerFxn0__C = ((const CT__xdc_runtime_Core_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn1__C, ".const:xdc_runtime_Core_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn1 xdc_runtime_Core_Module__loggerFxn1__C = ((const CT__xdc_runtime_Core_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn2__C, ".const:xdc_runtime_Core_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn2 xdc_runtime_Core_Module__loggerFxn2__C = ((const CT__xdc_runtime_Core_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn4__C, ".const:xdc_runtime_Core_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn4 xdc_runtime_Core_Module__loggerFxn4__C = ((const CT__xdc_runtime_Core_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Core_Module__loggerFxn8__C, ".const:xdc_runtime_Core_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Core_Module__loggerFxn8 xdc_runtime_Core_Module__loggerFxn8__C = ((const CT__xdc_runtime_Core_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__count__C, ".const:xdc_runtime_Core_Object__count__C");
__FAR__ const CT__xdc_runtime_Core_Object__count xdc_runtime_Core_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__heap__C, ".const:xdc_runtime_Core_Object__heap__C");
__FAR__ const CT__xdc_runtime_Core_Object__heap xdc_runtime_Core_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__sizeof__C, ".const:xdc_runtime_Core_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Core_Object__sizeof xdc_runtime_Core_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Core_Object__table__C, ".const:xdc_runtime_Core_Object__table__C");
__FAR__ const CT__xdc_runtime_Core_Object__table xdc_runtime_Core_Object__table__C = NULL;

/* A_initializedParams__C */
#pragma DATA_SECTION(xdc_runtime_Core_A_initializedParams__C, ".const:xdc_runtime_Core_A_initializedParams__C");
__FAR__ const CT__xdc_runtime_Core_A_initializedParams xdc_runtime_Core_A_initializedParams__C = (((xdc_runtime_Assert_Id)1) << 16 | 16);


/*
 * ======== xdc.runtime.Defaults INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsEnabled__C, ".const:xdc_runtime_Defaults_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsEnabled xdc_runtime_Defaults_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsIncluded__C, ".const:xdc_runtime_Defaults_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsIncluded xdc_runtime_Defaults_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__diagsMask__C, ".const:xdc_runtime_Defaults_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__diagsMask xdc_runtime_Defaults_Module__diagsMask__C = ((const CT__xdc_runtime_Defaults_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gateObj__C, ".const:xdc_runtime_Defaults_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gateObj xdc_runtime_Defaults_Module__gateObj__C = ((const CT__xdc_runtime_Defaults_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__gatePrms__C, ".const:xdc_runtime_Defaults_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__gatePrms xdc_runtime_Defaults_Module__gatePrms__C = ((const CT__xdc_runtime_Defaults_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__id__C, ".const:xdc_runtime_Defaults_Module__id__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__id xdc_runtime_Defaults_Module__id__C = (xdc_Bits16)0x8004U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerDefined__C, ".const:xdc_runtime_Defaults_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerDefined xdc_runtime_Defaults_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerObj__C, ".const:xdc_runtime_Defaults_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerObj xdc_runtime_Defaults_Module__loggerObj__C = ((const CT__xdc_runtime_Defaults_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn0__C, ".const:xdc_runtime_Defaults_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn0 xdc_runtime_Defaults_Module__loggerFxn0__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn1__C, ".const:xdc_runtime_Defaults_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn1 xdc_runtime_Defaults_Module__loggerFxn1__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn2__C, ".const:xdc_runtime_Defaults_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn2 xdc_runtime_Defaults_Module__loggerFxn2__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn4__C, ".const:xdc_runtime_Defaults_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn4 xdc_runtime_Defaults_Module__loggerFxn4__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Module__loggerFxn8__C, ".const:xdc_runtime_Defaults_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Defaults_Module__loggerFxn8 xdc_runtime_Defaults_Module__loggerFxn8__C = ((const CT__xdc_runtime_Defaults_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__count__C, ".const:xdc_runtime_Defaults_Object__count__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__count xdc_runtime_Defaults_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__heap__C, ".const:xdc_runtime_Defaults_Object__heap__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__heap xdc_runtime_Defaults_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__sizeof__C, ".const:xdc_runtime_Defaults_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__sizeof xdc_runtime_Defaults_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Defaults_Object__table__C, ".const:xdc_runtime_Defaults_Object__table__C");
__FAR__ const CT__xdc_runtime_Defaults_Object__table xdc_runtime_Defaults_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Diags INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsEnabled__C, ".const:xdc_runtime_Diags_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsEnabled xdc_runtime_Diags_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsIncluded__C, ".const:xdc_runtime_Diags_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsIncluded xdc_runtime_Diags_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__diagsMask__C, ".const:xdc_runtime_Diags_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Diags_Module__diagsMask xdc_runtime_Diags_Module__diagsMask__C = ((const CT__xdc_runtime_Diags_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gateObj__C, ".const:xdc_runtime_Diags_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gateObj xdc_runtime_Diags_Module__gateObj__C = ((const CT__xdc_runtime_Diags_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__gatePrms__C, ".const:xdc_runtime_Diags_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Diags_Module__gatePrms xdc_runtime_Diags_Module__gatePrms__C = ((const CT__xdc_runtime_Diags_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__id__C, ".const:xdc_runtime_Diags_Module__id__C");
__FAR__ const CT__xdc_runtime_Diags_Module__id xdc_runtime_Diags_Module__id__C = (xdc_Bits16)0x8005U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerDefined__C, ".const:xdc_runtime_Diags_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerDefined xdc_runtime_Diags_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerObj__C, ".const:xdc_runtime_Diags_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerObj xdc_runtime_Diags_Module__loggerObj__C = ((const CT__xdc_runtime_Diags_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn0__C, ".const:xdc_runtime_Diags_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn0 xdc_runtime_Diags_Module__loggerFxn0__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn1__C, ".const:xdc_runtime_Diags_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn1 xdc_runtime_Diags_Module__loggerFxn1__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn2__C, ".const:xdc_runtime_Diags_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn2 xdc_runtime_Diags_Module__loggerFxn2__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn4__C, ".const:xdc_runtime_Diags_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn4 xdc_runtime_Diags_Module__loggerFxn4__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Module__loggerFxn8__C, ".const:xdc_runtime_Diags_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Diags_Module__loggerFxn8 xdc_runtime_Diags_Module__loggerFxn8__C = ((const CT__xdc_runtime_Diags_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__count__C, ".const:xdc_runtime_Diags_Object__count__C");
__FAR__ const CT__xdc_runtime_Diags_Object__count xdc_runtime_Diags_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__heap__C, ".const:xdc_runtime_Diags_Object__heap__C");
__FAR__ const CT__xdc_runtime_Diags_Object__heap xdc_runtime_Diags_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__sizeof__C, ".const:xdc_runtime_Diags_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Diags_Object__sizeof xdc_runtime_Diags_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Diags_Object__table__C, ".const:xdc_runtime_Diags_Object__table__C");
__FAR__ const CT__xdc_runtime_Diags_Object__table xdc_runtime_Diags_Object__table__C = NULL;

/* setMaskEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Diags_setMaskEnabled__C, ".const:xdc_runtime_Diags_setMaskEnabled__C");
__FAR__ const CT__xdc_runtime_Diags_setMaskEnabled xdc_runtime_Diags_setMaskEnabled__C = 1;

/* dictBase__C */
#pragma DATA_SECTION(xdc_runtime_Diags_dictBase__C, ".const:xdc_runtime_Diags_dictBase__C");
__FAR__ const CT__xdc_runtime_Diags_dictBase xdc_runtime_Diags_dictBase__C = ((const CT__xdc_runtime_Diags_dictBase)((void*)&xdc_runtime_Diags_dictElems[0]));


/*
 * ======== xdc.runtime.Error INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data:xdc_runtime_Error_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V __attribute__ ((section(".data_xdc_runtime_Error_Module__state__V")));
#endif
xdc_runtime_Error_Module_State__ xdc_runtime_Error_Module__state__V = {
    (xdc_UInt16)0x0U,  /* count */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsEnabled__C, ".const:xdc_runtime_Error_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsEnabled xdc_runtime_Error_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsIncluded__C, ".const:xdc_runtime_Error_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsIncluded xdc_runtime_Error_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__diagsMask__C, ".const:xdc_runtime_Error_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Error_Module__diagsMask xdc_runtime_Error_Module__diagsMask__C = ((const CT__xdc_runtime_Error_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gateObj__C, ".const:xdc_runtime_Error_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__gateObj xdc_runtime_Error_Module__gateObj__C = ((const CT__xdc_runtime_Error_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__gatePrms__C, ".const:xdc_runtime_Error_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Error_Module__gatePrms xdc_runtime_Error_Module__gatePrms__C = ((const CT__xdc_runtime_Error_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__id__C, ".const:xdc_runtime_Error_Module__id__C");
__FAR__ const CT__xdc_runtime_Error_Module__id xdc_runtime_Error_Module__id__C = (xdc_Bits16)0x8006U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerDefined__C, ".const:xdc_runtime_Error_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerDefined xdc_runtime_Error_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerObj__C, ".const:xdc_runtime_Error_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerObj xdc_runtime_Error_Module__loggerObj__C = ((const CT__xdc_runtime_Error_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn0__C, ".const:xdc_runtime_Error_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn0 xdc_runtime_Error_Module__loggerFxn0__C = ((const CT__xdc_runtime_Error_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn1__C, ".const:xdc_runtime_Error_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn1 xdc_runtime_Error_Module__loggerFxn1__C = ((const CT__xdc_runtime_Error_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn2__C, ".const:xdc_runtime_Error_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn2 xdc_runtime_Error_Module__loggerFxn2__C = ((const CT__xdc_runtime_Error_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn4__C, ".const:xdc_runtime_Error_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn4 xdc_runtime_Error_Module__loggerFxn4__C = ((const CT__xdc_runtime_Error_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Error_Module__loggerFxn8__C, ".const:xdc_runtime_Error_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Error_Module__loggerFxn8 xdc_runtime_Error_Module__loggerFxn8__C = ((const CT__xdc_runtime_Error_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__count__C, ".const:xdc_runtime_Error_Object__count__C");
__FAR__ const CT__xdc_runtime_Error_Object__count xdc_runtime_Error_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__heap__C, ".const:xdc_runtime_Error_Object__heap__C");
__FAR__ const CT__xdc_runtime_Error_Object__heap xdc_runtime_Error_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__sizeof__C, ".const:xdc_runtime_Error_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Error_Object__sizeof xdc_runtime_Error_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Error_Object__table__C, ".const:xdc_runtime_Error_Object__table__C");
__FAR__ const CT__xdc_runtime_Error_Object__table xdc_runtime_Error_Object__table__C = NULL;

/* policyFxn__C */
#pragma DATA_SECTION(xdc_runtime_Error_policyFxn__C, ".const:xdc_runtime_Error_policyFxn__C");
__FAR__ const CT__xdc_runtime_Error_policyFxn xdc_runtime_Error_policyFxn__C = ((const CT__xdc_runtime_Error_policyFxn)(xdc_runtime_Error_policyDefault__E));

/* E_generic__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_generic__C, ".const:xdc_runtime_Error_E_generic__C");
__FAR__ const CT__xdc_runtime_Error_E_generic xdc_runtime_Error_E_generic__C = (((xdc_runtime_Error_Id)3893) << 16 | 0U);

/* E_memory__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_memory__C, ".const:xdc_runtime_Error_E_memory__C");
__FAR__ const CT__xdc_runtime_Error_E_memory xdc_runtime_Error_E_memory__C = (((xdc_runtime_Error_Id)3897) << 16 | 0U);

/* E_msgCode__C */
#pragma DATA_SECTION(xdc_runtime_Error_E_msgCode__C, ".const:xdc_runtime_Error_E_msgCode__C");
__FAR__ const CT__xdc_runtime_Error_E_msgCode xdc_runtime_Error_E_msgCode__C = (((xdc_runtime_Error_Id)3931) << 16 | 0U);

/* policy__C */
#pragma DATA_SECTION(xdc_runtime_Error_policy__C, ".const:xdc_runtime_Error_policy__C");
__FAR__ const CT__xdc_runtime_Error_policy xdc_runtime_Error_policy__C = xdc_runtime_Error_UNWIND;

/* raiseHook__C */
#pragma DATA_SECTION(xdc_runtime_Error_raiseHook__C, ".const:xdc_runtime_Error_raiseHook__C");
__FAR__ const CT__xdc_runtime_Error_raiseHook xdc_runtime_Error_raiseHook__C = ((const CT__xdc_runtime_Error_raiseHook)(ti_sysbios_BIOS_errorRaiseHook__I));

/* maxDepth__C */
#pragma DATA_SECTION(xdc_runtime_Error_maxDepth__C, ".const:xdc_runtime_Error_maxDepth__C");
__FAR__ const CT__xdc_runtime_Error_maxDepth xdc_runtime_Error_maxDepth__C = (xdc_UInt16)0x2U;


/*
 * ======== xdc.runtime.Gate INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsEnabled__C, ".const:xdc_runtime_Gate_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsEnabled xdc_runtime_Gate_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsIncluded__C, ".const:xdc_runtime_Gate_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsIncluded xdc_runtime_Gate_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__diagsMask__C, ".const:xdc_runtime_Gate_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Gate_Module__diagsMask xdc_runtime_Gate_Module__diagsMask__C = ((const CT__xdc_runtime_Gate_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gateObj__C, ".const:xdc_runtime_Gate_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gateObj xdc_runtime_Gate_Module__gateObj__C = ((const CT__xdc_runtime_Gate_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__gatePrms__C, ".const:xdc_runtime_Gate_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Gate_Module__gatePrms xdc_runtime_Gate_Module__gatePrms__C = ((const CT__xdc_runtime_Gate_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__id__C, ".const:xdc_runtime_Gate_Module__id__C");
__FAR__ const CT__xdc_runtime_Gate_Module__id xdc_runtime_Gate_Module__id__C = (xdc_Bits16)0x8007U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerDefined__C, ".const:xdc_runtime_Gate_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerDefined xdc_runtime_Gate_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerObj__C, ".const:xdc_runtime_Gate_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerObj xdc_runtime_Gate_Module__loggerObj__C = ((const CT__xdc_runtime_Gate_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn0__C, ".const:xdc_runtime_Gate_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn0 xdc_runtime_Gate_Module__loggerFxn0__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn1__C, ".const:xdc_runtime_Gate_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn1 xdc_runtime_Gate_Module__loggerFxn1__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn2__C, ".const:xdc_runtime_Gate_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn2 xdc_runtime_Gate_Module__loggerFxn2__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn4__C, ".const:xdc_runtime_Gate_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn4 xdc_runtime_Gate_Module__loggerFxn4__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Module__loggerFxn8__C, ".const:xdc_runtime_Gate_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Gate_Module__loggerFxn8 xdc_runtime_Gate_Module__loggerFxn8__C = ((const CT__xdc_runtime_Gate_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__count__C, ".const:xdc_runtime_Gate_Object__count__C");
__FAR__ const CT__xdc_runtime_Gate_Object__count xdc_runtime_Gate_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__heap__C, ".const:xdc_runtime_Gate_Object__heap__C");
__FAR__ const CT__xdc_runtime_Gate_Object__heap xdc_runtime_Gate_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__sizeof__C, ".const:xdc_runtime_Gate_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Gate_Object__sizeof xdc_runtime_Gate_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Gate_Object__table__C, ".const:xdc_runtime_Gate_Object__table__C");
__FAR__ const CT__xdc_runtime_Gate_Object__table xdc_runtime_Gate_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Log INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsEnabled__C, ".const:xdc_runtime_Log_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsEnabled xdc_runtime_Log_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsIncluded__C, ".const:xdc_runtime_Log_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsIncluded xdc_runtime_Log_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__diagsMask__C, ".const:xdc_runtime_Log_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Log_Module__diagsMask xdc_runtime_Log_Module__diagsMask__C = ((const CT__xdc_runtime_Log_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gateObj__C, ".const:xdc_runtime_Log_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__gateObj xdc_runtime_Log_Module__gateObj__C = ((const CT__xdc_runtime_Log_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__gatePrms__C, ".const:xdc_runtime_Log_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Log_Module__gatePrms xdc_runtime_Log_Module__gatePrms__C = ((const CT__xdc_runtime_Log_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__id__C, ".const:xdc_runtime_Log_Module__id__C");
__FAR__ const CT__xdc_runtime_Log_Module__id xdc_runtime_Log_Module__id__C = (xdc_Bits16)0x8008U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerDefined__C, ".const:xdc_runtime_Log_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerDefined xdc_runtime_Log_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerObj__C, ".const:xdc_runtime_Log_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerObj xdc_runtime_Log_Module__loggerObj__C = ((const CT__xdc_runtime_Log_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn0__C, ".const:xdc_runtime_Log_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn0 xdc_runtime_Log_Module__loggerFxn0__C = ((const CT__xdc_runtime_Log_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn1__C, ".const:xdc_runtime_Log_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn1 xdc_runtime_Log_Module__loggerFxn1__C = ((const CT__xdc_runtime_Log_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn2__C, ".const:xdc_runtime_Log_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn2 xdc_runtime_Log_Module__loggerFxn2__C = ((const CT__xdc_runtime_Log_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn4__C, ".const:xdc_runtime_Log_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn4 xdc_runtime_Log_Module__loggerFxn4__C = ((const CT__xdc_runtime_Log_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Log_Module__loggerFxn8__C, ".const:xdc_runtime_Log_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Log_Module__loggerFxn8 xdc_runtime_Log_Module__loggerFxn8__C = ((const CT__xdc_runtime_Log_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__count__C, ".const:xdc_runtime_Log_Object__count__C");
__FAR__ const CT__xdc_runtime_Log_Object__count xdc_runtime_Log_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__heap__C, ".const:xdc_runtime_Log_Object__heap__C");
__FAR__ const CT__xdc_runtime_Log_Object__heap xdc_runtime_Log_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__sizeof__C, ".const:xdc_runtime_Log_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Log_Object__sizeof xdc_runtime_Log_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Log_Object__table__C, ".const:xdc_runtime_Log_Object__table__C");
__FAR__ const CT__xdc_runtime_Log_Object__table xdc_runtime_Log_Object__table__C = NULL;

/* L_construct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_construct__C, ".const:xdc_runtime_Log_L_construct__C");
__FAR__ const CT__xdc_runtime_Log_L_construct xdc_runtime_Log_L_construct__C = (((xdc_runtime_Log_Event)5240) << 16 | 4);

/* L_create__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_create__C, ".const:xdc_runtime_Log_L_create__C");
__FAR__ const CT__xdc_runtime_Log_L_create xdc_runtime_Log_L_create__C = (((xdc_runtime_Log_Event)5264) << 16 | 4);

/* L_destruct__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_destruct__C, ".const:xdc_runtime_Log_L_destruct__C");
__FAR__ const CT__xdc_runtime_Log_L_destruct xdc_runtime_Log_L_destruct__C = (((xdc_runtime_Log_Event)5285) << 16 | 4);

/* L_delete__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_delete__C, ".const:xdc_runtime_Log_L_delete__C");
__FAR__ const CT__xdc_runtime_Log_L_delete xdc_runtime_Log_L_delete__C = (((xdc_runtime_Log_Event)5304) << 16 | 4);

/* L_error__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_error__C, ".const:xdc_runtime_Log_L_error__C");
__FAR__ const CT__xdc_runtime_Log_L_error xdc_runtime_Log_L_error__C = (((xdc_runtime_Log_Event)5321) << 16 | 192);

/* L_warning__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_warning__C, ".const:xdc_runtime_Log_L_warning__C");
__FAR__ const CT__xdc_runtime_Log_L_warning xdc_runtime_Log_L_warning__C = (((xdc_runtime_Log_Event)5335) << 16 | 224);

/* L_info__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_info__C, ".const:xdc_runtime_Log_L_info__C");
__FAR__ const CT__xdc_runtime_Log_L_info xdc_runtime_Log_L_info__C = (((xdc_runtime_Log_Event)5351) << 16 | 16384);

/* L_start__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_start__C, ".const:xdc_runtime_Log_L_start__C");
__FAR__ const CT__xdc_runtime_Log_L_start xdc_runtime_Log_L_start__C = (((xdc_runtime_Log_Event)5358) << 16 | 32768);

/* L_stop__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stop__C, ".const:xdc_runtime_Log_L_stop__C");
__FAR__ const CT__xdc_runtime_Log_L_stop xdc_runtime_Log_L_stop__C = (((xdc_runtime_Log_Event)5369) << 16 | 32768);

/* L_startInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_startInstance__C, ".const:xdc_runtime_Log_L_startInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_startInstance xdc_runtime_Log_L_startInstance__C = (((xdc_runtime_Log_Event)5379) << 16 | 32768);

/* L_stopInstance__C */
#pragma DATA_SECTION(xdc_runtime_Log_L_stopInstance__C, ".const:xdc_runtime_Log_L_stopInstance__C");
__FAR__ const CT__xdc_runtime_Log_L_stopInstance xdc_runtime_Log_L_stopInstance__C = (((xdc_runtime_Log_Event)5398) << 16 | 32768);


/*
 * ======== xdc.runtime.Main INITIALIZERS ========
 */

/* Module__root__V */
xdc_runtime_Main_Module__ xdc_runtime_Main_Module__root__V = {
    65408,  /* mask */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsEnabled__C, ".const:xdc_runtime_Main_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsEnabled xdc_runtime_Main_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsIncluded__C, ".const:xdc_runtime_Main_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsIncluded xdc_runtime_Main_Module__diagsIncluded__C = (xdc_Bits32)0xff90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__diagsMask__C, ".const:xdc_runtime_Main_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Main_Module__diagsMask xdc_runtime_Main_Module__diagsMask__C = ((const CT__xdc_runtime_Main_Module__diagsMask)((void*)&xdc_runtime_Main_Module__root__V.mask));

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gateObj__C, ".const:xdc_runtime_Main_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__gateObj xdc_runtime_Main_Module__gateObj__C = ((const CT__xdc_runtime_Main_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__gatePrms__C, ".const:xdc_runtime_Main_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Main_Module__gatePrms xdc_runtime_Main_Module__gatePrms__C = ((const CT__xdc_runtime_Main_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__id__C, ".const:xdc_runtime_Main_Module__id__C");
__FAR__ const CT__xdc_runtime_Main_Module__id xdc_runtime_Main_Module__id__C = (xdc_Bits16)0x8009U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerDefined__C, ".const:xdc_runtime_Main_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerDefined xdc_runtime_Main_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerObj__C, ".const:xdc_runtime_Main_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerObj xdc_runtime_Main_Module__loggerObj__C = ((const CT__xdc_runtime_Main_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn0__C, ".const:xdc_runtime_Main_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn0 xdc_runtime_Main_Module__loggerFxn0__C = ((const CT__xdc_runtime_Main_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn1__C, ".const:xdc_runtime_Main_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn1 xdc_runtime_Main_Module__loggerFxn1__C = ((const CT__xdc_runtime_Main_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn2__C, ".const:xdc_runtime_Main_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn2 xdc_runtime_Main_Module__loggerFxn2__C = ((const CT__xdc_runtime_Main_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn4__C, ".const:xdc_runtime_Main_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn4 xdc_runtime_Main_Module__loggerFxn4__C = ((const CT__xdc_runtime_Main_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Main_Module__loggerFxn8__C, ".const:xdc_runtime_Main_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Main_Module__loggerFxn8 xdc_runtime_Main_Module__loggerFxn8__C = ((const CT__xdc_runtime_Main_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__count__C, ".const:xdc_runtime_Main_Object__count__C");
__FAR__ const CT__xdc_runtime_Main_Object__count xdc_runtime_Main_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__heap__C, ".const:xdc_runtime_Main_Object__heap__C");
__FAR__ const CT__xdc_runtime_Main_Object__heap xdc_runtime_Main_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__sizeof__C, ".const:xdc_runtime_Main_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Main_Object__sizeof xdc_runtime_Main_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Main_Object__table__C, ".const:xdc_runtime_Main_Object__table__C");
__FAR__ const CT__xdc_runtime_Main_Object__table xdc_runtime_Main_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Main_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Memory INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data:xdc_runtime_Memory_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V __attribute__ ((section(".data_xdc_runtime_Memory_Module__state__V")));
#endif
xdc_runtime_Memory_Module_State__ xdc_runtime_Memory_Module__state__V = {
    (xdc_SizeT)0x8,  /* maxDefaultTypeAlign */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsEnabled__C, ".const:xdc_runtime_Memory_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsEnabled xdc_runtime_Memory_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsIncluded__C, ".const:xdc_runtime_Memory_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsIncluded xdc_runtime_Memory_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__diagsMask__C, ".const:xdc_runtime_Memory_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Memory_Module__diagsMask xdc_runtime_Memory_Module__diagsMask__C = ((const CT__xdc_runtime_Memory_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gateObj__C, ".const:xdc_runtime_Memory_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gateObj xdc_runtime_Memory_Module__gateObj__C = ((const CT__xdc_runtime_Memory_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__gatePrms__C, ".const:xdc_runtime_Memory_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Memory_Module__gatePrms xdc_runtime_Memory_Module__gatePrms__C = ((const CT__xdc_runtime_Memory_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__id__C, ".const:xdc_runtime_Memory_Module__id__C");
__FAR__ const CT__xdc_runtime_Memory_Module__id xdc_runtime_Memory_Module__id__C = (xdc_Bits16)0x800aU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerDefined__C, ".const:xdc_runtime_Memory_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerDefined xdc_runtime_Memory_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerObj__C, ".const:xdc_runtime_Memory_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerObj xdc_runtime_Memory_Module__loggerObj__C = ((const CT__xdc_runtime_Memory_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn0__C, ".const:xdc_runtime_Memory_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn0 xdc_runtime_Memory_Module__loggerFxn0__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn1__C, ".const:xdc_runtime_Memory_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn1 xdc_runtime_Memory_Module__loggerFxn1__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn2__C, ".const:xdc_runtime_Memory_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn2 xdc_runtime_Memory_Module__loggerFxn2__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn4__C, ".const:xdc_runtime_Memory_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn4 xdc_runtime_Memory_Module__loggerFxn4__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Module__loggerFxn8__C, ".const:xdc_runtime_Memory_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Memory_Module__loggerFxn8 xdc_runtime_Memory_Module__loggerFxn8__C = ((const CT__xdc_runtime_Memory_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__count__C, ".const:xdc_runtime_Memory_Object__count__C");
__FAR__ const CT__xdc_runtime_Memory_Object__count xdc_runtime_Memory_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__heap__C, ".const:xdc_runtime_Memory_Object__heap__C");
__FAR__ const CT__xdc_runtime_Memory_Object__heap xdc_runtime_Memory_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__sizeof__C, ".const:xdc_runtime_Memory_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Memory_Object__sizeof xdc_runtime_Memory_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Memory_Object__table__C, ".const:xdc_runtime_Memory_Object__table__C");
__FAR__ const CT__xdc_runtime_Memory_Object__table xdc_runtime_Memory_Object__table__C = NULL;

/* defaultHeapInstance__C */
#pragma DATA_SECTION(xdc_runtime_Memory_defaultHeapInstance__C, ".const:xdc_runtime_Memory_defaultHeapInstance__C");
__FAR__ const CT__xdc_runtime_Memory_defaultHeapInstance xdc_runtime_Memory_defaultHeapInstance__C = (xdc_runtime_IHeap_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0];


/*
 * ======== xdc.runtime.Memory_HeapProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Registry INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data:xdc_runtime_Registry_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V __attribute__ ((section(".data_xdc_runtime_Registry_Module__state__V")));
#endif
xdc_runtime_Registry_Module_State__ xdc_runtime_Registry_Module__state__V = {
    ((xdc_runtime_Types_RegDesc*)NULL),  /* listHead */
    (xdc_Bits16)0x7fffU,  /* curId */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsEnabled__C, ".const:xdc_runtime_Registry_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsEnabled xdc_runtime_Registry_Module__diagsEnabled__C = (xdc_Bits32)0x90U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsIncluded__C, ".const:xdc_runtime_Registry_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsIncluded xdc_runtime_Registry_Module__diagsIncluded__C = (xdc_Bits32)0x90U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__diagsMask__C, ".const:xdc_runtime_Registry_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Registry_Module__diagsMask xdc_runtime_Registry_Module__diagsMask__C = ((const CT__xdc_runtime_Registry_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gateObj__C, ".const:xdc_runtime_Registry_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gateObj xdc_runtime_Registry_Module__gateObj__C = ((const CT__xdc_runtime_Registry_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__gatePrms__C, ".const:xdc_runtime_Registry_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Registry_Module__gatePrms xdc_runtime_Registry_Module__gatePrms__C = ((const CT__xdc_runtime_Registry_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__id__C, ".const:xdc_runtime_Registry_Module__id__C");
__FAR__ const CT__xdc_runtime_Registry_Module__id xdc_runtime_Registry_Module__id__C = (xdc_Bits16)0x800bU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerDefined__C, ".const:xdc_runtime_Registry_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerDefined xdc_runtime_Registry_Module__loggerDefined__C = 1;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerObj__C, ".const:xdc_runtime_Registry_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerObj xdc_runtime_Registry_Module__loggerObj__C = ((const CT__xdc_runtime_Registry_Module__loggerObj)((void*)(xdc_runtime_ILogger_Handle)&ti_uia_loggers_LoggerStopMode_Object__table__V[1]));

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn0__C, ".const:xdc_runtime_Registry_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn0 xdc_runtime_Registry_Module__loggerFxn0__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn0)(ti_uia_loggers_LoggerStopMode_write0));

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn1__C, ".const:xdc_runtime_Registry_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn1 xdc_runtime_Registry_Module__loggerFxn1__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn1)(ti_uia_loggers_LoggerStopMode_write1));

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn2__C, ".const:xdc_runtime_Registry_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn2 xdc_runtime_Registry_Module__loggerFxn2__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn2)(ti_uia_loggers_LoggerStopMode_write2));

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn4__C, ".const:xdc_runtime_Registry_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn4 xdc_runtime_Registry_Module__loggerFxn4__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn4)(ti_uia_loggers_LoggerStopMode_write4));

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Module__loggerFxn8__C, ".const:xdc_runtime_Registry_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Registry_Module__loggerFxn8 xdc_runtime_Registry_Module__loggerFxn8__C = ((const CT__xdc_runtime_Registry_Module__loggerFxn8)(ti_uia_loggers_LoggerStopMode_write8));

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__count__C, ".const:xdc_runtime_Registry_Object__count__C");
__FAR__ const CT__xdc_runtime_Registry_Object__count xdc_runtime_Registry_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__heap__C, ".const:xdc_runtime_Registry_Object__heap__C");
__FAR__ const CT__xdc_runtime_Registry_Object__heap xdc_runtime_Registry_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__sizeof__C, ".const:xdc_runtime_Registry_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Registry_Object__sizeof xdc_runtime_Registry_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Registry_Object__table__C, ".const:xdc_runtime_Registry_Object__table__C");
__FAR__ const CT__xdc_runtime_Registry_Object__table xdc_runtime_Registry_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Startup INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data:xdc_runtime_Startup_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V __attribute__ ((section(".data_xdc_runtime_Startup_Module__state__V")));
#endif
xdc_runtime_Startup_Module_State__ xdc_runtime_Startup_Module__state__V = {
    ((xdc_Int*)NULL),  /* stateTab */
    0,  /* execFlag */
    0,  /* rtsDoneFlag */
};

/* --> xdc_runtime_Startup_firstFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__A, ".const:xdc_runtime_Startup_firstFxns__A");
const __T1_xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__A[4] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_heaps_HeapMem_initPrimary__I)),  /* [0] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_hal_Hwi_initStack)),  /* [1] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_family_arm_m3_Hwi_initNVIC__E)),  /* [2] */
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_family_arm_lm4_Timer_enableTimers__I)),  /* [3] */
};

/* --> xdc_runtime_Startup_lastFxns__A */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__A, ".const:xdc_runtime_Startup_lastFxns__A");
const __T1_xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__A[1] = {
    ((xdc_Void(*)(xdc_Void))(ti_sysbios_family_arm_lm4_TimestampProvider_startTimer__E)),  /* [0] */
};

/* --> xdc_runtime_Startup_sfxnTab__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__A, ".const:xdc_runtime_Startup_sfxnTab__A");
const __T1_xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__A[10] = {
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_System_Module_startup__E)),  /* [0] */
    ((xdc_Int(*)(xdc_Int f_arg0))(xdc_runtime_SysMin_Module_startup__E)),  /* [1] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Clock_Module_startup__E)),  /* [2] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Swi_Module_startup__E)),  /* [3] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_knl_Task_Module_startup__E)),  /* [4] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_hal_Hwi_Module_startup__E)),  /* [5] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_m3_Hwi_Module_startup__E)),  /* [6] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_lm4_TimestampProvider_Module_startup__E)),  /* [7] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_sysbios_family_arm_lm4_Timer_Module_startup__E)),  /* [8] */
    ((xdc_Int(*)(xdc_Int f_arg0))(ti_uia_loggers_LoggerStopMode_Module_startup__E)),  /* [9] */
};

/* --> xdc_runtime_Startup_sfxnRts__A */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__A, ".const:xdc_runtime_Startup_sfxnRts__A");
const __T1_xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__A[10] = {
    1,  /* [0] */
    1,  /* [1] */
    0,  /* [2] */
    0,  /* [3] */
    0,  /* [4] */
    0,  /* [5] */
    0,  /* [6] */
    1,  /* [7] */
    0,  /* [8] */
    1,  /* [9] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsEnabled__C, ".const:xdc_runtime_Startup_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsEnabled xdc_runtime_Startup_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsIncluded__C, ".const:xdc_runtime_Startup_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsIncluded xdc_runtime_Startup_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__diagsMask__C, ".const:xdc_runtime_Startup_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Startup_Module__diagsMask xdc_runtime_Startup_Module__diagsMask__C = ((const CT__xdc_runtime_Startup_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gateObj__C, ".const:xdc_runtime_Startup_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gateObj xdc_runtime_Startup_Module__gateObj__C = ((const CT__xdc_runtime_Startup_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__gatePrms__C, ".const:xdc_runtime_Startup_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Startup_Module__gatePrms xdc_runtime_Startup_Module__gatePrms__C = ((const CT__xdc_runtime_Startup_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__id__C, ".const:xdc_runtime_Startup_Module__id__C");
__FAR__ const CT__xdc_runtime_Startup_Module__id xdc_runtime_Startup_Module__id__C = (xdc_Bits16)0x800cU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerDefined__C, ".const:xdc_runtime_Startup_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerDefined xdc_runtime_Startup_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerObj__C, ".const:xdc_runtime_Startup_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerObj xdc_runtime_Startup_Module__loggerObj__C = ((const CT__xdc_runtime_Startup_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn0__C, ".const:xdc_runtime_Startup_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn0 xdc_runtime_Startup_Module__loggerFxn0__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn1__C, ".const:xdc_runtime_Startup_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn1 xdc_runtime_Startup_Module__loggerFxn1__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn2__C, ".const:xdc_runtime_Startup_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn2 xdc_runtime_Startup_Module__loggerFxn2__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn4__C, ".const:xdc_runtime_Startup_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn4 xdc_runtime_Startup_Module__loggerFxn4__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Module__loggerFxn8__C, ".const:xdc_runtime_Startup_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Startup_Module__loggerFxn8 xdc_runtime_Startup_Module__loggerFxn8__C = ((const CT__xdc_runtime_Startup_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__count__C, ".const:xdc_runtime_Startup_Object__count__C");
__FAR__ const CT__xdc_runtime_Startup_Object__count xdc_runtime_Startup_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__heap__C, ".const:xdc_runtime_Startup_Object__heap__C");
__FAR__ const CT__xdc_runtime_Startup_Object__heap xdc_runtime_Startup_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__sizeof__C, ".const:xdc_runtime_Startup_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Startup_Object__sizeof xdc_runtime_Startup_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Startup_Object__table__C, ".const:xdc_runtime_Startup_Object__table__C");
__FAR__ const CT__xdc_runtime_Startup_Object__table xdc_runtime_Startup_Object__table__C = NULL;

/* maxPasses__C */
#pragma DATA_SECTION(xdc_runtime_Startup_maxPasses__C, ".const:xdc_runtime_Startup_maxPasses__C");
__FAR__ const CT__xdc_runtime_Startup_maxPasses xdc_runtime_Startup_maxPasses__C = (xdc_Int)0x20;

/* firstFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_firstFxns__C, ".const:xdc_runtime_Startup_firstFxns__C");
__FAR__ const CT__xdc_runtime_Startup_firstFxns xdc_runtime_Startup_firstFxns__C = {4, ((__T1_xdc_runtime_Startup_firstFxns const  *)xdc_runtime_Startup_firstFxns__A)};

/* lastFxns__C */
#pragma DATA_SECTION(xdc_runtime_Startup_lastFxns__C, ".const:xdc_runtime_Startup_lastFxns__C");
__FAR__ const CT__xdc_runtime_Startup_lastFxns xdc_runtime_Startup_lastFxns__C = {1, ((__T1_xdc_runtime_Startup_lastFxns const  *)xdc_runtime_Startup_lastFxns__A)};

/* startModsFxn__C */
#pragma DATA_SECTION(xdc_runtime_Startup_startModsFxn__C, ".const:xdc_runtime_Startup_startModsFxn__C");
__FAR__ const CT__xdc_runtime_Startup_startModsFxn xdc_runtime_Startup_startModsFxn__C = ((const CT__xdc_runtime_Startup_startModsFxn)(xdc_runtime_Startup_startMods__I));

/* execImpl__C */
#pragma DATA_SECTION(xdc_runtime_Startup_execImpl__C, ".const:xdc_runtime_Startup_execImpl__C");
__FAR__ const CT__xdc_runtime_Startup_execImpl xdc_runtime_Startup_execImpl__C = ((const CT__xdc_runtime_Startup_execImpl)(xdc_runtime_Startup_exec__I));

/* sfxnTab__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnTab__C, ".const:xdc_runtime_Startup_sfxnTab__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnTab xdc_runtime_Startup_sfxnTab__C = ((const CT__xdc_runtime_Startup_sfxnTab)xdc_runtime_Startup_sfxnTab__A);

/* sfxnRts__C */
#pragma DATA_SECTION(xdc_runtime_Startup_sfxnRts__C, ".const:xdc_runtime_Startup_sfxnRts__C");
__FAR__ const CT__xdc_runtime_Startup_sfxnRts xdc_runtime_Startup_sfxnRts__C = ((const CT__xdc_runtime_Startup_sfxnRts)xdc_runtime_Startup_sfxnRts__A);


/*
 * ======== xdc.runtime.SysMin INITIALIZERS ========
 */

/* --> xdc_runtime_SysMin_Module_State_0_outbuf__A */
__T1_xdc_runtime_SysMin_Module_State__outbuf xdc_runtime_SysMin_Module_State_0_outbuf__A[512];

/* Module__state__V */
#ifdef __ti__
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data:xdc_runtime_SysMin_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V __attribute__ ((section(".data_xdc_runtime_SysMin_Module__state__V")));
#endif
xdc_runtime_SysMin_Module_State__ xdc_runtime_SysMin_Module__state__V = {
    ((void*)xdc_runtime_SysMin_Module_State_0_outbuf__A),  /* outbuf */
    (xdc_UInt)0x0U,  /* outidx */
    0,  /* wrapped */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsEnabled__C, ".const:xdc_runtime_SysMin_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsEnabled xdc_runtime_SysMin_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsIncluded__C, ".const:xdc_runtime_SysMin_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsIncluded xdc_runtime_SysMin_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__diagsMask__C, ".const:xdc_runtime_SysMin_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__diagsMask xdc_runtime_SysMin_Module__diagsMask__C = ((const CT__xdc_runtime_SysMin_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gateObj__C, ".const:xdc_runtime_SysMin_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gateObj xdc_runtime_SysMin_Module__gateObj__C = ((const CT__xdc_runtime_SysMin_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__gatePrms__C, ".const:xdc_runtime_SysMin_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__gatePrms xdc_runtime_SysMin_Module__gatePrms__C = ((const CT__xdc_runtime_SysMin_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__id__C, ".const:xdc_runtime_SysMin_Module__id__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__id xdc_runtime_SysMin_Module__id__C = (xdc_Bits16)0x800eU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerDefined__C, ".const:xdc_runtime_SysMin_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerDefined xdc_runtime_SysMin_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerObj__C, ".const:xdc_runtime_SysMin_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerObj xdc_runtime_SysMin_Module__loggerObj__C = ((const CT__xdc_runtime_SysMin_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn0__C, ".const:xdc_runtime_SysMin_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn0 xdc_runtime_SysMin_Module__loggerFxn0__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn1__C, ".const:xdc_runtime_SysMin_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn1 xdc_runtime_SysMin_Module__loggerFxn1__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn2__C, ".const:xdc_runtime_SysMin_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn2 xdc_runtime_SysMin_Module__loggerFxn2__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn4__C, ".const:xdc_runtime_SysMin_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn4 xdc_runtime_SysMin_Module__loggerFxn4__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Module__loggerFxn8__C, ".const:xdc_runtime_SysMin_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_SysMin_Module__loggerFxn8 xdc_runtime_SysMin_Module__loggerFxn8__C = ((const CT__xdc_runtime_SysMin_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__count__C, ".const:xdc_runtime_SysMin_Object__count__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__count xdc_runtime_SysMin_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__heap__C, ".const:xdc_runtime_SysMin_Object__heap__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__heap xdc_runtime_SysMin_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__sizeof__C, ".const:xdc_runtime_SysMin_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__sizeof xdc_runtime_SysMin_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_Object__table__C, ".const:xdc_runtime_SysMin_Object__table__C");
__FAR__ const CT__xdc_runtime_SysMin_Object__table xdc_runtime_SysMin_Object__table__C = NULL;

/* bufSize__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_bufSize__C, ".const:xdc_runtime_SysMin_bufSize__C");
__FAR__ const CT__xdc_runtime_SysMin_bufSize xdc_runtime_SysMin_bufSize__C = (xdc_SizeT)0x200;

/* flushAtExit__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_flushAtExit__C, ".const:xdc_runtime_SysMin_flushAtExit__C");
__FAR__ const CT__xdc_runtime_SysMin_flushAtExit xdc_runtime_SysMin_flushAtExit__C = 1;

/* outputFxn__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFxn__C, ".const:xdc_runtime_SysMin_outputFxn__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFxn xdc_runtime_SysMin_outputFxn__C = ((const CT__xdc_runtime_SysMin_outputFxn)NULL);

/* outputFunc__C */
#pragma DATA_SECTION(xdc_runtime_SysMin_outputFunc__C, ".const:xdc_runtime_SysMin_outputFunc__C");
__FAR__ const CT__xdc_runtime_SysMin_outputFunc xdc_runtime_SysMin_outputFunc__C = ((const CT__xdc_runtime_SysMin_outputFunc)(xdc_runtime_SysMin_output__I));


/*
 * ======== xdc.runtime.System INITIALIZERS ========
 */

/* --> xdc_runtime_System_Module_State_0_atexitHandlers__A */
__T1_xdc_runtime_System_Module_State__atexitHandlers xdc_runtime_System_Module_State_0_atexitHandlers__A[2] = {
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [0] */
    ((xdc_Void(*)(xdc_Int f_arg0))NULL),  /* [1] */
};

/* Module__state__V */
#ifdef __ti__
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data:xdc_runtime_System_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V __attribute__ ((section(".data_xdc_runtime_System_Module__state__V")));
#endif
xdc_runtime_System_Module_State__ xdc_runtime_System_Module__state__V = {
    ((void*)xdc_runtime_System_Module_State_0_atexitHandlers__A),  /* atexitHandlers */
    (xdc_Int)0x0,  /* numAtexitHandlers */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsEnabled__C, ".const:xdc_runtime_System_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsEnabled xdc_runtime_System_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsIncluded__C, ".const:xdc_runtime_System_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsIncluded xdc_runtime_System_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__diagsMask__C, ".const:xdc_runtime_System_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_System_Module__diagsMask xdc_runtime_System_Module__diagsMask__C = ((const CT__xdc_runtime_System_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gateObj__C, ".const:xdc_runtime_System_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_System_Module__gateObj xdc_runtime_System_Module__gateObj__C = ((const CT__xdc_runtime_System_Module__gateObj)((void*)(xdc_runtime_IGateProvider_Handle)&ti_sysbios_gates_GateHwi_Object__table__V[0]));

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__gatePrms__C, ".const:xdc_runtime_System_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_System_Module__gatePrms xdc_runtime_System_Module__gatePrms__C = ((const CT__xdc_runtime_System_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__id__C, ".const:xdc_runtime_System_Module__id__C");
__FAR__ const CT__xdc_runtime_System_Module__id xdc_runtime_System_Module__id__C = (xdc_Bits16)0x800dU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerDefined__C, ".const:xdc_runtime_System_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerDefined xdc_runtime_System_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerObj__C, ".const:xdc_runtime_System_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerObj xdc_runtime_System_Module__loggerObj__C = ((const CT__xdc_runtime_System_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn0__C, ".const:xdc_runtime_System_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn0 xdc_runtime_System_Module__loggerFxn0__C = ((const CT__xdc_runtime_System_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn1__C, ".const:xdc_runtime_System_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn1 xdc_runtime_System_Module__loggerFxn1__C = ((const CT__xdc_runtime_System_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn2__C, ".const:xdc_runtime_System_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn2 xdc_runtime_System_Module__loggerFxn2__C = ((const CT__xdc_runtime_System_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn4__C, ".const:xdc_runtime_System_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn4 xdc_runtime_System_Module__loggerFxn4__C = ((const CT__xdc_runtime_System_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_System_Module__loggerFxn8__C, ".const:xdc_runtime_System_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_System_Module__loggerFxn8 xdc_runtime_System_Module__loggerFxn8__C = ((const CT__xdc_runtime_System_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__count__C, ".const:xdc_runtime_System_Object__count__C");
__FAR__ const CT__xdc_runtime_System_Object__count xdc_runtime_System_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__heap__C, ".const:xdc_runtime_System_Object__heap__C");
__FAR__ const CT__xdc_runtime_System_Object__heap xdc_runtime_System_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__sizeof__C, ".const:xdc_runtime_System_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_System_Object__sizeof xdc_runtime_System_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_System_Object__table__C, ".const:xdc_runtime_System_Object__table__C");
__FAR__ const CT__xdc_runtime_System_Object__table xdc_runtime_System_Object__table__C = NULL;

/* A_cannotFitIntoArg__C */
#pragma DATA_SECTION(xdc_runtime_System_A_cannotFitIntoArg__C, ".const:xdc_runtime_System_A_cannotFitIntoArg__C");
__FAR__ const CT__xdc_runtime_System_A_cannotFitIntoArg xdc_runtime_System_A_cannotFitIntoArg__C = (((xdc_runtime_Assert_Id)352) << 16 | 16);

/* maxAtexitHandlers__C */
#pragma DATA_SECTION(xdc_runtime_System_maxAtexitHandlers__C, ".const:xdc_runtime_System_maxAtexitHandlers__C");
__FAR__ const CT__xdc_runtime_System_maxAtexitHandlers xdc_runtime_System_maxAtexitHandlers__C = (xdc_Int)0x2;

/* abortFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_abortFxn__C, ".const:xdc_runtime_System_abortFxn__C");
__FAR__ const CT__xdc_runtime_System_abortFxn xdc_runtime_System_abortFxn__C = ((const CT__xdc_runtime_System_abortFxn)(xdc_runtime_System_abortStd__E));

/* exitFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_exitFxn__C, ".const:xdc_runtime_System_exitFxn__C");
__FAR__ const CT__xdc_runtime_System_exitFxn xdc_runtime_System_exitFxn__C = ((const CT__xdc_runtime_System_exitFxn)(xdc_runtime_System_exitStd__E));

/* extendFxn__C */
#pragma DATA_SECTION(xdc_runtime_System_extendFxn__C, ".const:xdc_runtime_System_extendFxn__C");
__FAR__ const CT__xdc_runtime_System_extendFxn xdc_runtime_System_extendFxn__C = ((const CT__xdc_runtime_System_extendFxn)(xdc_runtime_System_printfExtend__I));


/*
 * ======== xdc.runtime.System_Module_GateProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.System_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Text INITIALIZERS ========
 */

/* Module__state__V */
#ifdef __ti__
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data:xdc_runtime_Text_Module__state__V")));
#elif !(defined(__MACH__) && defined(__APPLE__))
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V __attribute__ ((section(".data_xdc_runtime_Text_Module__state__V")));
#endif
xdc_runtime_Text_Module_State__ xdc_runtime_Text_Module__state__V = {
    ((xdc_CPtr)(&xdc_runtime_Text_charTab__A[0])),  /* charBase */
    ((xdc_CPtr)(&xdc_runtime_Text_nodeTab__A[0])),  /* nodeBase */
};

/* --> xdc_runtime_Text_charTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__A, ".const:xdc_runtime_Text_charTab__A");
const __T1_xdc_runtime_Text_charTab xdc_runtime_Text_charTab__A[8169] = {
    (xdc_Char)0x0,  /* [0] */
    (xdc_Char)0x41,  /* [1] */
    (xdc_Char)0x5f,  /* [2] */
    (xdc_Char)0x69,  /* [3] */
    (xdc_Char)0x6e,  /* [4] */
    (xdc_Char)0x69,  /* [5] */
    (xdc_Char)0x74,  /* [6] */
    (xdc_Char)0x69,  /* [7] */
    (xdc_Char)0x61,  /* [8] */
    (xdc_Char)0x6c,  /* [9] */
    (xdc_Char)0x69,  /* [10] */
    (xdc_Char)0x7a,  /* [11] */
    (xdc_Char)0x65,  /* [12] */
    (xdc_Char)0x64,  /* [13] */
    (xdc_Char)0x50,  /* [14] */
    (xdc_Char)0x61,  /* [15] */
    (xdc_Char)0x72,  /* [16] */
    (xdc_Char)0x61,  /* [17] */
    (xdc_Char)0x6d,  /* [18] */
    (xdc_Char)0x73,  /* [19] */
    (xdc_Char)0x3a,  /* [20] */
    (xdc_Char)0x20,  /* [21] */
    (xdc_Char)0x75,  /* [22] */
    (xdc_Char)0x6e,  /* [23] */
    (xdc_Char)0x69,  /* [24] */
    (xdc_Char)0x6e,  /* [25] */
    (xdc_Char)0x69,  /* [26] */
    (xdc_Char)0x74,  /* [27] */
    (xdc_Char)0x69,  /* [28] */
    (xdc_Char)0x61,  /* [29] */
    (xdc_Char)0x6c,  /* [30] */
    (xdc_Char)0x69,  /* [31] */
    (xdc_Char)0x7a,  /* [32] */
    (xdc_Char)0x65,  /* [33] */
    (xdc_Char)0x64,  /* [34] */
    (xdc_Char)0x20,  /* [35] */
    (xdc_Char)0x50,  /* [36] */
    (xdc_Char)0x61,  /* [37] */
    (xdc_Char)0x72,  /* [38] */
    (xdc_Char)0x61,  /* [39] */
    (xdc_Char)0x6d,  /* [40] */
    (xdc_Char)0x73,  /* [41] */
    (xdc_Char)0x20,  /* [42] */
    (xdc_Char)0x73,  /* [43] */
    (xdc_Char)0x74,  /* [44] */
    (xdc_Char)0x72,  /* [45] */
    (xdc_Char)0x75,  /* [46] */
    (xdc_Char)0x63,  /* [47] */
    (xdc_Char)0x74,  /* [48] */
    (xdc_Char)0x0,  /* [49] */
    (xdc_Char)0x48,  /* [50] */
    (xdc_Char)0x65,  /* [51] */
    (xdc_Char)0x61,  /* [52] */
    (xdc_Char)0x70,  /* [53] */
    (xdc_Char)0x4d,  /* [54] */
    (xdc_Char)0x69,  /* [55] */
    (xdc_Char)0x6e,  /* [56] */
    (xdc_Char)0x5f,  /* [57] */
    (xdc_Char)0x63,  /* [58] */
    (xdc_Char)0x72,  /* [59] */
    (xdc_Char)0x65,  /* [60] */
    (xdc_Char)0x61,  /* [61] */
    (xdc_Char)0x74,  /* [62] */
    (xdc_Char)0x65,  /* [63] */
    (xdc_Char)0x20,  /* [64] */
    (xdc_Char)0x63,  /* [65] */
    (xdc_Char)0x61,  /* [66] */
    (xdc_Char)0x6e,  /* [67] */
    (xdc_Char)0x6e,  /* [68] */
    (xdc_Char)0x6f,  /* [69] */
    (xdc_Char)0x74,  /* [70] */
    (xdc_Char)0x20,  /* [71] */
    (xdc_Char)0x68,  /* [72] */
    (xdc_Char)0x61,  /* [73] */
    (xdc_Char)0x76,  /* [74] */
    (xdc_Char)0x65,  /* [75] */
    (xdc_Char)0x20,  /* [76] */
    (xdc_Char)0x61,  /* [77] */
    (xdc_Char)0x20,  /* [78] */
    (xdc_Char)0x7a,  /* [79] */
    (xdc_Char)0x65,  /* [80] */
    (xdc_Char)0x72,  /* [81] */
    (xdc_Char)0x6f,  /* [82] */
    (xdc_Char)0x20,  /* [83] */
    (xdc_Char)0x73,  /* [84] */
    (xdc_Char)0x69,  /* [85] */
    (xdc_Char)0x7a,  /* [86] */
    (xdc_Char)0x65,  /* [87] */
    (xdc_Char)0x20,  /* [88] */
    (xdc_Char)0x76,  /* [89] */
    (xdc_Char)0x61,  /* [90] */
    (xdc_Char)0x6c,  /* [91] */
    (xdc_Char)0x75,  /* [92] */
    (xdc_Char)0x65,  /* [93] */
    (xdc_Char)0x0,  /* [94] */
    (xdc_Char)0x48,  /* [95] */
    (xdc_Char)0x65,  /* [96] */
    (xdc_Char)0x61,  /* [97] */
    (xdc_Char)0x70,  /* [98] */
    (xdc_Char)0x53,  /* [99] */
    (xdc_Char)0x74,  /* [100] */
    (xdc_Char)0x64,  /* [101] */
    (xdc_Char)0x5f,  /* [102] */
    (xdc_Char)0x63,  /* [103] */
    (xdc_Char)0x72,  /* [104] */
    (xdc_Char)0x65,  /* [105] */
    (xdc_Char)0x61,  /* [106] */
    (xdc_Char)0x74,  /* [107] */
    (xdc_Char)0x65,  /* [108] */
    (xdc_Char)0x20,  /* [109] */
    (xdc_Char)0x63,  /* [110] */
    (xdc_Char)0x61,  /* [111] */
    (xdc_Char)0x6e,  /* [112] */
    (xdc_Char)0x6e,  /* [113] */
    (xdc_Char)0x6f,  /* [114] */
    (xdc_Char)0x74,  /* [115] */
    (xdc_Char)0x20,  /* [116] */
    (xdc_Char)0x68,  /* [117] */
    (xdc_Char)0x61,  /* [118] */
    (xdc_Char)0x76,  /* [119] */
    (xdc_Char)0x65,  /* [120] */
    (xdc_Char)0x20,  /* [121] */
    (xdc_Char)0x61,  /* [122] */
    (xdc_Char)0x20,  /* [123] */
    (xdc_Char)0x7a,  /* [124] */
    (xdc_Char)0x65,  /* [125] */
    (xdc_Char)0x72,  /* [126] */
    (xdc_Char)0x6f,  /* [127] */
    (xdc_Char)0x20,  /* [128] */
    (xdc_Char)0x73,  /* [129] */
    (xdc_Char)0x69,  /* [130] */
    (xdc_Char)0x7a,  /* [131] */
    (xdc_Char)0x65,  /* [132] */
    (xdc_Char)0x20,  /* [133] */
    (xdc_Char)0x76,  /* [134] */
    (xdc_Char)0x61,  /* [135] */
    (xdc_Char)0x6c,  /* [136] */
    (xdc_Char)0x75,  /* [137] */
    (xdc_Char)0x65,  /* [138] */
    (xdc_Char)0x0,  /* [139] */
    (xdc_Char)0x48,  /* [140] */
    (xdc_Char)0x65,  /* [141] */
    (xdc_Char)0x61,  /* [142] */
    (xdc_Char)0x70,  /* [143] */
    (xdc_Char)0x53,  /* [144] */
    (xdc_Char)0x74,  /* [145] */
    (xdc_Char)0x64,  /* [146] */
    (xdc_Char)0x5f,  /* [147] */
    (xdc_Char)0x61,  /* [148] */
    (xdc_Char)0x6c,  /* [149] */
    (xdc_Char)0x6c,  /* [150] */
    (xdc_Char)0x6f,  /* [151] */
    (xdc_Char)0x63,  /* [152] */
    (xdc_Char)0x20,  /* [153] */
    (xdc_Char)0x61,  /* [154] */
    (xdc_Char)0x6c,  /* [155] */
    (xdc_Char)0x69,  /* [156] */
    (xdc_Char)0x67,  /* [157] */
    (xdc_Char)0x6e,  /* [158] */
    (xdc_Char)0x6d,  /* [159] */
    (xdc_Char)0x65,  /* [160] */
    (xdc_Char)0x6e,  /* [161] */
    (xdc_Char)0x74,  /* [162] */
    (xdc_Char)0x20,  /* [163] */
    (xdc_Char)0x6d,  /* [164] */
    (xdc_Char)0x75,  /* [165] */
    (xdc_Char)0x73,  /* [166] */
    (xdc_Char)0x74,  /* [167] */
    (xdc_Char)0x20,  /* [168] */
    (xdc_Char)0x62,  /* [169] */
    (xdc_Char)0x65,  /* [170] */
    (xdc_Char)0x20,  /* [171] */
    (xdc_Char)0x61,  /* [172] */
    (xdc_Char)0x20,  /* [173] */
    (xdc_Char)0x70,  /* [174] */
    (xdc_Char)0x6f,  /* [175] */
    (xdc_Char)0x77,  /* [176] */
    (xdc_Char)0x65,  /* [177] */
    (xdc_Char)0x72,  /* [178] */
    (xdc_Char)0x20,  /* [179] */
    (xdc_Char)0x6f,  /* [180] */
    (xdc_Char)0x66,  /* [181] */
    (xdc_Char)0x20,  /* [182] */
    (xdc_Char)0x32,  /* [183] */
    (xdc_Char)0x0,  /* [184] */
    (xdc_Char)0x48,  /* [185] */
    (xdc_Char)0x65,  /* [186] */
    (xdc_Char)0x61,  /* [187] */
    (xdc_Char)0x70,  /* [188] */
    (xdc_Char)0x53,  /* [189] */
    (xdc_Char)0x74,  /* [190] */
    (xdc_Char)0x64,  /* [191] */
    (xdc_Char)0x20,  /* [192] */
    (xdc_Char)0x69,  /* [193] */
    (xdc_Char)0x6e,  /* [194] */
    (xdc_Char)0x73,  /* [195] */
    (xdc_Char)0x74,  /* [196] */
    (xdc_Char)0x61,  /* [197] */
    (xdc_Char)0x6e,  /* [198] */
    (xdc_Char)0x63,  /* [199] */
    (xdc_Char)0x65,  /* [200] */
    (xdc_Char)0x20,  /* [201] */
    (xdc_Char)0x74,  /* [202] */
    (xdc_Char)0x6f,  /* [203] */
    (xdc_Char)0x74,  /* [204] */
    (xdc_Char)0x61,  /* [205] */
    (xdc_Char)0x6c,  /* [206] */
    (xdc_Char)0x46,  /* [207] */
    (xdc_Char)0x72,  /* [208] */
    (xdc_Char)0x65,  /* [209] */
    (xdc_Char)0x65,  /* [210] */
    (xdc_Char)0x53,  /* [211] */
    (xdc_Char)0x69,  /* [212] */
    (xdc_Char)0x7a,  /* [213] */
    (xdc_Char)0x65,  /* [214] */
    (xdc_Char)0x20,  /* [215] */
    (xdc_Char)0x69,  /* [216] */
    (xdc_Char)0x73,  /* [217] */
    (xdc_Char)0x20,  /* [218] */
    (xdc_Char)0x67,  /* [219] */
    (xdc_Char)0x72,  /* [220] */
    (xdc_Char)0x65,  /* [221] */
    (xdc_Char)0x61,  /* [222] */
    (xdc_Char)0x74,  /* [223] */
    (xdc_Char)0x65,  /* [224] */
    (xdc_Char)0x72,  /* [225] */
    (xdc_Char)0x20,  /* [226] */
    (xdc_Char)0x74,  /* [227] */
    (xdc_Char)0x68,  /* [228] */
    (xdc_Char)0x61,  /* [229] */
    (xdc_Char)0x6e,  /* [230] */
    (xdc_Char)0x20,  /* [231] */
    (xdc_Char)0x73,  /* [232] */
    (xdc_Char)0x74,  /* [233] */
    (xdc_Char)0x61,  /* [234] */
    (xdc_Char)0x72,  /* [235] */
    (xdc_Char)0x74,  /* [236] */
    (xdc_Char)0x69,  /* [237] */
    (xdc_Char)0x6e,  /* [238] */
    (xdc_Char)0x67,  /* [239] */
    (xdc_Char)0x20,  /* [240] */
    (xdc_Char)0x73,  /* [241] */
    (xdc_Char)0x69,  /* [242] */
    (xdc_Char)0x7a,  /* [243] */
    (xdc_Char)0x65,  /* [244] */
    (xdc_Char)0x0,  /* [245] */
    (xdc_Char)0x48,  /* [246] */
    (xdc_Char)0x65,  /* [247] */
    (xdc_Char)0x61,  /* [248] */
    (xdc_Char)0x70,  /* [249] */
    (xdc_Char)0x53,  /* [250] */
    (xdc_Char)0x74,  /* [251] */
    (xdc_Char)0x64,  /* [252] */
    (xdc_Char)0x5f,  /* [253] */
    (xdc_Char)0x61,  /* [254] */
    (xdc_Char)0x6c,  /* [255] */
    (xdc_Char)0x6c,  /* [256] */
    (xdc_Char)0x6f,  /* [257] */
    (xdc_Char)0x63,  /* [258] */
    (xdc_Char)0x20,  /* [259] */
    (xdc_Char)0x2d,  /* [260] */
    (xdc_Char)0x20,  /* [261] */
    (xdc_Char)0x72,  /* [262] */
    (xdc_Char)0x65,  /* [263] */
    (xdc_Char)0x71,  /* [264] */
    (xdc_Char)0x75,  /* [265] */
    (xdc_Char)0x65,  /* [266] */
    (xdc_Char)0x73,  /* [267] */
    (xdc_Char)0x74,  /* [268] */
    (xdc_Char)0x65,  /* [269] */
    (xdc_Char)0x64,  /* [270] */
    (xdc_Char)0x20,  /* [271] */
    (xdc_Char)0x61,  /* [272] */
    (xdc_Char)0x6c,  /* [273] */
    (xdc_Char)0x69,  /* [274] */
    (xdc_Char)0x67,  /* [275] */
    (xdc_Char)0x6e,  /* [276] */
    (xdc_Char)0x6d,  /* [277] */
    (xdc_Char)0x65,  /* [278] */
    (xdc_Char)0x6e,  /* [279] */
    (xdc_Char)0x74,  /* [280] */
    (xdc_Char)0x20,  /* [281] */
    (xdc_Char)0x69,  /* [282] */
    (xdc_Char)0x73,  /* [283] */
    (xdc_Char)0x20,  /* [284] */
    (xdc_Char)0x67,  /* [285] */
    (xdc_Char)0x72,  /* [286] */
    (xdc_Char)0x65,  /* [287] */
    (xdc_Char)0x61,  /* [288] */
    (xdc_Char)0x74,  /* [289] */
    (xdc_Char)0x65,  /* [290] */
    (xdc_Char)0x72,  /* [291] */
    (xdc_Char)0x20,  /* [292] */
    (xdc_Char)0x74,  /* [293] */
    (xdc_Char)0x68,  /* [294] */
    (xdc_Char)0x61,  /* [295] */
    (xdc_Char)0x6e,  /* [296] */
    (xdc_Char)0x20,  /* [297] */
    (xdc_Char)0x61,  /* [298] */
    (xdc_Char)0x6c,  /* [299] */
    (xdc_Char)0x6c,  /* [300] */
    (xdc_Char)0x6f,  /* [301] */
    (xdc_Char)0x77,  /* [302] */
    (xdc_Char)0x65,  /* [303] */
    (xdc_Char)0x64,  /* [304] */
    (xdc_Char)0x0,  /* [305] */
    (xdc_Char)0x41,  /* [306] */
    (xdc_Char)0x5f,  /* [307] */
    (xdc_Char)0x69,  /* [308] */
    (xdc_Char)0x6e,  /* [309] */
    (xdc_Char)0x76,  /* [310] */
    (xdc_Char)0x61,  /* [311] */
    (xdc_Char)0x6c,  /* [312] */
    (xdc_Char)0x69,  /* [313] */
    (xdc_Char)0x64,  /* [314] */
    (xdc_Char)0x4c,  /* [315] */
    (xdc_Char)0x6f,  /* [316] */
    (xdc_Char)0x67,  /* [317] */
    (xdc_Char)0x67,  /* [318] */
    (xdc_Char)0x65,  /* [319] */
    (xdc_Char)0x72,  /* [320] */
    (xdc_Char)0x3a,  /* [321] */
    (xdc_Char)0x20,  /* [322] */
    (xdc_Char)0x54,  /* [323] */
    (xdc_Char)0x68,  /* [324] */
    (xdc_Char)0x65,  /* [325] */
    (xdc_Char)0x20,  /* [326] */
    (xdc_Char)0x6c,  /* [327] */
    (xdc_Char)0x6f,  /* [328] */
    (xdc_Char)0x67,  /* [329] */
    (xdc_Char)0x67,  /* [330] */
    (xdc_Char)0x65,  /* [331] */
    (xdc_Char)0x72,  /* [332] */
    (xdc_Char)0x20,  /* [333] */
    (xdc_Char)0x69,  /* [334] */
    (xdc_Char)0x64,  /* [335] */
    (xdc_Char)0x20,  /* [336] */
    (xdc_Char)0x25,  /* [337] */
    (xdc_Char)0x64,  /* [338] */
    (xdc_Char)0x20,  /* [339] */
    (xdc_Char)0x69,  /* [340] */
    (xdc_Char)0x73,  /* [341] */
    (xdc_Char)0x20,  /* [342] */
    (xdc_Char)0x69,  /* [343] */
    (xdc_Char)0x6e,  /* [344] */
    (xdc_Char)0x76,  /* [345] */
    (xdc_Char)0x61,  /* [346] */
    (xdc_Char)0x6c,  /* [347] */
    (xdc_Char)0x69,  /* [348] */
    (xdc_Char)0x64,  /* [349] */
    (xdc_Char)0x2e,  /* [350] */
    (xdc_Char)0x0,  /* [351] */
    (xdc_Char)0x41,  /* [352] */
    (xdc_Char)0x5f,  /* [353] */
    (xdc_Char)0x63,  /* [354] */
    (xdc_Char)0x61,  /* [355] */
    (xdc_Char)0x6e,  /* [356] */
    (xdc_Char)0x6e,  /* [357] */
    (xdc_Char)0x6f,  /* [358] */
    (xdc_Char)0x74,  /* [359] */
    (xdc_Char)0x46,  /* [360] */
    (xdc_Char)0x69,  /* [361] */
    (xdc_Char)0x74,  /* [362] */
    (xdc_Char)0x49,  /* [363] */
    (xdc_Char)0x6e,  /* [364] */
    (xdc_Char)0x74,  /* [365] */
    (xdc_Char)0x6f,  /* [366] */
    (xdc_Char)0x41,  /* [367] */
    (xdc_Char)0x72,  /* [368] */
    (xdc_Char)0x67,  /* [369] */
    (xdc_Char)0x3a,  /* [370] */
    (xdc_Char)0x20,  /* [371] */
    (xdc_Char)0x73,  /* [372] */
    (xdc_Char)0x69,  /* [373] */
    (xdc_Char)0x7a,  /* [374] */
    (xdc_Char)0x65,  /* [375] */
    (xdc_Char)0x6f,  /* [376] */
    (xdc_Char)0x66,  /* [377] */
    (xdc_Char)0x28,  /* [378] */
    (xdc_Char)0x46,  /* [379] */
    (xdc_Char)0x6c,  /* [380] */
    (xdc_Char)0x6f,  /* [381] */
    (xdc_Char)0x61,  /* [382] */
    (xdc_Char)0x74,  /* [383] */
    (xdc_Char)0x29,  /* [384] */
    (xdc_Char)0x20,  /* [385] */
    (xdc_Char)0x3e,  /* [386] */
    (xdc_Char)0x20,  /* [387] */
    (xdc_Char)0x73,  /* [388] */
    (xdc_Char)0x69,  /* [389] */
    (xdc_Char)0x7a,  /* [390] */
    (xdc_Char)0x65,  /* [391] */
    (xdc_Char)0x6f,  /* [392] */
    (xdc_Char)0x66,  /* [393] */
    (xdc_Char)0x28,  /* [394] */
    (xdc_Char)0x41,  /* [395] */
    (xdc_Char)0x72,  /* [396] */
    (xdc_Char)0x67,  /* [397] */
    (xdc_Char)0x29,  /* [398] */
    (xdc_Char)0x0,  /* [399] */
    (xdc_Char)0x41,  /* [400] */
    (xdc_Char)0x5f,  /* [401] */
    (xdc_Char)0x69,  /* [402] */
    (xdc_Char)0x70,  /* [403] */
    (xdc_Char)0x63,  /* [404] */
    (xdc_Char)0x46,  /* [405] */
    (xdc_Char)0x61,  /* [406] */
    (xdc_Char)0x69,  /* [407] */
    (xdc_Char)0x6c,  /* [408] */
    (xdc_Char)0x65,  /* [409] */
    (xdc_Char)0x64,  /* [410] */
    (xdc_Char)0x3a,  /* [411] */
    (xdc_Char)0x20,  /* [412] */
    (xdc_Char)0x55,  /* [413] */
    (xdc_Char)0x6e,  /* [414] */
    (xdc_Char)0x65,  /* [415] */
    (xdc_Char)0x78,  /* [416] */
    (xdc_Char)0x70,  /* [417] */
    (xdc_Char)0x65,  /* [418] */
    (xdc_Char)0x63,  /* [419] */
    (xdc_Char)0x74,  /* [420] */
    (xdc_Char)0x65,  /* [421] */
    (xdc_Char)0x64,  /* [422] */
    (xdc_Char)0x20,  /* [423] */
    (xdc_Char)0x4d,  /* [424] */
    (xdc_Char)0x65,  /* [425] */
    (xdc_Char)0x73,  /* [426] */
    (xdc_Char)0x73,  /* [427] */
    (xdc_Char)0x61,  /* [428] */
    (xdc_Char)0x67,  /* [429] */
    (xdc_Char)0x65,  /* [430] */
    (xdc_Char)0x51,  /* [431] */
    (xdc_Char)0x20,  /* [432] */
    (xdc_Char)0x66,  /* [433] */
    (xdc_Char)0x61,  /* [434] */
    (xdc_Char)0x69,  /* [435] */
    (xdc_Char)0x6c,  /* [436] */
    (xdc_Char)0x65,  /* [437] */
    (xdc_Char)0x64,  /* [438] */
    (xdc_Char)0x0,  /* [439] */
    (xdc_Char)0x41,  /* [440] */
    (xdc_Char)0x5f,  /* [441] */
    (xdc_Char)0x69,  /* [442] */
    (xdc_Char)0x6e,  /* [443] */
    (xdc_Char)0x76,  /* [444] */
    (xdc_Char)0x61,  /* [445] */
    (xdc_Char)0x6c,  /* [446] */
    (xdc_Char)0x69,  /* [447] */
    (xdc_Char)0x64,  /* [448] */
    (xdc_Char)0x48,  /* [449] */
    (xdc_Char)0x64,  /* [450] */
    (xdc_Char)0x72,  /* [451] */
    (xdc_Char)0x54,  /* [452] */
    (xdc_Char)0x79,  /* [453] */
    (xdc_Char)0x70,  /* [454] */
    (xdc_Char)0x65,  /* [455] */
    (xdc_Char)0x3a,  /* [456] */
    (xdc_Char)0x20,  /* [457] */
    (xdc_Char)0x49,  /* [458] */
    (xdc_Char)0x6e,  /* [459] */
    (xdc_Char)0x76,  /* [460] */
    (xdc_Char)0x61,  /* [461] */
    (xdc_Char)0x6c,  /* [462] */
    (xdc_Char)0x69,  /* [463] */
    (xdc_Char)0x64,  /* [464] */
    (xdc_Char)0x20,  /* [465] */
    (xdc_Char)0x48,  /* [466] */
    (xdc_Char)0x64,  /* [467] */
    (xdc_Char)0x72,  /* [468] */
    (xdc_Char)0x54,  /* [469] */
    (xdc_Char)0x79,  /* [470] */
    (xdc_Char)0x70,  /* [471] */
    (xdc_Char)0x65,  /* [472] */
    (xdc_Char)0x20,  /* [473] */
    (xdc_Char)0x73,  /* [474] */
    (xdc_Char)0x70,  /* [475] */
    (xdc_Char)0x65,  /* [476] */
    (xdc_Char)0x63,  /* [477] */
    (xdc_Char)0x69,  /* [478] */
    (xdc_Char)0x66,  /* [479] */
    (xdc_Char)0x69,  /* [480] */
    (xdc_Char)0x65,  /* [481] */
    (xdc_Char)0x64,  /* [482] */
    (xdc_Char)0x0,  /* [483] */
    (xdc_Char)0x41,  /* [484] */
    (xdc_Char)0x5f,  /* [485] */
    (xdc_Char)0x69,  /* [486] */
    (xdc_Char)0x6e,  /* [487] */
    (xdc_Char)0x76,  /* [488] */
    (xdc_Char)0x61,  /* [489] */
    (xdc_Char)0x6c,  /* [490] */
    (xdc_Char)0x69,  /* [491] */
    (xdc_Char)0x64,  /* [492] */
    (xdc_Char)0x53,  /* [493] */
    (xdc_Char)0x65,  /* [494] */
    (xdc_Char)0x72,  /* [495] */
    (xdc_Char)0x76,  /* [496] */
    (xdc_Char)0x69,  /* [497] */
    (xdc_Char)0x63,  /* [498] */
    (xdc_Char)0x65,  /* [499] */
    (xdc_Char)0x49,  /* [500] */
    (xdc_Char)0x64,  /* [501] */
    (xdc_Char)0x3a,  /* [502] */
    (xdc_Char)0x20,  /* [503] */
    (xdc_Char)0x53,  /* [504] */
    (xdc_Char)0x65,  /* [505] */
    (xdc_Char)0x72,  /* [506] */
    (xdc_Char)0x76,  /* [507] */
    (xdc_Char)0x69,  /* [508] */
    (xdc_Char)0x63,  /* [509] */
    (xdc_Char)0x65,  /* [510] */
    (xdc_Char)0x49,  /* [511] */
    (xdc_Char)0x64,  /* [512] */
    (xdc_Char)0x20,  /* [513] */
    (xdc_Char)0x6f,  /* [514] */
    (xdc_Char)0x75,  /* [515] */
    (xdc_Char)0x74,  /* [516] */
    (xdc_Char)0x20,  /* [517] */
    (xdc_Char)0x6f,  /* [518] */
    (xdc_Char)0x66,  /* [519] */
    (xdc_Char)0x20,  /* [520] */
    (xdc_Char)0x72,  /* [521] */
    (xdc_Char)0x61,  /* [522] */
    (xdc_Char)0x6e,  /* [523] */
    (xdc_Char)0x67,  /* [524] */
    (xdc_Char)0x65,  /* [525] */
    (xdc_Char)0x0,  /* [526] */
    (xdc_Char)0x41,  /* [527] */
    (xdc_Char)0x5f,  /* [528] */
    (xdc_Char)0x69,  /* [529] */
    (xdc_Char)0x6e,  /* [530] */
    (xdc_Char)0x76,  /* [531] */
    (xdc_Char)0x61,  /* [532] */
    (xdc_Char)0x6c,  /* [533] */
    (xdc_Char)0x69,  /* [534] */
    (xdc_Char)0x64,  /* [535] */
    (xdc_Char)0x50,  /* [536] */
    (xdc_Char)0x72,  /* [537] */
    (xdc_Char)0x6f,  /* [538] */
    (xdc_Char)0x63,  /* [539] */
    (xdc_Char)0x65,  /* [540] */
    (xdc_Char)0x73,  /* [541] */
    (xdc_Char)0x73,  /* [542] */
    (xdc_Char)0x43,  /* [543] */
    (xdc_Char)0x61,  /* [544] */
    (xdc_Char)0x6c,  /* [545] */
    (xdc_Char)0x6c,  /* [546] */
    (xdc_Char)0x62,  /* [547] */
    (xdc_Char)0x61,  /* [548] */
    (xdc_Char)0x63,  /* [549] */
    (xdc_Char)0x6b,  /* [550] */
    (xdc_Char)0x46,  /* [551] */
    (xdc_Char)0x78,  /* [552] */
    (xdc_Char)0x6e,  /* [553] */
    (xdc_Char)0x3a,  /* [554] */
    (xdc_Char)0x20,  /* [555] */
    (xdc_Char)0x43,  /* [556] */
    (xdc_Char)0x61,  /* [557] */
    (xdc_Char)0x6c,  /* [558] */
    (xdc_Char)0x6c,  /* [559] */
    (xdc_Char)0x62,  /* [560] */
    (xdc_Char)0x61,  /* [561] */
    (xdc_Char)0x63,  /* [562] */
    (xdc_Char)0x6b,  /* [563] */
    (xdc_Char)0x20,  /* [564] */
    (xdc_Char)0x63,  /* [565] */
    (xdc_Char)0x61,  /* [566] */
    (xdc_Char)0x6e,  /* [567] */
    (xdc_Char)0x6e,  /* [568] */
    (xdc_Char)0x6f,  /* [569] */
    (xdc_Char)0x74,  /* [570] */
    (xdc_Char)0x20,  /* [571] */
    (xdc_Char)0x62,  /* [572] */
    (xdc_Char)0x65,  /* [573] */
    (xdc_Char)0x20,  /* [574] */
    (xdc_Char)0x4e,  /* [575] */
    (xdc_Char)0x55,  /* [576] */
    (xdc_Char)0x4c,  /* [577] */
    (xdc_Char)0x4c,  /* [578] */
    (xdc_Char)0x0,  /* [579] */
    (xdc_Char)0x41,  /* [580] */
    (xdc_Char)0x5f,  /* [581] */
    (xdc_Char)0x6e,  /* [582] */
    (xdc_Char)0x75,  /* [583] */
    (xdc_Char)0x6c,  /* [584] */
    (xdc_Char)0x6c,  /* [585] */
    (xdc_Char)0x50,  /* [586] */
    (xdc_Char)0x6f,  /* [587] */
    (xdc_Char)0x69,  /* [588] */
    (xdc_Char)0x6e,  /* [589] */
    (xdc_Char)0x74,  /* [590] */
    (xdc_Char)0x65,  /* [591] */
    (xdc_Char)0x72,  /* [592] */
    (xdc_Char)0x3a,  /* [593] */
    (xdc_Char)0x20,  /* [594] */
    (xdc_Char)0x50,  /* [595] */
    (xdc_Char)0x6f,  /* [596] */
    (xdc_Char)0x69,  /* [597] */
    (xdc_Char)0x6e,  /* [598] */
    (xdc_Char)0x74,  /* [599] */
    (xdc_Char)0x65,  /* [600] */
    (xdc_Char)0x72,  /* [601] */
    (xdc_Char)0x20,  /* [602] */
    (xdc_Char)0x69,  /* [603] */
    (xdc_Char)0x73,  /* [604] */
    (xdc_Char)0x20,  /* [605] */
    (xdc_Char)0x6e,  /* [606] */
    (xdc_Char)0x75,  /* [607] */
    (xdc_Char)0x6c,  /* [608] */
    (xdc_Char)0x6c,  /* [609] */
    (xdc_Char)0x0,  /* [610] */
    (xdc_Char)0x41,  /* [611] */
    (xdc_Char)0x5f,  /* [612] */
    (xdc_Char)0x69,  /* [613] */
    (xdc_Char)0x6e,  /* [614] */
    (xdc_Char)0x76,  /* [615] */
    (xdc_Char)0x61,  /* [616] */
    (xdc_Char)0x6c,  /* [617] */
    (xdc_Char)0x69,  /* [618] */
    (xdc_Char)0x64,  /* [619] */
    (xdc_Char)0x52,  /* [620] */
    (xdc_Char)0x65,  /* [621] */
    (xdc_Char)0x67,  /* [622] */
    (xdc_Char)0x69,  /* [623] */
    (xdc_Char)0x6f,  /* [624] */
    (xdc_Char)0x6e,  /* [625] */
    (xdc_Char)0x49,  /* [626] */
    (xdc_Char)0x64,  /* [627] */
    (xdc_Char)0x3a,  /* [628] */
    (xdc_Char)0x20,  /* [629] */
    (xdc_Char)0x4d,  /* [630] */
    (xdc_Char)0x50,  /* [631] */
    (xdc_Char)0x55,  /* [632] */
    (xdc_Char)0x20,  /* [633] */
    (xdc_Char)0x52,  /* [634] */
    (xdc_Char)0x65,  /* [635] */
    (xdc_Char)0x67,  /* [636] */
    (xdc_Char)0x69,  /* [637] */
    (xdc_Char)0x6f,  /* [638] */
    (xdc_Char)0x6e,  /* [639] */
    (xdc_Char)0x20,  /* [640] */
    (xdc_Char)0x6e,  /* [641] */
    (xdc_Char)0x75,  /* [642] */
    (xdc_Char)0x6d,  /* [643] */
    (xdc_Char)0x62,  /* [644] */
    (xdc_Char)0x65,  /* [645] */
    (xdc_Char)0x72,  /* [646] */
    (xdc_Char)0x20,  /* [647] */
    (xdc_Char)0x70,  /* [648] */
    (xdc_Char)0x61,  /* [649] */
    (xdc_Char)0x73,  /* [650] */
    (xdc_Char)0x73,  /* [651] */
    (xdc_Char)0x65,  /* [652] */
    (xdc_Char)0x64,  /* [653] */
    (xdc_Char)0x20,  /* [654] */
    (xdc_Char)0x69,  /* [655] */
    (xdc_Char)0x73,  /* [656] */
    (xdc_Char)0x20,  /* [657] */
    (xdc_Char)0x69,  /* [658] */
    (xdc_Char)0x6e,  /* [659] */
    (xdc_Char)0x76,  /* [660] */
    (xdc_Char)0x61,  /* [661] */
    (xdc_Char)0x6c,  /* [662] */
    (xdc_Char)0x69,  /* [663] */
    (xdc_Char)0x64,  /* [664] */
    (xdc_Char)0x2e,  /* [665] */
    (xdc_Char)0x0,  /* [666] */
    (xdc_Char)0x41,  /* [667] */
    (xdc_Char)0x5f,  /* [668] */
    (xdc_Char)0x75,  /* [669] */
    (xdc_Char)0x6e,  /* [670] */
    (xdc_Char)0x61,  /* [671] */
    (xdc_Char)0x6c,  /* [672] */
    (xdc_Char)0x69,  /* [673] */
    (xdc_Char)0x67,  /* [674] */
    (xdc_Char)0x6e,  /* [675] */
    (xdc_Char)0x65,  /* [676] */
    (xdc_Char)0x64,  /* [677] */
    (xdc_Char)0x42,  /* [678] */
    (xdc_Char)0x61,  /* [679] */
    (xdc_Char)0x73,  /* [680] */
    (xdc_Char)0x65,  /* [681] */
    (xdc_Char)0x41,  /* [682] */
    (xdc_Char)0x64,  /* [683] */
    (xdc_Char)0x64,  /* [684] */
    (xdc_Char)0x72,  /* [685] */
    (xdc_Char)0x3a,  /* [686] */
    (xdc_Char)0x20,  /* [687] */
    (xdc_Char)0x4d,  /* [688] */
    (xdc_Char)0x50,  /* [689] */
    (xdc_Char)0x55,  /* [690] */
    (xdc_Char)0x20,  /* [691] */
    (xdc_Char)0x72,  /* [692] */
    (xdc_Char)0x65,  /* [693] */
    (xdc_Char)0x67,  /* [694] */
    (xdc_Char)0x69,  /* [695] */
    (xdc_Char)0x6f,  /* [696] */
    (xdc_Char)0x6e,  /* [697] */
    (xdc_Char)0x20,  /* [698] */
    (xdc_Char)0x62,  /* [699] */
    (xdc_Char)0x61,  /* [700] */
    (xdc_Char)0x73,  /* [701] */
    (xdc_Char)0x65,  /* [702] */
    (xdc_Char)0x20,  /* [703] */
    (xdc_Char)0x61,  /* [704] */
    (xdc_Char)0x64,  /* [705] */
    (xdc_Char)0x64,  /* [706] */
    (xdc_Char)0x72,  /* [707] */
    (xdc_Char)0x65,  /* [708] */
    (xdc_Char)0x73,  /* [709] */
    (xdc_Char)0x73,  /* [710] */
    (xdc_Char)0x20,  /* [711] */
    (xdc_Char)0x6e,  /* [712] */
    (xdc_Char)0x6f,  /* [713] */
    (xdc_Char)0x74,  /* [714] */
    (xdc_Char)0x20,  /* [715] */
    (xdc_Char)0x61,  /* [716] */
    (xdc_Char)0x6c,  /* [717] */
    (xdc_Char)0x69,  /* [718] */
    (xdc_Char)0x67,  /* [719] */
    (xdc_Char)0x6e,  /* [720] */
    (xdc_Char)0x65,  /* [721] */
    (xdc_Char)0x64,  /* [722] */
    (xdc_Char)0x20,  /* [723] */
    (xdc_Char)0x74,  /* [724] */
    (xdc_Char)0x6f,  /* [725] */
    (xdc_Char)0x20,  /* [726] */
    (xdc_Char)0x73,  /* [727] */
    (xdc_Char)0x69,  /* [728] */
    (xdc_Char)0x7a,  /* [729] */
    (xdc_Char)0x65,  /* [730] */
    (xdc_Char)0x2e,  /* [731] */
    (xdc_Char)0x0,  /* [732] */
    (xdc_Char)0x41,  /* [733] */
    (xdc_Char)0x5f,  /* [734] */
    (xdc_Char)0x72,  /* [735] */
    (xdc_Char)0x65,  /* [736] */
    (xdc_Char)0x73,  /* [737] */
    (xdc_Char)0x65,  /* [738] */
    (xdc_Char)0x72,  /* [739] */
    (xdc_Char)0x76,  /* [740] */
    (xdc_Char)0x65,  /* [741] */
    (xdc_Char)0x64,  /* [742] */
    (xdc_Char)0x41,  /* [743] */
    (xdc_Char)0x74,  /* [744] */
    (xdc_Char)0x74,  /* [745] */
    (xdc_Char)0x72,  /* [746] */
    (xdc_Char)0x73,  /* [747] */
    (xdc_Char)0x3a,  /* [748] */
    (xdc_Char)0x20,  /* [749] */
    (xdc_Char)0x4d,  /* [750] */
    (xdc_Char)0x50,  /* [751] */
    (xdc_Char)0x55,  /* [752] */
    (xdc_Char)0x20,  /* [753] */
    (xdc_Char)0x72,  /* [754] */
    (xdc_Char)0x65,  /* [755] */
    (xdc_Char)0x67,  /* [756] */
    (xdc_Char)0x69,  /* [757] */
    (xdc_Char)0x6f,  /* [758] */
    (xdc_Char)0x6e,  /* [759] */
    (xdc_Char)0x20,  /* [760] */
    (xdc_Char)0x61,  /* [761] */
    (xdc_Char)0x74,  /* [762] */
    (xdc_Char)0x74,  /* [763] */
    (xdc_Char)0x72,  /* [764] */
    (xdc_Char)0x69,  /* [765] */
    (xdc_Char)0x62,  /* [766] */
    (xdc_Char)0x75,  /* [767] */
    (xdc_Char)0x74,  /* [768] */
    (xdc_Char)0x65,  /* [769] */
    (xdc_Char)0x73,  /* [770] */
    (xdc_Char)0x20,  /* [771] */
    (xdc_Char)0x73,  /* [772] */
    (xdc_Char)0x65,  /* [773] */
    (xdc_Char)0x74,  /* [774] */
    (xdc_Char)0x20,  /* [775] */
    (xdc_Char)0x74,  /* [776] */
    (xdc_Char)0x6f,  /* [777] */
    (xdc_Char)0x20,  /* [778] */
    (xdc_Char)0x72,  /* [779] */
    (xdc_Char)0x65,  /* [780] */
    (xdc_Char)0x73,  /* [781] */
    (xdc_Char)0x65,  /* [782] */
    (xdc_Char)0x72,  /* [783] */
    (xdc_Char)0x76,  /* [784] */
    (xdc_Char)0x65,  /* [785] */
    (xdc_Char)0x64,  /* [786] */
    (xdc_Char)0x20,  /* [787] */
    (xdc_Char)0x76,  /* [788] */
    (xdc_Char)0x61,  /* [789] */
    (xdc_Char)0x6c,  /* [790] */
    (xdc_Char)0x75,  /* [791] */
    (xdc_Char)0x65,  /* [792] */
    (xdc_Char)0x2e,  /* [793] */
    (xdc_Char)0x0,  /* [794] */
    (xdc_Char)0x41,  /* [795] */
    (xdc_Char)0x5f,  /* [796] */
    (xdc_Char)0x63,  /* [797] */
    (xdc_Char)0x6c,  /* [798] */
    (xdc_Char)0x6f,  /* [799] */
    (xdc_Char)0x63,  /* [800] */
    (xdc_Char)0x6b,  /* [801] */
    (xdc_Char)0x44,  /* [802] */
    (xdc_Char)0x69,  /* [803] */
    (xdc_Char)0x73,  /* [804] */
    (xdc_Char)0x61,  /* [805] */
    (xdc_Char)0x62,  /* [806] */
    (xdc_Char)0x6c,  /* [807] */
    (xdc_Char)0x65,  /* [808] */
    (xdc_Char)0x64,  /* [809] */
    (xdc_Char)0x3a,  /* [810] */
    (xdc_Char)0x20,  /* [811] */
    (xdc_Char)0x43,  /* [812] */
    (xdc_Char)0x61,  /* [813] */
    (xdc_Char)0x6e,  /* [814] */
    (xdc_Char)0x6e,  /* [815] */
    (xdc_Char)0x6f,  /* [816] */
    (xdc_Char)0x74,  /* [817] */
    (xdc_Char)0x20,  /* [818] */
    (xdc_Char)0x63,  /* [819] */
    (xdc_Char)0x72,  /* [820] */
    (xdc_Char)0x65,  /* [821] */
    (xdc_Char)0x61,  /* [822] */
    (xdc_Char)0x74,  /* [823] */
    (xdc_Char)0x65,  /* [824] */
    (xdc_Char)0x20,  /* [825] */
    (xdc_Char)0x61,  /* [826] */
    (xdc_Char)0x20,  /* [827] */
    (xdc_Char)0x63,  /* [828] */
    (xdc_Char)0x6c,  /* [829] */
    (xdc_Char)0x6f,  /* [830] */
    (xdc_Char)0x63,  /* [831] */
    (xdc_Char)0x6b,  /* [832] */
    (xdc_Char)0x20,  /* [833] */
    (xdc_Char)0x69,  /* [834] */
    (xdc_Char)0x6e,  /* [835] */
    (xdc_Char)0x73,  /* [836] */
    (xdc_Char)0x74,  /* [837] */
    (xdc_Char)0x61,  /* [838] */
    (xdc_Char)0x6e,  /* [839] */
    (xdc_Char)0x63,  /* [840] */
    (xdc_Char)0x65,  /* [841] */
    (xdc_Char)0x20,  /* [842] */
    (xdc_Char)0x77,  /* [843] */
    (xdc_Char)0x68,  /* [844] */
    (xdc_Char)0x65,  /* [845] */
    (xdc_Char)0x6e,  /* [846] */
    (xdc_Char)0x20,  /* [847] */
    (xdc_Char)0x42,  /* [848] */
    (xdc_Char)0x49,  /* [849] */
    (xdc_Char)0x4f,  /* [850] */
    (xdc_Char)0x53,  /* [851] */
    (xdc_Char)0x2e,  /* [852] */
    (xdc_Char)0x63,  /* [853] */
    (xdc_Char)0x6c,  /* [854] */
    (xdc_Char)0x6f,  /* [855] */
    (xdc_Char)0x63,  /* [856] */
    (xdc_Char)0x6b,  /* [857] */
    (xdc_Char)0x45,  /* [858] */
    (xdc_Char)0x6e,  /* [859] */
    (xdc_Char)0x61,  /* [860] */
    (xdc_Char)0x62,  /* [861] */
    (xdc_Char)0x6c,  /* [862] */
    (xdc_Char)0x65,  /* [863] */
    (xdc_Char)0x64,  /* [864] */
    (xdc_Char)0x20,  /* [865] */
    (xdc_Char)0x69,  /* [866] */
    (xdc_Char)0x73,  /* [867] */
    (xdc_Char)0x20,  /* [868] */
    (xdc_Char)0x66,  /* [869] */
    (xdc_Char)0x61,  /* [870] */
    (xdc_Char)0x6c,  /* [871] */
    (xdc_Char)0x73,  /* [872] */
    (xdc_Char)0x65,  /* [873] */
    (xdc_Char)0x2e,  /* [874] */
    (xdc_Char)0x0,  /* [875] */
    (xdc_Char)0x41,  /* [876] */
    (xdc_Char)0x5f,  /* [877] */
    (xdc_Char)0x62,  /* [878] */
    (xdc_Char)0x61,  /* [879] */
    (xdc_Char)0x64,  /* [880] */
    (xdc_Char)0x54,  /* [881] */
    (xdc_Char)0x68,  /* [882] */
    (xdc_Char)0x72,  /* [883] */
    (xdc_Char)0x65,  /* [884] */
    (xdc_Char)0x61,  /* [885] */
    (xdc_Char)0x64,  /* [886] */
    (xdc_Char)0x54,  /* [887] */
    (xdc_Char)0x79,  /* [888] */
    (xdc_Char)0x70,  /* [889] */
    (xdc_Char)0x65,  /* [890] */
    (xdc_Char)0x3a,  /* [891] */
    (xdc_Char)0x20,  /* [892] */
    (xdc_Char)0x43,  /* [893] */
    (xdc_Char)0x61,  /* [894] */
    (xdc_Char)0x6e,  /* [895] */
    (xdc_Char)0x6e,  /* [896] */
    (xdc_Char)0x6f,  /* [897] */
    (xdc_Char)0x74,  /* [898] */
    (xdc_Char)0x20,  /* [899] */
    (xdc_Char)0x63,  /* [900] */
    (xdc_Char)0x72,  /* [901] */
    (xdc_Char)0x65,  /* [902] */
    (xdc_Char)0x61,  /* [903] */
    (xdc_Char)0x74,  /* [904] */
    (xdc_Char)0x65,  /* [905] */
    (xdc_Char)0x2f,  /* [906] */
    (xdc_Char)0x64,  /* [907] */
    (xdc_Char)0x65,  /* [908] */
    (xdc_Char)0x6c,  /* [909] */
    (xdc_Char)0x65,  /* [910] */
    (xdc_Char)0x74,  /* [911] */
    (xdc_Char)0x65,  /* [912] */
    (xdc_Char)0x20,  /* [913] */
    (xdc_Char)0x61,  /* [914] */
    (xdc_Char)0x20,  /* [915] */
    (xdc_Char)0x43,  /* [916] */
    (xdc_Char)0x6c,  /* [917] */
    (xdc_Char)0x6f,  /* [918] */
    (xdc_Char)0x63,  /* [919] */
    (xdc_Char)0x6b,  /* [920] */
    (xdc_Char)0x20,  /* [921] */
    (xdc_Char)0x66,  /* [922] */
    (xdc_Char)0x72,  /* [923] */
    (xdc_Char)0x6f,  /* [924] */
    (xdc_Char)0x6d,  /* [925] */
    (xdc_Char)0x20,  /* [926] */
    (xdc_Char)0x48,  /* [927] */
    (xdc_Char)0x77,  /* [928] */
    (xdc_Char)0x69,  /* [929] */
    (xdc_Char)0x20,  /* [930] */
    (xdc_Char)0x6f,  /* [931] */
    (xdc_Char)0x72,  /* [932] */
    (xdc_Char)0x20,  /* [933] */
    (xdc_Char)0x53,  /* [934] */
    (xdc_Char)0x77,  /* [935] */
    (xdc_Char)0x69,  /* [936] */
    (xdc_Char)0x20,  /* [937] */
    (xdc_Char)0x74,  /* [938] */
    (xdc_Char)0x68,  /* [939] */
    (xdc_Char)0x72,  /* [940] */
    (xdc_Char)0x65,  /* [941] */
    (xdc_Char)0x61,  /* [942] */
    (xdc_Char)0x64,  /* [943] */
    (xdc_Char)0x2e,  /* [944] */
    (xdc_Char)0x0,  /* [945] */
    (xdc_Char)0x41,  /* [946] */
    (xdc_Char)0x5f,  /* [947] */
    (xdc_Char)0x6e,  /* [948] */
    (xdc_Char)0x75,  /* [949] */
    (xdc_Char)0x6c,  /* [950] */
    (xdc_Char)0x6c,  /* [951] */
    (xdc_Char)0x45,  /* [952] */
    (xdc_Char)0x76,  /* [953] */
    (xdc_Char)0x65,  /* [954] */
    (xdc_Char)0x6e,  /* [955] */
    (xdc_Char)0x74,  /* [956] */
    (xdc_Char)0x4d,  /* [957] */
    (xdc_Char)0x61,  /* [958] */
    (xdc_Char)0x73,  /* [959] */
    (xdc_Char)0x6b,  /* [960] */
    (xdc_Char)0x73,  /* [961] */
    (xdc_Char)0x3a,  /* [962] */
    (xdc_Char)0x20,  /* [963] */
    (xdc_Char)0x6f,  /* [964] */
    (xdc_Char)0x72,  /* [965] */
    (xdc_Char)0x4d,  /* [966] */
    (xdc_Char)0x61,  /* [967] */
    (xdc_Char)0x73,  /* [968] */
    (xdc_Char)0x6b,  /* [969] */
    (xdc_Char)0x20,  /* [970] */
    (xdc_Char)0x61,  /* [971] */
    (xdc_Char)0x6e,  /* [972] */
    (xdc_Char)0x64,  /* [973] */
    (xdc_Char)0x20,  /* [974] */
    (xdc_Char)0x61,  /* [975] */
    (xdc_Char)0x6e,  /* [976] */
    (xdc_Char)0x64,  /* [977] */
    (xdc_Char)0x4d,  /* [978] */
    (xdc_Char)0x61,  /* [979] */
    (xdc_Char)0x73,  /* [980] */
    (xdc_Char)0x6b,  /* [981] */
    (xdc_Char)0x20,  /* [982] */
    (xdc_Char)0x61,  /* [983] */
    (xdc_Char)0x72,  /* [984] */
    (xdc_Char)0x65,  /* [985] */
    (xdc_Char)0x20,  /* [986] */
    (xdc_Char)0x6e,  /* [987] */
    (xdc_Char)0x75,  /* [988] */
    (xdc_Char)0x6c,  /* [989] */
    (xdc_Char)0x6c,  /* [990] */
    (xdc_Char)0x2e,  /* [991] */
    (xdc_Char)0x0,  /* [992] */
    (xdc_Char)0x41,  /* [993] */
    (xdc_Char)0x5f,  /* [994] */
    (xdc_Char)0x6e,  /* [995] */
    (xdc_Char)0x75,  /* [996] */
    (xdc_Char)0x6c,  /* [997] */
    (xdc_Char)0x6c,  /* [998] */
    (xdc_Char)0x45,  /* [999] */
    (xdc_Char)0x76,  /* [1000] */
    (xdc_Char)0x65,  /* [1001] */
    (xdc_Char)0x6e,  /* [1002] */
    (xdc_Char)0x74,  /* [1003] */
    (xdc_Char)0x49,  /* [1004] */
    (xdc_Char)0x64,  /* [1005] */
    (xdc_Char)0x3a,  /* [1006] */
    (xdc_Char)0x20,  /* [1007] */
    (xdc_Char)0x70,  /* [1008] */
    (xdc_Char)0x6f,  /* [1009] */
    (xdc_Char)0x73,  /* [1010] */
    (xdc_Char)0x74,  /* [1011] */
    (xdc_Char)0x65,  /* [1012] */
    (xdc_Char)0x64,  /* [1013] */
    (xdc_Char)0x20,  /* [1014] */
    (xdc_Char)0x65,  /* [1015] */
    (xdc_Char)0x76,  /* [1016] */
    (xdc_Char)0x65,  /* [1017] */
    (xdc_Char)0x6e,  /* [1018] */
    (xdc_Char)0x74,  /* [1019] */
    (xdc_Char)0x49,  /* [1020] */
    (xdc_Char)0x64,  /* [1021] */
    (xdc_Char)0x20,  /* [1022] */
    (xdc_Char)0x69,  /* [1023] */
    (xdc_Char)0x73,  /* [1024] */
    (xdc_Char)0x20,  /* [1025] */
    (xdc_Char)0x6e,  /* [1026] */
    (xdc_Char)0x75,  /* [1027] */
    (xdc_Char)0x6c,  /* [1028] */
    (xdc_Char)0x6c,  /* [1029] */
    (xdc_Char)0x2e,  /* [1030] */
    (xdc_Char)0x0,  /* [1031] */
    (xdc_Char)0x41,  /* [1032] */
    (xdc_Char)0x5f,  /* [1033] */
    (xdc_Char)0x65,  /* [1034] */
    (xdc_Char)0x76,  /* [1035] */
    (xdc_Char)0x65,  /* [1036] */
    (xdc_Char)0x6e,  /* [1037] */
    (xdc_Char)0x74,  /* [1038] */
    (xdc_Char)0x49,  /* [1039] */
    (xdc_Char)0x6e,  /* [1040] */
    (xdc_Char)0x55,  /* [1041] */
    (xdc_Char)0x73,  /* [1042] */
    (xdc_Char)0x65,  /* [1043] */
    (xdc_Char)0x3a,  /* [1044] */
    (xdc_Char)0x20,  /* [1045] */
    (xdc_Char)0x45,  /* [1046] */
    (xdc_Char)0x76,  /* [1047] */
    (xdc_Char)0x65,  /* [1048] */
    (xdc_Char)0x6e,  /* [1049] */
    (xdc_Char)0x74,  /* [1050] */
    (xdc_Char)0x20,  /* [1051] */
    (xdc_Char)0x6f,  /* [1052] */
    (xdc_Char)0x62,  /* [1053] */
    (xdc_Char)0x6a,  /* [1054] */
    (xdc_Char)0x65,  /* [1055] */
    (xdc_Char)0x63,  /* [1056] */
    (xdc_Char)0x74,  /* [1057] */
    (xdc_Char)0x20,  /* [1058] */
    (xdc_Char)0x61,  /* [1059] */
    (xdc_Char)0x6c,  /* [1060] */
    (xdc_Char)0x72,  /* [1061] */
    (xdc_Char)0x65,  /* [1062] */
    (xdc_Char)0x61,  /* [1063] */
    (xdc_Char)0x64,  /* [1064] */
    (xdc_Char)0x79,  /* [1065] */
    (xdc_Char)0x20,  /* [1066] */
    (xdc_Char)0x69,  /* [1067] */
    (xdc_Char)0x6e,  /* [1068] */
    (xdc_Char)0x20,  /* [1069] */
    (xdc_Char)0x75,  /* [1070] */
    (xdc_Char)0x73,  /* [1071] */
    (xdc_Char)0x65,  /* [1072] */
    (xdc_Char)0x2e,  /* [1073] */
    (xdc_Char)0x0,  /* [1074] */
    (xdc_Char)0x41,  /* [1075] */
    (xdc_Char)0x5f,  /* [1076] */
    (xdc_Char)0x62,  /* [1077] */
    (xdc_Char)0x61,  /* [1078] */
    (xdc_Char)0x64,  /* [1079] */
    (xdc_Char)0x43,  /* [1080] */
    (xdc_Char)0x6f,  /* [1081] */
    (xdc_Char)0x6e,  /* [1082] */
    (xdc_Char)0x74,  /* [1083] */
    (xdc_Char)0x65,  /* [1084] */
    (xdc_Char)0x78,  /* [1085] */
    (xdc_Char)0x74,  /* [1086] */
    (xdc_Char)0x3a,  /* [1087] */
    (xdc_Char)0x20,  /* [1088] */
    (xdc_Char)0x62,  /* [1089] */
    (xdc_Char)0x61,  /* [1090] */
    (xdc_Char)0x64,  /* [1091] */
    (xdc_Char)0x20,  /* [1092] */
    (xdc_Char)0x63,  /* [1093] */
    (xdc_Char)0x61,  /* [1094] */
    (xdc_Char)0x6c,  /* [1095] */
    (xdc_Char)0x6c,  /* [1096] */
    (xdc_Char)0x69,  /* [1097] */
    (xdc_Char)0x6e,  /* [1098] */
    (xdc_Char)0x67,  /* [1099] */
    (xdc_Char)0x20,  /* [1100] */
    (xdc_Char)0x63,  /* [1101] */
    (xdc_Char)0x6f,  /* [1102] */
    (xdc_Char)0x6e,  /* [1103] */
    (xdc_Char)0x74,  /* [1104] */
    (xdc_Char)0x65,  /* [1105] */
    (xdc_Char)0x78,  /* [1106] */
    (xdc_Char)0x74,  /* [1107] */
    (xdc_Char)0x2e,  /* [1108] */
    (xdc_Char)0x20,  /* [1109] */
    (xdc_Char)0x4d,  /* [1110] */
    (xdc_Char)0x75,  /* [1111] */
    (xdc_Char)0x73,  /* [1112] */
    (xdc_Char)0x74,  /* [1113] */
    (xdc_Char)0x20,  /* [1114] */
    (xdc_Char)0x62,  /* [1115] */
    (xdc_Char)0x65,  /* [1116] */
    (xdc_Char)0x20,  /* [1117] */
    (xdc_Char)0x63,  /* [1118] */
    (xdc_Char)0x61,  /* [1119] */
    (xdc_Char)0x6c,  /* [1120] */
    (xdc_Char)0x6c,  /* [1121] */
    (xdc_Char)0x65,  /* [1122] */
    (xdc_Char)0x64,  /* [1123] */
    (xdc_Char)0x20,  /* [1124] */
    (xdc_Char)0x66,  /* [1125] */
    (xdc_Char)0x72,  /* [1126] */
    (xdc_Char)0x6f,  /* [1127] */
    (xdc_Char)0x6d,  /* [1128] */
    (xdc_Char)0x20,  /* [1129] */
    (xdc_Char)0x61,  /* [1130] */
    (xdc_Char)0x20,  /* [1131] */
    (xdc_Char)0x54,  /* [1132] */
    (xdc_Char)0x61,  /* [1133] */
    (xdc_Char)0x73,  /* [1134] */
    (xdc_Char)0x6b,  /* [1135] */
    (xdc_Char)0x2e,  /* [1136] */
    (xdc_Char)0x0,  /* [1137] */
    (xdc_Char)0x41,  /* [1138] */
    (xdc_Char)0x5f,  /* [1139] */
    (xdc_Char)0x70,  /* [1140] */
    (xdc_Char)0x65,  /* [1141] */
    (xdc_Char)0x6e,  /* [1142] */
    (xdc_Char)0x64,  /* [1143] */
    (xdc_Char)0x54,  /* [1144] */
    (xdc_Char)0x61,  /* [1145] */
    (xdc_Char)0x73,  /* [1146] */
    (xdc_Char)0x6b,  /* [1147] */
    (xdc_Char)0x44,  /* [1148] */
    (xdc_Char)0x69,  /* [1149] */
    (xdc_Char)0x73,  /* [1150] */
    (xdc_Char)0x61,  /* [1151] */
    (xdc_Char)0x62,  /* [1152] */
    (xdc_Char)0x6c,  /* [1153] */
    (xdc_Char)0x65,  /* [1154] */
    (xdc_Char)0x64,  /* [1155] */
    (xdc_Char)0x3a,  /* [1156] */
    (xdc_Char)0x20,  /* [1157] */
    (xdc_Char)0x43,  /* [1158] */
    (xdc_Char)0x61,  /* [1159] */
    (xdc_Char)0x6e,  /* [1160] */
    (xdc_Char)0x6e,  /* [1161] */
    (xdc_Char)0x6f,  /* [1162] */
    (xdc_Char)0x74,  /* [1163] */
    (xdc_Char)0x20,  /* [1164] */
    (xdc_Char)0x63,  /* [1165] */
    (xdc_Char)0x61,  /* [1166] */
    (xdc_Char)0x6c,  /* [1167] */
    (xdc_Char)0x6c,  /* [1168] */
    (xdc_Char)0x20,  /* [1169] */
    (xdc_Char)0x45,  /* [1170] */
    (xdc_Char)0x76,  /* [1171] */
    (xdc_Char)0x65,  /* [1172] */
    (xdc_Char)0x6e,  /* [1173] */
    (xdc_Char)0x74,  /* [1174] */
    (xdc_Char)0x5f,  /* [1175] */
    (xdc_Char)0x70,  /* [1176] */
    (xdc_Char)0x65,  /* [1177] */
    (xdc_Char)0x6e,  /* [1178] */
    (xdc_Char)0x64,  /* [1179] */
    (xdc_Char)0x28,  /* [1180] */
    (xdc_Char)0x29,  /* [1181] */
    (xdc_Char)0x20,  /* [1182] */
    (xdc_Char)0x77,  /* [1183] */
    (xdc_Char)0x68,  /* [1184] */
    (xdc_Char)0x69,  /* [1185] */
    (xdc_Char)0x6c,  /* [1186] */
    (xdc_Char)0x65,  /* [1187] */
    (xdc_Char)0x20,  /* [1188] */
    (xdc_Char)0x74,  /* [1189] */
    (xdc_Char)0x68,  /* [1190] */
    (xdc_Char)0x65,  /* [1191] */
    (xdc_Char)0x20,  /* [1192] */
    (xdc_Char)0x54,  /* [1193] */
    (xdc_Char)0x61,  /* [1194] */
    (xdc_Char)0x73,  /* [1195] */
    (xdc_Char)0x6b,  /* [1196] */
    (xdc_Char)0x20,  /* [1197] */
    (xdc_Char)0x6f,  /* [1198] */
    (xdc_Char)0x72,  /* [1199] */
    (xdc_Char)0x20,  /* [1200] */
    (xdc_Char)0x53,  /* [1201] */
    (xdc_Char)0x77,  /* [1202] */
    (xdc_Char)0x69,  /* [1203] */
    (xdc_Char)0x20,  /* [1204] */
    (xdc_Char)0x73,  /* [1205] */
    (xdc_Char)0x63,  /* [1206] */
    (xdc_Char)0x68,  /* [1207] */
    (xdc_Char)0x65,  /* [1208] */
    (xdc_Char)0x64,  /* [1209] */
    (xdc_Char)0x75,  /* [1210] */
    (xdc_Char)0x6c,  /* [1211] */
    (xdc_Char)0x65,  /* [1212] */
    (xdc_Char)0x72,  /* [1213] */
    (xdc_Char)0x20,  /* [1214] */
    (xdc_Char)0x69,  /* [1215] */
    (xdc_Char)0x73,  /* [1216] */
    (xdc_Char)0x20,  /* [1217] */
    (xdc_Char)0x64,  /* [1218] */
    (xdc_Char)0x69,  /* [1219] */
    (xdc_Char)0x73,  /* [1220] */
    (xdc_Char)0x61,  /* [1221] */
    (xdc_Char)0x62,  /* [1222] */
    (xdc_Char)0x6c,  /* [1223] */
    (xdc_Char)0x65,  /* [1224] */
    (xdc_Char)0x64,  /* [1225] */
    (xdc_Char)0x2e,  /* [1226] */
    (xdc_Char)0x0,  /* [1227] */
    (xdc_Char)0x4d,  /* [1228] */
    (xdc_Char)0x61,  /* [1229] */
    (xdc_Char)0x69,  /* [1230] */
    (xdc_Char)0x6c,  /* [1231] */
    (xdc_Char)0x62,  /* [1232] */
    (xdc_Char)0x6f,  /* [1233] */
    (xdc_Char)0x78,  /* [1234] */
    (xdc_Char)0x5f,  /* [1235] */
    (xdc_Char)0x63,  /* [1236] */
    (xdc_Char)0x72,  /* [1237] */
    (xdc_Char)0x65,  /* [1238] */
    (xdc_Char)0x61,  /* [1239] */
    (xdc_Char)0x74,  /* [1240] */
    (xdc_Char)0x65,  /* [1241] */
    (xdc_Char)0x27,  /* [1242] */
    (xdc_Char)0x73,  /* [1243] */
    (xdc_Char)0x20,  /* [1244] */
    (xdc_Char)0x62,  /* [1245] */
    (xdc_Char)0x75,  /* [1246] */
    (xdc_Char)0x66,  /* [1247] */
    (xdc_Char)0x53,  /* [1248] */
    (xdc_Char)0x69,  /* [1249] */
    (xdc_Char)0x7a,  /* [1250] */
    (xdc_Char)0x65,  /* [1251] */
    (xdc_Char)0x20,  /* [1252] */
    (xdc_Char)0x70,  /* [1253] */
    (xdc_Char)0x61,  /* [1254] */
    (xdc_Char)0x72,  /* [1255] */
    (xdc_Char)0x61,  /* [1256] */
    (xdc_Char)0x6d,  /* [1257] */
    (xdc_Char)0x65,  /* [1258] */
    (xdc_Char)0x74,  /* [1259] */
    (xdc_Char)0x65,  /* [1260] */
    (xdc_Char)0x72,  /* [1261] */
    (xdc_Char)0x20,  /* [1262] */
    (xdc_Char)0x69,  /* [1263] */
    (xdc_Char)0x73,  /* [1264] */
    (xdc_Char)0x20,  /* [1265] */
    (xdc_Char)0x69,  /* [1266] */
    (xdc_Char)0x6e,  /* [1267] */
    (xdc_Char)0x76,  /* [1268] */
    (xdc_Char)0x61,  /* [1269] */
    (xdc_Char)0x6c,  /* [1270] */
    (xdc_Char)0x69,  /* [1271] */
    (xdc_Char)0x64,  /* [1272] */
    (xdc_Char)0x20,  /* [1273] */
    (xdc_Char)0x28,  /* [1274] */
    (xdc_Char)0x74,  /* [1275] */
    (xdc_Char)0x6f,  /* [1276] */
    (xdc_Char)0x6f,  /* [1277] */
    (xdc_Char)0x20,  /* [1278] */
    (xdc_Char)0x73,  /* [1279] */
    (xdc_Char)0x6d,  /* [1280] */
    (xdc_Char)0x61,  /* [1281] */
    (xdc_Char)0x6c,  /* [1282] */
    (xdc_Char)0x6c,  /* [1283] */
    (xdc_Char)0x29,  /* [1284] */
    (xdc_Char)0x0,  /* [1285] */
    (xdc_Char)0x41,  /* [1286] */
    (xdc_Char)0x5f,  /* [1287] */
    (xdc_Char)0x6e,  /* [1288] */
    (xdc_Char)0x6f,  /* [1289] */
    (xdc_Char)0x45,  /* [1290] */
    (xdc_Char)0x76,  /* [1291] */
    (xdc_Char)0x65,  /* [1292] */
    (xdc_Char)0x6e,  /* [1293] */
    (xdc_Char)0x74,  /* [1294] */
    (xdc_Char)0x73,  /* [1295] */
    (xdc_Char)0x3a,  /* [1296] */
    (xdc_Char)0x20,  /* [1297] */
    (xdc_Char)0x54,  /* [1298] */
    (xdc_Char)0x68,  /* [1299] */
    (xdc_Char)0x65,  /* [1300] */
    (xdc_Char)0x20,  /* [1301] */
    (xdc_Char)0x45,  /* [1302] */
    (xdc_Char)0x76,  /* [1303] */
    (xdc_Char)0x65,  /* [1304] */
    (xdc_Char)0x6e,  /* [1305] */
    (xdc_Char)0x74,  /* [1306] */
    (xdc_Char)0x2e,  /* [1307] */
    (xdc_Char)0x73,  /* [1308] */
    (xdc_Char)0x75,  /* [1309] */
    (xdc_Char)0x70,  /* [1310] */
    (xdc_Char)0x70,  /* [1311] */
    (xdc_Char)0x6f,  /* [1312] */
    (xdc_Char)0x72,  /* [1313] */
    (xdc_Char)0x74,  /* [1314] */
    (xdc_Char)0x73,  /* [1315] */
    (xdc_Char)0x45,  /* [1316] */
    (xdc_Char)0x76,  /* [1317] */
    (xdc_Char)0x65,  /* [1318] */
    (xdc_Char)0x6e,  /* [1319] */
    (xdc_Char)0x74,  /* [1320] */
    (xdc_Char)0x73,  /* [1321] */
    (xdc_Char)0x20,  /* [1322] */
    (xdc_Char)0x66,  /* [1323] */
    (xdc_Char)0x6c,  /* [1324] */
    (xdc_Char)0x61,  /* [1325] */
    (xdc_Char)0x67,  /* [1326] */
    (xdc_Char)0x20,  /* [1327] */
    (xdc_Char)0x69,  /* [1328] */
    (xdc_Char)0x73,  /* [1329] */
    (xdc_Char)0x20,  /* [1330] */
    (xdc_Char)0x64,  /* [1331] */
    (xdc_Char)0x69,  /* [1332] */
    (xdc_Char)0x73,  /* [1333] */
    (xdc_Char)0x61,  /* [1334] */
    (xdc_Char)0x62,  /* [1335] */
    (xdc_Char)0x6c,  /* [1336] */
    (xdc_Char)0x65,  /* [1337] */
    (xdc_Char)0x64,  /* [1338] */
    (xdc_Char)0x2e,  /* [1339] */
    (xdc_Char)0x0,  /* [1340] */
    (xdc_Char)0x41,  /* [1341] */
    (xdc_Char)0x5f,  /* [1342] */
    (xdc_Char)0x69,  /* [1343] */
    (xdc_Char)0x6e,  /* [1344] */
    (xdc_Char)0x76,  /* [1345] */
    (xdc_Char)0x54,  /* [1346] */
    (xdc_Char)0x69,  /* [1347] */
    (xdc_Char)0x6d,  /* [1348] */
    (xdc_Char)0x65,  /* [1349] */
    (xdc_Char)0x6f,  /* [1350] */
    (xdc_Char)0x75,  /* [1351] */
    (xdc_Char)0x74,  /* [1352] */
    (xdc_Char)0x3a,  /* [1353] */
    (xdc_Char)0x20,  /* [1354] */
    (xdc_Char)0x43,  /* [1355] */
    (xdc_Char)0x61,  /* [1356] */
    (xdc_Char)0x6e,  /* [1357] */
    (xdc_Char)0x27,  /* [1358] */
    (xdc_Char)0x74,  /* [1359] */
    (xdc_Char)0x20,  /* [1360] */
    (xdc_Char)0x75,  /* [1361] */
    (xdc_Char)0x73,  /* [1362] */
    (xdc_Char)0x65,  /* [1363] */
    (xdc_Char)0x20,  /* [1364] */
    (xdc_Char)0x42,  /* [1365] */
    (xdc_Char)0x49,  /* [1366] */
    (xdc_Char)0x4f,  /* [1367] */
    (xdc_Char)0x53,  /* [1368] */
    (xdc_Char)0x5f,  /* [1369] */
    (xdc_Char)0x45,  /* [1370] */
    (xdc_Char)0x56,  /* [1371] */
    (xdc_Char)0x45,  /* [1372] */
    (xdc_Char)0x4e,  /* [1373] */
    (xdc_Char)0x54,  /* [1374] */
    (xdc_Char)0x5f,  /* [1375] */
    (xdc_Char)0x41,  /* [1376] */
    (xdc_Char)0x43,  /* [1377] */
    (xdc_Char)0x51,  /* [1378] */
    (xdc_Char)0x55,  /* [1379] */
    (xdc_Char)0x49,  /* [1380] */
    (xdc_Char)0x52,  /* [1381] */
    (xdc_Char)0x45,  /* [1382] */
    (xdc_Char)0x44,  /* [1383] */
    (xdc_Char)0x20,  /* [1384] */
    (xdc_Char)0x77,  /* [1385] */
    (xdc_Char)0x69,  /* [1386] */
    (xdc_Char)0x74,  /* [1387] */
    (xdc_Char)0x68,  /* [1388] */
    (xdc_Char)0x20,  /* [1389] */
    (xdc_Char)0x74,  /* [1390] */
    (xdc_Char)0x68,  /* [1391] */
    (xdc_Char)0x69,  /* [1392] */
    (xdc_Char)0x73,  /* [1393] */
    (xdc_Char)0x20,  /* [1394] */
    (xdc_Char)0x53,  /* [1395] */
    (xdc_Char)0x65,  /* [1396] */
    (xdc_Char)0x6d,  /* [1397] */
    (xdc_Char)0x61,  /* [1398] */
    (xdc_Char)0x70,  /* [1399] */
    (xdc_Char)0x68,  /* [1400] */
    (xdc_Char)0x6f,  /* [1401] */
    (xdc_Char)0x72,  /* [1402] */
    (xdc_Char)0x65,  /* [1403] */
    (xdc_Char)0x2e,  /* [1404] */
    (xdc_Char)0x0,  /* [1405] */
    (xdc_Char)0x41,  /* [1406] */
    (xdc_Char)0x5f,  /* [1407] */
    (xdc_Char)0x6f,  /* [1408] */
    (xdc_Char)0x76,  /* [1409] */
    (xdc_Char)0x65,  /* [1410] */
    (xdc_Char)0x72,  /* [1411] */
    (xdc_Char)0x66,  /* [1412] */
    (xdc_Char)0x6c,  /* [1413] */
    (xdc_Char)0x6f,  /* [1414] */
    (xdc_Char)0x77,  /* [1415] */
    (xdc_Char)0x3a,  /* [1416] */
    (xdc_Char)0x20,  /* [1417] */
    (xdc_Char)0x43,  /* [1418] */
    (xdc_Char)0x6f,  /* [1419] */
    (xdc_Char)0x75,  /* [1420] */
    (xdc_Char)0x6e,  /* [1421] */
    (xdc_Char)0x74,  /* [1422] */
    (xdc_Char)0x20,  /* [1423] */
    (xdc_Char)0x68,  /* [1424] */
    (xdc_Char)0x61,  /* [1425] */
    (xdc_Char)0x73,  /* [1426] */
    (xdc_Char)0x20,  /* [1427] */
    (xdc_Char)0x65,  /* [1428] */
    (xdc_Char)0x78,  /* [1429] */
    (xdc_Char)0x63,  /* [1430] */
    (xdc_Char)0x65,  /* [1431] */
    (xdc_Char)0x65,  /* [1432] */
    (xdc_Char)0x64,  /* [1433] */
    (xdc_Char)0x65,  /* [1434] */
    (xdc_Char)0x64,  /* [1435] */
    (xdc_Char)0x20,  /* [1436] */
    (xdc_Char)0x36,  /* [1437] */
    (xdc_Char)0x35,  /* [1438] */
    (xdc_Char)0x35,  /* [1439] */
    (xdc_Char)0x33,  /* [1440] */
    (xdc_Char)0x35,  /* [1441] */
    (xdc_Char)0x20,  /* [1442] */
    (xdc_Char)0x61,  /* [1443] */
    (xdc_Char)0x6e,  /* [1444] */
    (xdc_Char)0x64,  /* [1445] */
    (xdc_Char)0x20,  /* [1446] */
    (xdc_Char)0x72,  /* [1447] */
    (xdc_Char)0x6f,  /* [1448] */
    (xdc_Char)0x6c,  /* [1449] */
    (xdc_Char)0x6c,  /* [1450] */
    (xdc_Char)0x65,  /* [1451] */
    (xdc_Char)0x64,  /* [1452] */
    (xdc_Char)0x20,  /* [1453] */
    (xdc_Char)0x6f,  /* [1454] */
    (xdc_Char)0x76,  /* [1455] */
    (xdc_Char)0x65,  /* [1456] */
    (xdc_Char)0x72,  /* [1457] */
    (xdc_Char)0x2e,  /* [1458] */
    (xdc_Char)0x0,  /* [1459] */
    (xdc_Char)0x41,  /* [1460] */
    (xdc_Char)0x5f,  /* [1461] */
    (xdc_Char)0x70,  /* [1462] */
    (xdc_Char)0x65,  /* [1463] */
    (xdc_Char)0x6e,  /* [1464] */
    (xdc_Char)0x64,  /* [1465] */
    (xdc_Char)0x54,  /* [1466] */
    (xdc_Char)0x61,  /* [1467] */
    (xdc_Char)0x73,  /* [1468] */
    (xdc_Char)0x6b,  /* [1469] */
    (xdc_Char)0x44,  /* [1470] */
    (xdc_Char)0x69,  /* [1471] */
    (xdc_Char)0x73,  /* [1472] */
    (xdc_Char)0x61,  /* [1473] */
    (xdc_Char)0x62,  /* [1474] */
    (xdc_Char)0x6c,  /* [1475] */
    (xdc_Char)0x65,  /* [1476] */
    (xdc_Char)0x64,  /* [1477] */
    (xdc_Char)0x3a,  /* [1478] */
    (xdc_Char)0x20,  /* [1479] */
    (xdc_Char)0x43,  /* [1480] */
    (xdc_Char)0x61,  /* [1481] */
    (xdc_Char)0x6e,  /* [1482] */
    (xdc_Char)0x6e,  /* [1483] */
    (xdc_Char)0x6f,  /* [1484] */
    (xdc_Char)0x74,  /* [1485] */
    (xdc_Char)0x20,  /* [1486] */
    (xdc_Char)0x63,  /* [1487] */
    (xdc_Char)0x61,  /* [1488] */
    (xdc_Char)0x6c,  /* [1489] */
    (xdc_Char)0x6c,  /* [1490] */
    (xdc_Char)0x20,  /* [1491] */
    (xdc_Char)0x53,  /* [1492] */
    (xdc_Char)0x65,  /* [1493] */
    (xdc_Char)0x6d,  /* [1494] */
    (xdc_Char)0x61,  /* [1495] */
    (xdc_Char)0x70,  /* [1496] */
    (xdc_Char)0x68,  /* [1497] */
    (xdc_Char)0x6f,  /* [1498] */
    (xdc_Char)0x72,  /* [1499] */
    (xdc_Char)0x65,  /* [1500] */
    (xdc_Char)0x5f,  /* [1501] */
    (xdc_Char)0x70,  /* [1502] */
    (xdc_Char)0x65,  /* [1503] */
    (xdc_Char)0x6e,  /* [1504] */
    (xdc_Char)0x64,  /* [1505] */
    (xdc_Char)0x28,  /* [1506] */
    (xdc_Char)0x29,  /* [1507] */
    (xdc_Char)0x20,  /* [1508] */
    (xdc_Char)0x77,  /* [1509] */
    (xdc_Char)0x68,  /* [1510] */
    (xdc_Char)0x69,  /* [1511] */
    (xdc_Char)0x6c,  /* [1512] */
    (xdc_Char)0x65,  /* [1513] */
    (xdc_Char)0x20,  /* [1514] */
    (xdc_Char)0x74,  /* [1515] */
    (xdc_Char)0x68,  /* [1516] */
    (xdc_Char)0x65,  /* [1517] */
    (xdc_Char)0x20,  /* [1518] */
    (xdc_Char)0x54,  /* [1519] */
    (xdc_Char)0x61,  /* [1520] */
    (xdc_Char)0x73,  /* [1521] */
    (xdc_Char)0x6b,  /* [1522] */
    (xdc_Char)0x20,  /* [1523] */
    (xdc_Char)0x6f,  /* [1524] */
    (xdc_Char)0x72,  /* [1525] */
    (xdc_Char)0x20,  /* [1526] */
    (xdc_Char)0x53,  /* [1527] */
    (xdc_Char)0x77,  /* [1528] */
    (xdc_Char)0x69,  /* [1529] */
    (xdc_Char)0x20,  /* [1530] */
    (xdc_Char)0x73,  /* [1531] */
    (xdc_Char)0x63,  /* [1532] */
    (xdc_Char)0x68,  /* [1533] */
    (xdc_Char)0x65,  /* [1534] */
    (xdc_Char)0x64,  /* [1535] */
    (xdc_Char)0x75,  /* [1536] */
    (xdc_Char)0x6c,  /* [1537] */
    (xdc_Char)0x65,  /* [1538] */
    (xdc_Char)0x72,  /* [1539] */
    (xdc_Char)0x20,  /* [1540] */
    (xdc_Char)0x69,  /* [1541] */
    (xdc_Char)0x73,  /* [1542] */
    (xdc_Char)0x20,  /* [1543] */
    (xdc_Char)0x64,  /* [1544] */
    (xdc_Char)0x69,  /* [1545] */
    (xdc_Char)0x73,  /* [1546] */
    (xdc_Char)0x61,  /* [1547] */
    (xdc_Char)0x62,  /* [1548] */
    (xdc_Char)0x6c,  /* [1549] */
    (xdc_Char)0x65,  /* [1550] */
    (xdc_Char)0x64,  /* [1551] */
    (xdc_Char)0x2e,  /* [1552] */
    (xdc_Char)0x0,  /* [1553] */
    (xdc_Char)0x41,  /* [1554] */
    (xdc_Char)0x5f,  /* [1555] */
    (xdc_Char)0x73,  /* [1556] */
    (xdc_Char)0x77,  /* [1557] */
    (xdc_Char)0x69,  /* [1558] */
    (xdc_Char)0x44,  /* [1559] */
    (xdc_Char)0x69,  /* [1560] */
    (xdc_Char)0x73,  /* [1561] */
    (xdc_Char)0x61,  /* [1562] */
    (xdc_Char)0x62,  /* [1563] */
    (xdc_Char)0x6c,  /* [1564] */
    (xdc_Char)0x65,  /* [1565] */
    (xdc_Char)0x64,  /* [1566] */
    (xdc_Char)0x3a,  /* [1567] */
    (xdc_Char)0x20,  /* [1568] */
    (xdc_Char)0x43,  /* [1569] */
    (xdc_Char)0x61,  /* [1570] */
    (xdc_Char)0x6e,  /* [1571] */
    (xdc_Char)0x6e,  /* [1572] */
    (xdc_Char)0x6f,  /* [1573] */
    (xdc_Char)0x74,  /* [1574] */
    (xdc_Char)0x20,  /* [1575] */
    (xdc_Char)0x63,  /* [1576] */
    (xdc_Char)0x72,  /* [1577] */
    (xdc_Char)0x65,  /* [1578] */
    (xdc_Char)0x61,  /* [1579] */
    (xdc_Char)0x74,  /* [1580] */
    (xdc_Char)0x65,  /* [1581] */
    (xdc_Char)0x20,  /* [1582] */
    (xdc_Char)0x61,  /* [1583] */
    (xdc_Char)0x20,  /* [1584] */
    (xdc_Char)0x53,  /* [1585] */
    (xdc_Char)0x77,  /* [1586] */
    (xdc_Char)0x69,  /* [1587] */
    (xdc_Char)0x20,  /* [1588] */
    (xdc_Char)0x77,  /* [1589] */
    (xdc_Char)0x68,  /* [1590] */
    (xdc_Char)0x65,  /* [1591] */
    (xdc_Char)0x6e,  /* [1592] */
    (xdc_Char)0x20,  /* [1593] */
    (xdc_Char)0x53,  /* [1594] */
    (xdc_Char)0x77,  /* [1595] */
    (xdc_Char)0x69,  /* [1596] */
    (xdc_Char)0x20,  /* [1597] */
    (xdc_Char)0x69,  /* [1598] */
    (xdc_Char)0x73,  /* [1599] */
    (xdc_Char)0x20,  /* [1600] */
    (xdc_Char)0x64,  /* [1601] */
    (xdc_Char)0x69,  /* [1602] */
    (xdc_Char)0x73,  /* [1603] */
    (xdc_Char)0x61,  /* [1604] */
    (xdc_Char)0x62,  /* [1605] */
    (xdc_Char)0x6c,  /* [1606] */
    (xdc_Char)0x65,  /* [1607] */
    (xdc_Char)0x64,  /* [1608] */
    (xdc_Char)0x2e,  /* [1609] */
    (xdc_Char)0x0,  /* [1610] */
    (xdc_Char)0x41,  /* [1611] */
    (xdc_Char)0x5f,  /* [1612] */
    (xdc_Char)0x62,  /* [1613] */
    (xdc_Char)0x61,  /* [1614] */
    (xdc_Char)0x64,  /* [1615] */
    (xdc_Char)0x50,  /* [1616] */
    (xdc_Char)0x72,  /* [1617] */
    (xdc_Char)0x69,  /* [1618] */
    (xdc_Char)0x6f,  /* [1619] */
    (xdc_Char)0x72,  /* [1620] */
    (xdc_Char)0x69,  /* [1621] */
    (xdc_Char)0x74,  /* [1622] */
    (xdc_Char)0x79,  /* [1623] */
    (xdc_Char)0x3a,  /* [1624] */
    (xdc_Char)0x20,  /* [1625] */
    (xdc_Char)0x41,  /* [1626] */
    (xdc_Char)0x6e,  /* [1627] */
    (xdc_Char)0x20,  /* [1628] */
    (xdc_Char)0x69,  /* [1629] */
    (xdc_Char)0x6e,  /* [1630] */
    (xdc_Char)0x76,  /* [1631] */
    (xdc_Char)0x61,  /* [1632] */
    (xdc_Char)0x6c,  /* [1633] */
    (xdc_Char)0x69,  /* [1634] */
    (xdc_Char)0x64,  /* [1635] */
    (xdc_Char)0x20,  /* [1636] */
    (xdc_Char)0x53,  /* [1637] */
    (xdc_Char)0x77,  /* [1638] */
    (xdc_Char)0x69,  /* [1639] */
    (xdc_Char)0x20,  /* [1640] */
    (xdc_Char)0x70,  /* [1641] */
    (xdc_Char)0x72,  /* [1642] */
    (xdc_Char)0x69,  /* [1643] */
    (xdc_Char)0x6f,  /* [1644] */
    (xdc_Char)0x72,  /* [1645] */
    (xdc_Char)0x69,  /* [1646] */
    (xdc_Char)0x74,  /* [1647] */
    (xdc_Char)0x79,  /* [1648] */
    (xdc_Char)0x20,  /* [1649] */
    (xdc_Char)0x77,  /* [1650] */
    (xdc_Char)0x61,  /* [1651] */
    (xdc_Char)0x73,  /* [1652] */
    (xdc_Char)0x20,  /* [1653] */
    (xdc_Char)0x75,  /* [1654] */
    (xdc_Char)0x73,  /* [1655] */
    (xdc_Char)0x65,  /* [1656] */
    (xdc_Char)0x64,  /* [1657] */
    (xdc_Char)0x2e,  /* [1658] */
    (xdc_Char)0x0,  /* [1659] */
    (xdc_Char)0x41,  /* [1660] */
    (xdc_Char)0x5f,  /* [1661] */
    (xdc_Char)0x62,  /* [1662] */
    (xdc_Char)0x61,  /* [1663] */
    (xdc_Char)0x64,  /* [1664] */
    (xdc_Char)0x54,  /* [1665] */
    (xdc_Char)0x68,  /* [1666] */
    (xdc_Char)0x72,  /* [1667] */
    (xdc_Char)0x65,  /* [1668] */
    (xdc_Char)0x61,  /* [1669] */
    (xdc_Char)0x64,  /* [1670] */
    (xdc_Char)0x54,  /* [1671] */
    (xdc_Char)0x79,  /* [1672] */
    (xdc_Char)0x70,  /* [1673] */
    (xdc_Char)0x65,  /* [1674] */
    (xdc_Char)0x3a,  /* [1675] */
    (xdc_Char)0x20,  /* [1676] */
    (xdc_Char)0x43,  /* [1677] */
    (xdc_Char)0x61,  /* [1678] */
    (xdc_Char)0x6e,  /* [1679] */
    (xdc_Char)0x6e,  /* [1680] */
    (xdc_Char)0x6f,  /* [1681] */
    (xdc_Char)0x74,  /* [1682] */
    (xdc_Char)0x20,  /* [1683] */
    (xdc_Char)0x63,  /* [1684] */
    (xdc_Char)0x72,  /* [1685] */
    (xdc_Char)0x65,  /* [1686] */
    (xdc_Char)0x61,  /* [1687] */
    (xdc_Char)0x74,  /* [1688] */
    (xdc_Char)0x65,  /* [1689] */
    (xdc_Char)0x2f,  /* [1690] */
    (xdc_Char)0x64,  /* [1691] */
    (xdc_Char)0x65,  /* [1692] */
    (xdc_Char)0x6c,  /* [1693] */
    (xdc_Char)0x65,  /* [1694] */
    (xdc_Char)0x74,  /* [1695] */
    (xdc_Char)0x65,  /* [1696] */
    (xdc_Char)0x20,  /* [1697] */
    (xdc_Char)0x61,  /* [1698] */
    (xdc_Char)0x20,  /* [1699] */
    (xdc_Char)0x74,  /* [1700] */
    (xdc_Char)0x61,  /* [1701] */
    (xdc_Char)0x73,  /* [1702] */
    (xdc_Char)0x6b,  /* [1703] */
    (xdc_Char)0x20,  /* [1704] */
    (xdc_Char)0x66,  /* [1705] */
    (xdc_Char)0x72,  /* [1706] */
    (xdc_Char)0x6f,  /* [1707] */
    (xdc_Char)0x6d,  /* [1708] */
    (xdc_Char)0x20,  /* [1709] */
    (xdc_Char)0x48,  /* [1710] */
    (xdc_Char)0x77,  /* [1711] */
    (xdc_Char)0x69,  /* [1712] */
    (xdc_Char)0x20,  /* [1713] */
    (xdc_Char)0x6f,  /* [1714] */
    (xdc_Char)0x72,  /* [1715] */
    (xdc_Char)0x20,  /* [1716] */
    (xdc_Char)0x53,  /* [1717] */
    (xdc_Char)0x77,  /* [1718] */
    (xdc_Char)0x69,  /* [1719] */
    (xdc_Char)0x20,  /* [1720] */
    (xdc_Char)0x74,  /* [1721] */
    (xdc_Char)0x68,  /* [1722] */
    (xdc_Char)0x72,  /* [1723] */
    (xdc_Char)0x65,  /* [1724] */
    (xdc_Char)0x61,  /* [1725] */
    (xdc_Char)0x64,  /* [1726] */
    (xdc_Char)0x2e,  /* [1727] */
    (xdc_Char)0x0,  /* [1728] */
    (xdc_Char)0x41,  /* [1729] */
    (xdc_Char)0x5f,  /* [1730] */
    (xdc_Char)0x62,  /* [1731] */
    (xdc_Char)0x61,  /* [1732] */
    (xdc_Char)0x64,  /* [1733] */
    (xdc_Char)0x54,  /* [1734] */
    (xdc_Char)0x61,  /* [1735] */
    (xdc_Char)0x73,  /* [1736] */
    (xdc_Char)0x6b,  /* [1737] */
    (xdc_Char)0x53,  /* [1738] */
    (xdc_Char)0x74,  /* [1739] */
    (xdc_Char)0x61,  /* [1740] */
    (xdc_Char)0x74,  /* [1741] */
    (xdc_Char)0x65,  /* [1742] */
    (xdc_Char)0x3a,  /* [1743] */
    (xdc_Char)0x20,  /* [1744] */
    (xdc_Char)0x43,  /* [1745] */
    (xdc_Char)0x61,  /* [1746] */
    (xdc_Char)0x6e,  /* [1747] */
    (xdc_Char)0x27,  /* [1748] */
    (xdc_Char)0x74,  /* [1749] */
    (xdc_Char)0x20,  /* [1750] */
    (xdc_Char)0x64,  /* [1751] */
    (xdc_Char)0x65,  /* [1752] */
    (xdc_Char)0x6c,  /* [1753] */
    (xdc_Char)0x65,  /* [1754] */
    (xdc_Char)0x74,  /* [1755] */
    (xdc_Char)0x65,  /* [1756] */
    (xdc_Char)0x20,  /* [1757] */
    (xdc_Char)0x61,  /* [1758] */
    (xdc_Char)0x20,  /* [1759] */
    (xdc_Char)0x74,  /* [1760] */
    (xdc_Char)0x61,  /* [1761] */
    (xdc_Char)0x73,  /* [1762] */
    (xdc_Char)0x6b,  /* [1763] */
    (xdc_Char)0x20,  /* [1764] */
    (xdc_Char)0x69,  /* [1765] */
    (xdc_Char)0x6e,  /* [1766] */
    (xdc_Char)0x20,  /* [1767] */
    (xdc_Char)0x52,  /* [1768] */
    (xdc_Char)0x55,  /* [1769] */
    (xdc_Char)0x4e,  /* [1770] */
    (xdc_Char)0x4e,  /* [1771] */
    (xdc_Char)0x49,  /* [1772] */
    (xdc_Char)0x4e,  /* [1773] */
    (xdc_Char)0x47,  /* [1774] */
    (xdc_Char)0x20,  /* [1775] */
    (xdc_Char)0x73,  /* [1776] */
    (xdc_Char)0x74,  /* [1777] */
    (xdc_Char)0x61,  /* [1778] */
    (xdc_Char)0x74,  /* [1779] */
    (xdc_Char)0x65,  /* [1780] */
    (xdc_Char)0x2e,  /* [1781] */
    (xdc_Char)0x0,  /* [1782] */
    (xdc_Char)0x41,  /* [1783] */
    (xdc_Char)0x5f,  /* [1784] */
    (xdc_Char)0x6e,  /* [1785] */
    (xdc_Char)0x6f,  /* [1786] */
    (xdc_Char)0x50,  /* [1787] */
    (xdc_Char)0x65,  /* [1788] */
    (xdc_Char)0x6e,  /* [1789] */
    (xdc_Char)0x64,  /* [1790] */
    (xdc_Char)0x45,  /* [1791] */
    (xdc_Char)0x6c,  /* [1792] */
    (xdc_Char)0x65,  /* [1793] */
    (xdc_Char)0x6d,  /* [1794] */
    (xdc_Char)0x3a,  /* [1795] */
    (xdc_Char)0x20,  /* [1796] */
    (xdc_Char)0x4e,  /* [1797] */
    (xdc_Char)0x6f,  /* [1798] */
    (xdc_Char)0x74,  /* [1799] */
    (xdc_Char)0x20,  /* [1800] */
    (xdc_Char)0x65,  /* [1801] */
    (xdc_Char)0x6e,  /* [1802] */
    (xdc_Char)0x6f,  /* [1803] */
    (xdc_Char)0x75,  /* [1804] */
    (xdc_Char)0x67,  /* [1805] */
    (xdc_Char)0x68,  /* [1806] */
    (xdc_Char)0x20,  /* [1807] */
    (xdc_Char)0x69,  /* [1808] */
    (xdc_Char)0x6e,  /* [1809] */
    (xdc_Char)0x66,  /* [1810] */
    (xdc_Char)0x6f,  /* [1811] */
    (xdc_Char)0x20,  /* [1812] */
    (xdc_Char)0x74,  /* [1813] */
    (xdc_Char)0x6f,  /* [1814] */
    (xdc_Char)0x20,  /* [1815] */
    (xdc_Char)0x64,  /* [1816] */
    (xdc_Char)0x65,  /* [1817] */
    (xdc_Char)0x6c,  /* [1818] */
    (xdc_Char)0x65,  /* [1819] */
    (xdc_Char)0x74,  /* [1820] */
    (xdc_Char)0x65,  /* [1821] */
    (xdc_Char)0x20,  /* [1822] */
    (xdc_Char)0x42,  /* [1823] */
    (xdc_Char)0x4c,  /* [1824] */
    (xdc_Char)0x4f,  /* [1825] */
    (xdc_Char)0x43,  /* [1826] */
    (xdc_Char)0x4b,  /* [1827] */
    (xdc_Char)0x45,  /* [1828] */
    (xdc_Char)0x44,  /* [1829] */
    (xdc_Char)0x20,  /* [1830] */
    (xdc_Char)0x74,  /* [1831] */
    (xdc_Char)0x61,  /* [1832] */
    (xdc_Char)0x73,  /* [1833] */
    (xdc_Char)0x6b,  /* [1834] */
    (xdc_Char)0x2e,  /* [1835] */
    (xdc_Char)0x0,  /* [1836] */
    (xdc_Char)0x41,  /* [1837] */
    (xdc_Char)0x5f,  /* [1838] */
    (xdc_Char)0x74,  /* [1839] */
    (xdc_Char)0x61,  /* [1840] */
    (xdc_Char)0x73,  /* [1841] */
    (xdc_Char)0x6b,  /* [1842] */
    (xdc_Char)0x44,  /* [1843] */
    (xdc_Char)0x69,  /* [1844] */
    (xdc_Char)0x73,  /* [1845] */
    (xdc_Char)0x61,  /* [1846] */
    (xdc_Char)0x62,  /* [1847] */
    (xdc_Char)0x6c,  /* [1848] */
    (xdc_Char)0x65,  /* [1849] */
    (xdc_Char)0x64,  /* [1850] */
    (xdc_Char)0x3a,  /* [1851] */
    (xdc_Char)0x20,  /* [1852] */
    (xdc_Char)0x43,  /* [1853] */
    (xdc_Char)0x61,  /* [1854] */
    (xdc_Char)0x6e,  /* [1855] */
    (xdc_Char)0x6e,  /* [1856] */
    (xdc_Char)0x6f,  /* [1857] */
    (xdc_Char)0x74,  /* [1858] */
    (xdc_Char)0x20,  /* [1859] */
    (xdc_Char)0x63,  /* [1860] */
    (xdc_Char)0x72,  /* [1861] */
    (xdc_Char)0x65,  /* [1862] */
    (xdc_Char)0x61,  /* [1863] */
    (xdc_Char)0x74,  /* [1864] */
    (xdc_Char)0x65,  /* [1865] */
    (xdc_Char)0x20,  /* [1866] */
    (xdc_Char)0x61,  /* [1867] */
    (xdc_Char)0x20,  /* [1868] */
    (xdc_Char)0x74,  /* [1869] */
    (xdc_Char)0x61,  /* [1870] */
    (xdc_Char)0x73,  /* [1871] */
    (xdc_Char)0x6b,  /* [1872] */
    (xdc_Char)0x20,  /* [1873] */
    (xdc_Char)0x77,  /* [1874] */
    (xdc_Char)0x68,  /* [1875] */
    (xdc_Char)0x65,  /* [1876] */
    (xdc_Char)0x6e,  /* [1877] */
    (xdc_Char)0x20,  /* [1878] */
    (xdc_Char)0x74,  /* [1879] */
    (xdc_Char)0x61,  /* [1880] */
    (xdc_Char)0x73,  /* [1881] */
    (xdc_Char)0x6b,  /* [1882] */
    (xdc_Char)0x69,  /* [1883] */
    (xdc_Char)0x6e,  /* [1884] */
    (xdc_Char)0x67,  /* [1885] */
    (xdc_Char)0x20,  /* [1886] */
    (xdc_Char)0x69,  /* [1887] */
    (xdc_Char)0x73,  /* [1888] */
    (xdc_Char)0x20,  /* [1889] */
    (xdc_Char)0x64,  /* [1890] */
    (xdc_Char)0x69,  /* [1891] */
    (xdc_Char)0x73,  /* [1892] */
    (xdc_Char)0x61,  /* [1893] */
    (xdc_Char)0x62,  /* [1894] */
    (xdc_Char)0x6c,  /* [1895] */
    (xdc_Char)0x65,  /* [1896] */
    (xdc_Char)0x64,  /* [1897] */
    (xdc_Char)0x2e,  /* [1898] */
    (xdc_Char)0x0,  /* [1899] */
    (xdc_Char)0x41,  /* [1900] */
    (xdc_Char)0x5f,  /* [1901] */
    (xdc_Char)0x62,  /* [1902] */
    (xdc_Char)0x61,  /* [1903] */
    (xdc_Char)0x64,  /* [1904] */
    (xdc_Char)0x50,  /* [1905] */
    (xdc_Char)0x72,  /* [1906] */
    (xdc_Char)0x69,  /* [1907] */
    (xdc_Char)0x6f,  /* [1908] */
    (xdc_Char)0x72,  /* [1909] */
    (xdc_Char)0x69,  /* [1910] */
    (xdc_Char)0x74,  /* [1911] */
    (xdc_Char)0x79,  /* [1912] */
    (xdc_Char)0x3a,  /* [1913] */
    (xdc_Char)0x20,  /* [1914] */
    (xdc_Char)0x41,  /* [1915] */
    (xdc_Char)0x6e,  /* [1916] */
    (xdc_Char)0x20,  /* [1917] */
    (xdc_Char)0x69,  /* [1918] */
    (xdc_Char)0x6e,  /* [1919] */
    (xdc_Char)0x76,  /* [1920] */
    (xdc_Char)0x61,  /* [1921] */
    (xdc_Char)0x6c,  /* [1922] */
    (xdc_Char)0x69,  /* [1923] */
    (xdc_Char)0x64,  /* [1924] */
    (xdc_Char)0x20,  /* [1925] */
    (xdc_Char)0x74,  /* [1926] */
    (xdc_Char)0x61,  /* [1927] */
    (xdc_Char)0x73,  /* [1928] */
    (xdc_Char)0x6b,  /* [1929] */
    (xdc_Char)0x20,  /* [1930] */
    (xdc_Char)0x70,  /* [1931] */
    (xdc_Char)0x72,  /* [1932] */
    (xdc_Char)0x69,  /* [1933] */
    (xdc_Char)0x6f,  /* [1934] */
    (xdc_Char)0x72,  /* [1935] */
    (xdc_Char)0x69,  /* [1936] */
    (xdc_Char)0x74,  /* [1937] */
    (xdc_Char)0x79,  /* [1938] */
    (xdc_Char)0x20,  /* [1939] */
    (xdc_Char)0x77,  /* [1940] */
    (xdc_Char)0x61,  /* [1941] */
    (xdc_Char)0x73,  /* [1942] */
    (xdc_Char)0x20,  /* [1943] */
    (xdc_Char)0x75,  /* [1944] */
    (xdc_Char)0x73,  /* [1945] */
    (xdc_Char)0x65,  /* [1946] */
    (xdc_Char)0x64,  /* [1947] */
    (xdc_Char)0x2e,  /* [1948] */
    (xdc_Char)0x0,  /* [1949] */
    (xdc_Char)0x41,  /* [1950] */
    (xdc_Char)0x5f,  /* [1951] */
    (xdc_Char)0x62,  /* [1952] */
    (xdc_Char)0x61,  /* [1953] */
    (xdc_Char)0x64,  /* [1954] */
    (xdc_Char)0x54,  /* [1955] */
    (xdc_Char)0x69,  /* [1956] */
    (xdc_Char)0x6d,  /* [1957] */
    (xdc_Char)0x65,  /* [1958] */
    (xdc_Char)0x6f,  /* [1959] */
    (xdc_Char)0x75,  /* [1960] */
    (xdc_Char)0x74,  /* [1961] */
    (xdc_Char)0x3a,  /* [1962] */
    (xdc_Char)0x20,  /* [1963] */
    (xdc_Char)0x43,  /* [1964] */
    (xdc_Char)0x61,  /* [1965] */
    (xdc_Char)0x6e,  /* [1966] */
    (xdc_Char)0x27,  /* [1967] */
    (xdc_Char)0x74,  /* [1968] */
    (xdc_Char)0x20,  /* [1969] */
    (xdc_Char)0x73,  /* [1970] */
    (xdc_Char)0x6c,  /* [1971] */
    (xdc_Char)0x65,  /* [1972] */
    (xdc_Char)0x65,  /* [1973] */
    (xdc_Char)0x70,  /* [1974] */
    (xdc_Char)0x20,  /* [1975] */
    (xdc_Char)0x46,  /* [1976] */
    (xdc_Char)0x4f,  /* [1977] */
    (xdc_Char)0x52,  /* [1978] */
    (xdc_Char)0x45,  /* [1979] */
    (xdc_Char)0x56,  /* [1980] */
    (xdc_Char)0x45,  /* [1981] */
    (xdc_Char)0x52,  /* [1982] */
    (xdc_Char)0x2e,  /* [1983] */
    (xdc_Char)0x0,  /* [1984] */
    (xdc_Char)0x41,  /* [1985] */
    (xdc_Char)0x5f,  /* [1986] */
    (xdc_Char)0x62,  /* [1987] */
    (xdc_Char)0x61,  /* [1988] */
    (xdc_Char)0x64,  /* [1989] */
    (xdc_Char)0x41,  /* [1990] */
    (xdc_Char)0x66,  /* [1991] */
    (xdc_Char)0x66,  /* [1992] */
    (xdc_Char)0x69,  /* [1993] */
    (xdc_Char)0x6e,  /* [1994] */
    (xdc_Char)0x69,  /* [1995] */
    (xdc_Char)0x74,  /* [1996] */
    (xdc_Char)0x79,  /* [1997] */
    (xdc_Char)0x3a,  /* [1998] */
    (xdc_Char)0x20,  /* [1999] */
    (xdc_Char)0x49,  /* [2000] */
    (xdc_Char)0x6e,  /* [2001] */
    (xdc_Char)0x76,  /* [2002] */
    (xdc_Char)0x61,  /* [2003] */
    (xdc_Char)0x6c,  /* [2004] */
    (xdc_Char)0x69,  /* [2005] */
    (xdc_Char)0x64,  /* [2006] */
    (xdc_Char)0x20,  /* [2007] */
    (xdc_Char)0x61,  /* [2008] */
    (xdc_Char)0x66,  /* [2009] */
    (xdc_Char)0x66,  /* [2010] */
    (xdc_Char)0x69,  /* [2011] */
    (xdc_Char)0x6e,  /* [2012] */
    (xdc_Char)0x69,  /* [2013] */
    (xdc_Char)0x74,  /* [2014] */
    (xdc_Char)0x79,  /* [2015] */
    (xdc_Char)0x2e,  /* [2016] */
    (xdc_Char)0x0,  /* [2017] */
    (xdc_Char)0x41,  /* [2018] */
    (xdc_Char)0x5f,  /* [2019] */
    (xdc_Char)0x73,  /* [2020] */
    (xdc_Char)0x6c,  /* [2021] */
    (xdc_Char)0x65,  /* [2022] */
    (xdc_Char)0x65,  /* [2023] */
    (xdc_Char)0x70,  /* [2024] */
    (xdc_Char)0x54,  /* [2025] */
    (xdc_Char)0x61,  /* [2026] */
    (xdc_Char)0x73,  /* [2027] */
    (xdc_Char)0x6b,  /* [2028] */
    (xdc_Char)0x44,  /* [2029] */
    (xdc_Char)0x69,  /* [2030] */
    (xdc_Char)0x73,  /* [2031] */
    (xdc_Char)0x61,  /* [2032] */
    (xdc_Char)0x62,  /* [2033] */
    (xdc_Char)0x6c,  /* [2034] */
    (xdc_Char)0x65,  /* [2035] */
    (xdc_Char)0x64,  /* [2036] */
    (xdc_Char)0x3a,  /* [2037] */
    (xdc_Char)0x20,  /* [2038] */
    (xdc_Char)0x43,  /* [2039] */
    (xdc_Char)0x61,  /* [2040] */
    (xdc_Char)0x6e,  /* [2041] */
    (xdc_Char)0x6e,  /* [2042] */
    (xdc_Char)0x6f,  /* [2043] */
    (xdc_Char)0x74,  /* [2044] */
    (xdc_Char)0x20,  /* [2045] */
    (xdc_Char)0x63,  /* [2046] */
    (xdc_Char)0x61,  /* [2047] */
    (xdc_Char)0x6c,  /* [2048] */
    (xdc_Char)0x6c,  /* [2049] */
    (xdc_Char)0x20,  /* [2050] */
    (xdc_Char)0x54,  /* [2051] */
    (xdc_Char)0x61,  /* [2052] */
    (xdc_Char)0x73,  /* [2053] */
    (xdc_Char)0x6b,  /* [2054] */
    (xdc_Char)0x5f,  /* [2055] */
    (xdc_Char)0x73,  /* [2056] */
    (xdc_Char)0x6c,  /* [2057] */
    (xdc_Char)0x65,  /* [2058] */
    (xdc_Char)0x65,  /* [2059] */
    (xdc_Char)0x70,  /* [2060] */
    (xdc_Char)0x28,  /* [2061] */
    (xdc_Char)0x29,  /* [2062] */
    (xdc_Char)0x20,  /* [2063] */
    (xdc_Char)0x77,  /* [2064] */
    (xdc_Char)0x68,  /* [2065] */
    (xdc_Char)0x69,  /* [2066] */
    (xdc_Char)0x6c,  /* [2067] */
    (xdc_Char)0x65,  /* [2068] */
    (xdc_Char)0x20,  /* [2069] */
    (xdc_Char)0x74,  /* [2070] */
    (xdc_Char)0x68,  /* [2071] */
    (xdc_Char)0x65,  /* [2072] */
    (xdc_Char)0x20,  /* [2073] */
    (xdc_Char)0x54,  /* [2074] */
    (xdc_Char)0x61,  /* [2075] */
    (xdc_Char)0x73,  /* [2076] */
    (xdc_Char)0x6b,  /* [2077] */
    (xdc_Char)0x20,  /* [2078] */
    (xdc_Char)0x73,  /* [2079] */
    (xdc_Char)0x63,  /* [2080] */
    (xdc_Char)0x68,  /* [2081] */
    (xdc_Char)0x65,  /* [2082] */
    (xdc_Char)0x64,  /* [2083] */
    (xdc_Char)0x75,  /* [2084] */
    (xdc_Char)0x6c,  /* [2085] */
    (xdc_Char)0x65,  /* [2086] */
    (xdc_Char)0x72,  /* [2087] */
    (xdc_Char)0x20,  /* [2088] */
    (xdc_Char)0x69,  /* [2089] */
    (xdc_Char)0x73,  /* [2090] */
    (xdc_Char)0x20,  /* [2091] */
    (xdc_Char)0x64,  /* [2092] */
    (xdc_Char)0x69,  /* [2093] */
    (xdc_Char)0x73,  /* [2094] */
    (xdc_Char)0x61,  /* [2095] */
    (xdc_Char)0x62,  /* [2096] */
    (xdc_Char)0x6c,  /* [2097] */
    (xdc_Char)0x65,  /* [2098] */
    (xdc_Char)0x64,  /* [2099] */
    (xdc_Char)0x2e,  /* [2100] */
    (xdc_Char)0x0,  /* [2101] */
    (xdc_Char)0x41,  /* [2102] */
    (xdc_Char)0x5f,  /* [2103] */
    (xdc_Char)0x69,  /* [2104] */
    (xdc_Char)0x6e,  /* [2105] */
    (xdc_Char)0x76,  /* [2106] */
    (xdc_Char)0x61,  /* [2107] */
    (xdc_Char)0x6c,  /* [2108] */
    (xdc_Char)0x69,  /* [2109] */
    (xdc_Char)0x64,  /* [2110] */
    (xdc_Char)0x43,  /* [2111] */
    (xdc_Char)0x6f,  /* [2112] */
    (xdc_Char)0x72,  /* [2113] */
    (xdc_Char)0x65,  /* [2114] */
    (xdc_Char)0x49,  /* [2115] */
    (xdc_Char)0x64,  /* [2116] */
    (xdc_Char)0x3a,  /* [2117] */
    (xdc_Char)0x20,  /* [2118] */
    (xdc_Char)0x43,  /* [2119] */
    (xdc_Char)0x61,  /* [2120] */
    (xdc_Char)0x6e,  /* [2121] */
    (xdc_Char)0x6e,  /* [2122] */
    (xdc_Char)0x6f,  /* [2123] */
    (xdc_Char)0x74,  /* [2124] */
    (xdc_Char)0x20,  /* [2125] */
    (xdc_Char)0x70,  /* [2126] */
    (xdc_Char)0x61,  /* [2127] */
    (xdc_Char)0x73,  /* [2128] */
    (xdc_Char)0x73,  /* [2129] */
    (xdc_Char)0x20,  /* [2130] */
    (xdc_Char)0x61,  /* [2131] */
    (xdc_Char)0x20,  /* [2132] */
    (xdc_Char)0x6e,  /* [2133] */
    (xdc_Char)0x6f,  /* [2134] */
    (xdc_Char)0x6e,  /* [2135] */
    (xdc_Char)0x2d,  /* [2136] */
    (xdc_Char)0x7a,  /* [2137] */
    (xdc_Char)0x65,  /* [2138] */
    (xdc_Char)0x72,  /* [2139] */
    (xdc_Char)0x6f,  /* [2140] */
    (xdc_Char)0x20,  /* [2141] */
    (xdc_Char)0x43,  /* [2142] */
    (xdc_Char)0x6f,  /* [2143] */
    (xdc_Char)0x72,  /* [2144] */
    (xdc_Char)0x65,  /* [2145] */
    (xdc_Char)0x49,  /* [2146] */
    (xdc_Char)0x64,  /* [2147] */
    (xdc_Char)0x20,  /* [2148] */
    (xdc_Char)0x69,  /* [2149] */
    (xdc_Char)0x6e,  /* [2150] */
    (xdc_Char)0x20,  /* [2151] */
    (xdc_Char)0x61,  /* [2152] */
    (xdc_Char)0x20,  /* [2153] */
    (xdc_Char)0x6e,  /* [2154] */
    (xdc_Char)0x6f,  /* [2155] */
    (xdc_Char)0x6e,  /* [2156] */
    (xdc_Char)0x2d,  /* [2157] */
    (xdc_Char)0x53,  /* [2158] */
    (xdc_Char)0x4d,  /* [2159] */
    (xdc_Char)0x50,  /* [2160] */
    (xdc_Char)0x20,  /* [2161] */
    (xdc_Char)0x61,  /* [2162] */
    (xdc_Char)0x70,  /* [2163] */
    (xdc_Char)0x70,  /* [2164] */
    (xdc_Char)0x6c,  /* [2165] */
    (xdc_Char)0x69,  /* [2166] */
    (xdc_Char)0x63,  /* [2167] */
    (xdc_Char)0x61,  /* [2168] */
    (xdc_Char)0x74,  /* [2169] */
    (xdc_Char)0x69,  /* [2170] */
    (xdc_Char)0x6f,  /* [2171] */
    (xdc_Char)0x6e,  /* [2172] */
    (xdc_Char)0x2e,  /* [2173] */
    (xdc_Char)0x0,  /* [2174] */
    (xdc_Char)0x41,  /* [2175] */
    (xdc_Char)0x5f,  /* [2176] */
    (xdc_Char)0x7a,  /* [2177] */
    (xdc_Char)0x65,  /* [2178] */
    (xdc_Char)0x72,  /* [2179] */
    (xdc_Char)0x6f,  /* [2180] */
    (xdc_Char)0x54,  /* [2181] */
    (xdc_Char)0x69,  /* [2182] */
    (xdc_Char)0x6d,  /* [2183] */
    (xdc_Char)0x65,  /* [2184] */
    (xdc_Char)0x6f,  /* [2185] */
    (xdc_Char)0x75,  /* [2186] */
    (xdc_Char)0x74,  /* [2187] */
    (xdc_Char)0x3a,  /* [2188] */
    (xdc_Char)0x20,  /* [2189] */
    (xdc_Char)0x54,  /* [2190] */
    (xdc_Char)0x69,  /* [2191] */
    (xdc_Char)0x6d,  /* [2192] */
    (xdc_Char)0x65,  /* [2193] */
    (xdc_Char)0x6f,  /* [2194] */
    (xdc_Char)0x75,  /* [2195] */
    (xdc_Char)0x74,  /* [2196] */
    (xdc_Char)0x20,  /* [2197] */
    (xdc_Char)0x76,  /* [2198] */
    (xdc_Char)0x61,  /* [2199] */
    (xdc_Char)0x6c,  /* [2200] */
    (xdc_Char)0x75,  /* [2201] */
    (xdc_Char)0x65,  /* [2202] */
    (xdc_Char)0x20,  /* [2203] */
    (xdc_Char)0x61,  /* [2204] */
    (xdc_Char)0x6e,  /* [2205] */
    (xdc_Char)0x6e,  /* [2206] */
    (xdc_Char)0x6f,  /* [2207] */
    (xdc_Char)0x74,  /* [2208] */
    (xdc_Char)0x20,  /* [2209] */
    (xdc_Char)0x62,  /* [2210] */
    (xdc_Char)0x65,  /* [2211] */
    (xdc_Char)0x20,  /* [2212] */
    (xdc_Char)0x7a,  /* [2213] */
    (xdc_Char)0x65,  /* [2214] */
    (xdc_Char)0x72,  /* [2215] */
    (xdc_Char)0x6f,  /* [2216] */
    (xdc_Char)0x0,  /* [2217] */
    (xdc_Char)0x41,  /* [2218] */
    (xdc_Char)0x5f,  /* [2219] */
    (xdc_Char)0x69,  /* [2220] */
    (xdc_Char)0x6e,  /* [2221] */
    (xdc_Char)0x76,  /* [2222] */
    (xdc_Char)0x61,  /* [2223] */
    (xdc_Char)0x6c,  /* [2224] */
    (xdc_Char)0x69,  /* [2225] */
    (xdc_Char)0x64,  /* [2226] */
    (xdc_Char)0x4b,  /* [2227] */
    (xdc_Char)0x65,  /* [2228] */
    (xdc_Char)0x79,  /* [2229] */
    (xdc_Char)0x3a,  /* [2230] */
    (xdc_Char)0x20,  /* [2231] */
    (xdc_Char)0x74,  /* [2232] */
    (xdc_Char)0x68,  /* [2233] */
    (xdc_Char)0x65,  /* [2234] */
    (xdc_Char)0x20,  /* [2235] */
    (xdc_Char)0x6b,  /* [2236] */
    (xdc_Char)0x65,  /* [2237] */
    (xdc_Char)0x79,  /* [2238] */
    (xdc_Char)0x20,  /* [2239] */
    (xdc_Char)0x6d,  /* [2240] */
    (xdc_Char)0x75,  /* [2241] */
    (xdc_Char)0x73,  /* [2242] */
    (xdc_Char)0x74,  /* [2243] */
    (xdc_Char)0x20,  /* [2244] */
    (xdc_Char)0x62,  /* [2245] */
    (xdc_Char)0x65,  /* [2246] */
    (xdc_Char)0x20,  /* [2247] */
    (xdc_Char)0x73,  /* [2248] */
    (xdc_Char)0x65,  /* [2249] */
    (xdc_Char)0x74,  /* [2250] */
    (xdc_Char)0x20,  /* [2251] */
    (xdc_Char)0x74,  /* [2252] */
    (xdc_Char)0x6f,  /* [2253] */
    (xdc_Char)0x20,  /* [2254] */
    (xdc_Char)0x61,  /* [2255] */
    (xdc_Char)0x20,  /* [2256] */
    (xdc_Char)0x6e,  /* [2257] */
    (xdc_Char)0x6f,  /* [2258] */
    (xdc_Char)0x6e,  /* [2259] */
    (xdc_Char)0x2d,  /* [2260] */
    (xdc_Char)0x64,  /* [2261] */
    (xdc_Char)0x65,  /* [2262] */
    (xdc_Char)0x66,  /* [2263] */
    (xdc_Char)0x61,  /* [2264] */
    (xdc_Char)0x75,  /* [2265] */
    (xdc_Char)0x6c,  /* [2266] */
    (xdc_Char)0x74,  /* [2267] */
    (xdc_Char)0x20,  /* [2268] */
    (xdc_Char)0x76,  /* [2269] */
    (xdc_Char)0x61,  /* [2270] */
    (xdc_Char)0x6c,  /* [2271] */
    (xdc_Char)0x75,  /* [2272] */
    (xdc_Char)0x65,  /* [2273] */
    (xdc_Char)0x0,  /* [2274] */
    (xdc_Char)0x41,  /* [2275] */
    (xdc_Char)0x5f,  /* [2276] */
    (xdc_Char)0x6e,  /* [2277] */
    (xdc_Char)0x75,  /* [2278] */
    (xdc_Char)0x6c,  /* [2279] */
    (xdc_Char)0x6c,  /* [2280] */
    (xdc_Char)0x48,  /* [2281] */
    (xdc_Char)0x61,  /* [2282] */
    (xdc_Char)0x6e,  /* [2283] */
    (xdc_Char)0x64,  /* [2284] */
    (xdc_Char)0x6c,  /* [2285] */
    (xdc_Char)0x65,  /* [2286] */
    (xdc_Char)0x3a,  /* [2287] */
    (xdc_Char)0x20,  /* [2288] */
    (xdc_Char)0x4e,  /* [2289] */
    (xdc_Char)0x75,  /* [2290] */
    (xdc_Char)0x6c,  /* [2291] */
    (xdc_Char)0x6c,  /* [2292] */
    (xdc_Char)0x20,  /* [2293] */
    (xdc_Char)0x68,  /* [2294] */
    (xdc_Char)0x61,  /* [2295] */
    (xdc_Char)0x6e,  /* [2296] */
    (xdc_Char)0x64,  /* [2297] */
    (xdc_Char)0x6c,  /* [2298] */
    (xdc_Char)0x65,  /* [2299] */
    (xdc_Char)0x20,  /* [2300] */
    (xdc_Char)0x70,  /* [2301] */
    (xdc_Char)0x61,  /* [2302] */
    (xdc_Char)0x73,  /* [2303] */
    (xdc_Char)0x73,  /* [2304] */
    (xdc_Char)0x65,  /* [2305] */
    (xdc_Char)0x64,  /* [2306] */
    (xdc_Char)0x20,  /* [2307] */
    (xdc_Char)0x74,  /* [2308] */
    (xdc_Char)0x6f,  /* [2309] */
    (xdc_Char)0x20,  /* [2310] */
    (xdc_Char)0x63,  /* [2311] */
    (xdc_Char)0x72,  /* [2312] */
    (xdc_Char)0x65,  /* [2313] */
    (xdc_Char)0x61,  /* [2314] */
    (xdc_Char)0x74,  /* [2315] */
    (xdc_Char)0x65,  /* [2316] */
    (xdc_Char)0x0,  /* [2317] */
    (xdc_Char)0x41,  /* [2318] */
    (xdc_Char)0x5f,  /* [2319] */
    (xdc_Char)0x49,  /* [2320] */
    (xdc_Char)0x70,  /* [2321] */
    (xdc_Char)0x63,  /* [2322] */
    (xdc_Char)0x4d,  /* [2323] */
    (xdc_Char)0x50,  /* [2324] */
    (xdc_Char)0x46,  /* [2325] */
    (xdc_Char)0x61,  /* [2326] */
    (xdc_Char)0x69,  /* [2327] */
    (xdc_Char)0x6c,  /* [2328] */
    (xdc_Char)0x75,  /* [2329] */
    (xdc_Char)0x72,  /* [2330] */
    (xdc_Char)0x65,  /* [2331] */
    (xdc_Char)0x3a,  /* [2332] */
    (xdc_Char)0x20,  /* [2333] */
    (xdc_Char)0x55,  /* [2334] */
    (xdc_Char)0x6e,  /* [2335] */
    (xdc_Char)0x65,  /* [2336] */
    (xdc_Char)0x78,  /* [2337] */
    (xdc_Char)0x70,  /* [2338] */
    (xdc_Char)0x65,  /* [2339] */
    (xdc_Char)0x63,  /* [2340] */
    (xdc_Char)0x74,  /* [2341] */
    (xdc_Char)0x65,  /* [2342] */
    (xdc_Char)0x64,  /* [2343] */
    (xdc_Char)0x20,  /* [2344] */
    (xdc_Char)0x66,  /* [2345] */
    (xdc_Char)0x61,  /* [2346] */
    (xdc_Char)0x69,  /* [2347] */
    (xdc_Char)0x6c,  /* [2348] */
    (xdc_Char)0x75,  /* [2349] */
    (xdc_Char)0x72,  /* [2350] */
    (xdc_Char)0x65,  /* [2351] */
    (xdc_Char)0x20,  /* [2352] */
    (xdc_Char)0x77,  /* [2353] */
    (xdc_Char)0x69,  /* [2354] */
    (xdc_Char)0x74,  /* [2355] */
    (xdc_Char)0x68,  /* [2356] */
    (xdc_Char)0x20,  /* [2357] */
    (xdc_Char)0x74,  /* [2358] */
    (xdc_Char)0x68,  /* [2359] */
    (xdc_Char)0x65,  /* [2360] */
    (xdc_Char)0x20,  /* [2361] */
    (xdc_Char)0x49,  /* [2362] */
    (xdc_Char)0x70,  /* [2363] */
    (xdc_Char)0x63,  /* [2364] */
    (xdc_Char)0x4d,  /* [2365] */
    (xdc_Char)0x50,  /* [2366] */
    (xdc_Char)0x0,  /* [2367] */
    (xdc_Char)0x4c,  /* [2368] */
    (xdc_Char)0x6f,  /* [2369] */
    (xdc_Char)0x67,  /* [2370] */
    (xdc_Char)0x67,  /* [2371] */
    (xdc_Char)0x65,  /* [2372] */
    (xdc_Char)0x72,  /* [2373] */
    (xdc_Char)0x53,  /* [2374] */
    (xdc_Char)0x74,  /* [2375] */
    (xdc_Char)0x72,  /* [2376] */
    (xdc_Char)0x65,  /* [2377] */
    (xdc_Char)0x61,  /* [2378] */
    (xdc_Char)0x6d,  /* [2379] */
    (xdc_Char)0x65,  /* [2380] */
    (xdc_Char)0x72,  /* [2381] */
    (xdc_Char)0x32,  /* [2382] */
    (xdc_Char)0x5f,  /* [2383] */
    (xdc_Char)0x63,  /* [2384] */
    (xdc_Char)0x72,  /* [2385] */
    (xdc_Char)0x65,  /* [2386] */
    (xdc_Char)0x61,  /* [2387] */
    (xdc_Char)0x74,  /* [2388] */
    (xdc_Char)0x65,  /* [2389] */
    (xdc_Char)0x27,  /* [2390] */
    (xdc_Char)0x73,  /* [2391] */
    (xdc_Char)0x20,  /* [2392] */
    (xdc_Char)0x62,  /* [2393] */
    (xdc_Char)0x75,  /* [2394] */
    (xdc_Char)0x66,  /* [2395] */
    (xdc_Char)0x66,  /* [2396] */
    (xdc_Char)0x65,  /* [2397] */
    (xdc_Char)0x72,  /* [2398] */
    (xdc_Char)0x20,  /* [2399] */
    (xdc_Char)0x72,  /* [2400] */
    (xdc_Char)0x65,  /* [2401] */
    (xdc_Char)0x74,  /* [2402] */
    (xdc_Char)0x75,  /* [2403] */
    (xdc_Char)0x72,  /* [2404] */
    (xdc_Char)0x6e,  /* [2405] */
    (xdc_Char)0x65,  /* [2406] */
    (xdc_Char)0x64,  /* [2407] */
    (xdc_Char)0x20,  /* [2408] */
    (xdc_Char)0x62,  /* [2409] */
    (xdc_Char)0x79,  /* [2410] */
    (xdc_Char)0x20,  /* [2411] */
    (xdc_Char)0x70,  /* [2412] */
    (xdc_Char)0x72,  /* [2413] */
    (xdc_Char)0x69,  /* [2414] */
    (xdc_Char)0x6d,  /* [2415] */
    (xdc_Char)0x65,  /* [2416] */
    (xdc_Char)0x46,  /* [2417] */
    (xdc_Char)0x78,  /* [2418] */
    (xdc_Char)0x6e,  /* [2419] */
    (xdc_Char)0x20,  /* [2420] */
    (xdc_Char)0x69,  /* [2421] */
    (xdc_Char)0x73,  /* [2422] */
    (xdc_Char)0x20,  /* [2423] */
    (xdc_Char)0x4e,  /* [2424] */
    (xdc_Char)0x55,  /* [2425] */
    (xdc_Char)0x4c,  /* [2426] */
    (xdc_Char)0x4c,  /* [2427] */
    (xdc_Char)0x0,  /* [2428] */
    (xdc_Char)0x41,  /* [2429] */
    (xdc_Char)0x5f,  /* [2430] */
    (xdc_Char)0x75,  /* [2431] */
    (xdc_Char)0x6e,  /* [2432] */
    (xdc_Char)0x73,  /* [2433] */
    (xdc_Char)0x75,  /* [2434] */
    (xdc_Char)0x70,  /* [2435] */
    (xdc_Char)0x70,  /* [2436] */
    (xdc_Char)0x6f,  /* [2437] */
    (xdc_Char)0x72,  /* [2438] */
    (xdc_Char)0x74,  /* [2439] */
    (xdc_Char)0x65,  /* [2440] */
    (xdc_Char)0x64,  /* [2441] */
    (xdc_Char)0x4d,  /* [2442] */
    (xdc_Char)0x61,  /* [2443] */
    (xdc_Char)0x73,  /* [2444] */
    (xdc_Char)0x6b,  /* [2445] */
    (xdc_Char)0x69,  /* [2446] */
    (xdc_Char)0x6e,  /* [2447] */
    (xdc_Char)0x67,  /* [2448] */
    (xdc_Char)0x4f,  /* [2449] */
    (xdc_Char)0x70,  /* [2450] */
    (xdc_Char)0x74,  /* [2451] */
    (xdc_Char)0x69,  /* [2452] */
    (xdc_Char)0x6f,  /* [2453] */
    (xdc_Char)0x6e,  /* [2454] */
    (xdc_Char)0x3a,  /* [2455] */
    (xdc_Char)0x20,  /* [2456] */
    (xdc_Char)0x75,  /* [2457] */
    (xdc_Char)0x6e,  /* [2458] */
    (xdc_Char)0x73,  /* [2459] */
    (xdc_Char)0x75,  /* [2460] */
    (xdc_Char)0x70,  /* [2461] */
    (xdc_Char)0x70,  /* [2462] */
    (xdc_Char)0x6f,  /* [2463] */
    (xdc_Char)0x72,  /* [2464] */
    (xdc_Char)0x74,  /* [2465] */
    (xdc_Char)0x65,  /* [2466] */
    (xdc_Char)0x64,  /* [2467] */
    (xdc_Char)0x20,  /* [2468] */
    (xdc_Char)0x6d,  /* [2469] */
    (xdc_Char)0x61,  /* [2470] */
    (xdc_Char)0x73,  /* [2471] */
    (xdc_Char)0x6b,  /* [2472] */
    (xdc_Char)0x53,  /* [2473] */
    (xdc_Char)0x65,  /* [2474] */
    (xdc_Char)0x74,  /* [2475] */
    (xdc_Char)0x74,  /* [2476] */
    (xdc_Char)0x69,  /* [2477] */
    (xdc_Char)0x6e,  /* [2478] */
    (xdc_Char)0x67,  /* [2479] */
    (xdc_Char)0x2e,  /* [2480] */
    (xdc_Char)0x0,  /* [2481] */
    (xdc_Char)0x62,  /* [2482] */
    (xdc_Char)0x75,  /* [2483] */
    (xdc_Char)0x66,  /* [2484] */
    (xdc_Char)0x20,  /* [2485] */
    (xdc_Char)0x70,  /* [2486] */
    (xdc_Char)0x61,  /* [2487] */
    (xdc_Char)0x72,  /* [2488] */
    (xdc_Char)0x61,  /* [2489] */
    (xdc_Char)0x6d,  /* [2490] */
    (xdc_Char)0x65,  /* [2491] */
    (xdc_Char)0x74,  /* [2492] */
    (xdc_Char)0x65,  /* [2493] */
    (xdc_Char)0x72,  /* [2494] */
    (xdc_Char)0x20,  /* [2495] */
    (xdc_Char)0x63,  /* [2496] */
    (xdc_Char)0x61,  /* [2497] */
    (xdc_Char)0x6e,  /* [2498] */
    (xdc_Char)0x6e,  /* [2499] */
    (xdc_Char)0x6f,  /* [2500] */
    (xdc_Char)0x74,  /* [2501] */
    (xdc_Char)0x20,  /* [2502] */
    (xdc_Char)0x62,  /* [2503] */
    (xdc_Char)0x65,  /* [2504] */
    (xdc_Char)0x20,  /* [2505] */
    (xdc_Char)0x6e,  /* [2506] */
    (xdc_Char)0x75,  /* [2507] */
    (xdc_Char)0x6c,  /* [2508] */
    (xdc_Char)0x6c,  /* [2509] */
    (xdc_Char)0x0,  /* [2510] */
    (xdc_Char)0x62,  /* [2511] */
    (xdc_Char)0x75,  /* [2512] */
    (xdc_Char)0x66,  /* [2513] */
    (xdc_Char)0x20,  /* [2514] */
    (xdc_Char)0x6e,  /* [2515] */
    (xdc_Char)0x6f,  /* [2516] */
    (xdc_Char)0x74,  /* [2517] */
    (xdc_Char)0x20,  /* [2518] */
    (xdc_Char)0x70,  /* [2519] */
    (xdc_Char)0x72,  /* [2520] */
    (xdc_Char)0x6f,  /* [2521] */
    (xdc_Char)0x70,  /* [2522] */
    (xdc_Char)0x65,  /* [2523] */
    (xdc_Char)0x72,  /* [2524] */
    (xdc_Char)0x6c,  /* [2525] */
    (xdc_Char)0x79,  /* [2526] */
    (xdc_Char)0x20,  /* [2527] */
    (xdc_Char)0x61,  /* [2528] */
    (xdc_Char)0x6c,  /* [2529] */
    (xdc_Char)0x69,  /* [2530] */
    (xdc_Char)0x67,  /* [2531] */
    (xdc_Char)0x6e,  /* [2532] */
    (xdc_Char)0x65,  /* [2533] */
    (xdc_Char)0x64,  /* [2534] */
    (xdc_Char)0x0,  /* [2535] */
    (xdc_Char)0x61,  /* [2536] */
    (xdc_Char)0x6c,  /* [2537] */
    (xdc_Char)0x69,  /* [2538] */
    (xdc_Char)0x67,  /* [2539] */
    (xdc_Char)0x6e,  /* [2540] */
    (xdc_Char)0x20,  /* [2541] */
    (xdc_Char)0x70,  /* [2542] */
    (xdc_Char)0x61,  /* [2543] */
    (xdc_Char)0x72,  /* [2544] */
    (xdc_Char)0x61,  /* [2545] */
    (xdc_Char)0x6d,  /* [2546] */
    (xdc_Char)0x65,  /* [2547] */
    (xdc_Char)0x74,  /* [2548] */
    (xdc_Char)0x65,  /* [2549] */
    (xdc_Char)0x72,  /* [2550] */
    (xdc_Char)0x20,  /* [2551] */
    (xdc_Char)0x6d,  /* [2552] */
    (xdc_Char)0x75,  /* [2553] */
    (xdc_Char)0x73,  /* [2554] */
    (xdc_Char)0x74,  /* [2555] */
    (xdc_Char)0x20,  /* [2556] */
    (xdc_Char)0x62,  /* [2557] */
    (xdc_Char)0x65,  /* [2558] */
    (xdc_Char)0x20,  /* [2559] */
    (xdc_Char)0x30,  /* [2560] */
    (xdc_Char)0x20,  /* [2561] */
    (xdc_Char)0x6f,  /* [2562] */
    (xdc_Char)0x72,  /* [2563] */
    (xdc_Char)0x20,  /* [2564] */
    (xdc_Char)0x61,  /* [2565] */
    (xdc_Char)0x20,  /* [2566] */
    (xdc_Char)0x70,  /* [2567] */
    (xdc_Char)0x6f,  /* [2568] */
    (xdc_Char)0x77,  /* [2569] */
    (xdc_Char)0x65,  /* [2570] */
    (xdc_Char)0x72,  /* [2571] */
    (xdc_Char)0x20,  /* [2572] */
    (xdc_Char)0x6f,  /* [2573] */
    (xdc_Char)0x66,  /* [2574] */
    (xdc_Char)0x20,  /* [2575] */
    (xdc_Char)0x32,  /* [2576] */
    (xdc_Char)0x20,  /* [2577] */
    (xdc_Char)0x3e,  /* [2578] */
    (xdc_Char)0x3d,  /* [2579] */
    (xdc_Char)0x20,  /* [2580] */
    (xdc_Char)0x74,  /* [2581] */
    (xdc_Char)0x68,  /* [2582] */
    (xdc_Char)0x65,  /* [2583] */
    (xdc_Char)0x20,  /* [2584] */
    (xdc_Char)0x76,  /* [2585] */
    (xdc_Char)0x61,  /* [2586] */
    (xdc_Char)0x6c,  /* [2587] */
    (xdc_Char)0x75,  /* [2588] */
    (xdc_Char)0x65,  /* [2589] */
    (xdc_Char)0x20,  /* [2590] */
    (xdc_Char)0x6f,  /* [2591] */
    (xdc_Char)0x66,  /* [2592] */
    (xdc_Char)0x20,  /* [2593] */
    (xdc_Char)0x4d,  /* [2594] */
    (xdc_Char)0x65,  /* [2595] */
    (xdc_Char)0x6d,  /* [2596] */
    (xdc_Char)0x6f,  /* [2597] */
    (xdc_Char)0x72,  /* [2598] */
    (xdc_Char)0x79,  /* [2599] */
    (xdc_Char)0x5f,  /* [2600] */
    (xdc_Char)0x67,  /* [2601] */
    (xdc_Char)0x65,  /* [2602] */
    (xdc_Char)0x74,  /* [2603] */
    (xdc_Char)0x4d,  /* [2604] */
    (xdc_Char)0x61,  /* [2605] */
    (xdc_Char)0x78,  /* [2606] */
    (xdc_Char)0x44,  /* [2607] */
    (xdc_Char)0x65,  /* [2608] */
    (xdc_Char)0x66,  /* [2609] */
    (xdc_Char)0x61,  /* [2610] */
    (xdc_Char)0x75,  /* [2611] */
    (xdc_Char)0x6c,  /* [2612] */
    (xdc_Char)0x74,  /* [2613] */
    (xdc_Char)0x54,  /* [2614] */
    (xdc_Char)0x79,  /* [2615] */
    (xdc_Char)0x70,  /* [2616] */
    (xdc_Char)0x65,  /* [2617] */
    (xdc_Char)0x41,  /* [2618] */
    (xdc_Char)0x6c,  /* [2619] */
    (xdc_Char)0x69,  /* [2620] */
    (xdc_Char)0x67,  /* [2621] */
    (xdc_Char)0x6e,  /* [2622] */
    (xdc_Char)0x28,  /* [2623] */
    (xdc_Char)0x29,  /* [2624] */
    (xdc_Char)0x0,  /* [2625] */
    (xdc_Char)0x61,  /* [2626] */
    (xdc_Char)0x6c,  /* [2627] */
    (xdc_Char)0x69,  /* [2628] */
    (xdc_Char)0x67,  /* [2629] */
    (xdc_Char)0x6e,  /* [2630] */
    (xdc_Char)0x20,  /* [2631] */
    (xdc_Char)0x70,  /* [2632] */
    (xdc_Char)0x61,  /* [2633] */
    (xdc_Char)0x72,  /* [2634] */
    (xdc_Char)0x61,  /* [2635] */
    (xdc_Char)0x6d,  /* [2636] */
    (xdc_Char)0x65,  /* [2637] */
    (xdc_Char)0x74,  /* [2638] */
    (xdc_Char)0x65,  /* [2639] */
    (xdc_Char)0x72,  /* [2640] */
    (xdc_Char)0x20,  /* [2641] */
    (xdc_Char)0x31,  /* [2642] */
    (xdc_Char)0x29,  /* [2643] */
    (xdc_Char)0x20,  /* [2644] */
    (xdc_Char)0x6d,  /* [2645] */
    (xdc_Char)0x75,  /* [2646] */
    (xdc_Char)0x73,  /* [2647] */
    (xdc_Char)0x74,  /* [2648] */
    (xdc_Char)0x20,  /* [2649] */
    (xdc_Char)0x62,  /* [2650] */
    (xdc_Char)0x65,  /* [2651] */
    (xdc_Char)0x20,  /* [2652] */
    (xdc_Char)0x30,  /* [2653] */
    (xdc_Char)0x20,  /* [2654] */
    (xdc_Char)0x6f,  /* [2655] */
    (xdc_Char)0x72,  /* [2656] */
    (xdc_Char)0x20,  /* [2657] */
    (xdc_Char)0x61,  /* [2658] */
    (xdc_Char)0x20,  /* [2659] */
    (xdc_Char)0x70,  /* [2660] */
    (xdc_Char)0x6f,  /* [2661] */
    (xdc_Char)0x77,  /* [2662] */
    (xdc_Char)0x65,  /* [2663] */
    (xdc_Char)0x72,  /* [2664] */
    (xdc_Char)0x20,  /* [2665] */
    (xdc_Char)0x6f,  /* [2666] */
    (xdc_Char)0x66,  /* [2667] */
    (xdc_Char)0x20,  /* [2668] */
    (xdc_Char)0x32,  /* [2669] */
    (xdc_Char)0x20,  /* [2670] */
    (xdc_Char)0x61,  /* [2671] */
    (xdc_Char)0x6e,  /* [2672] */
    (xdc_Char)0x64,  /* [2673] */
    (xdc_Char)0x20,  /* [2674] */
    (xdc_Char)0x32,  /* [2675] */
    (xdc_Char)0x29,  /* [2676] */
    (xdc_Char)0x20,  /* [2677] */
    (xdc_Char)0x6e,  /* [2678] */
    (xdc_Char)0x6f,  /* [2679] */
    (xdc_Char)0x74,  /* [2680] */
    (xdc_Char)0x20,  /* [2681] */
    (xdc_Char)0x67,  /* [2682] */
    (xdc_Char)0x72,  /* [2683] */
    (xdc_Char)0x65,  /* [2684] */
    (xdc_Char)0x61,  /* [2685] */
    (xdc_Char)0x74,  /* [2686] */
    (xdc_Char)0x65,  /* [2687] */
    (xdc_Char)0x72,  /* [2688] */
    (xdc_Char)0x20,  /* [2689] */
    (xdc_Char)0x74,  /* [2690] */
    (xdc_Char)0x68,  /* [2691] */
    (xdc_Char)0x61,  /* [2692] */
    (xdc_Char)0x6e,  /* [2693] */
    (xdc_Char)0x20,  /* [2694] */
    (xdc_Char)0x74,  /* [2695] */
    (xdc_Char)0x68,  /* [2696] */
    (xdc_Char)0x65,  /* [2697] */
    (xdc_Char)0x20,  /* [2698] */
    (xdc_Char)0x68,  /* [2699] */
    (xdc_Char)0x65,  /* [2700] */
    (xdc_Char)0x61,  /* [2701] */
    (xdc_Char)0x70,  /* [2702] */
    (xdc_Char)0x73,  /* [2703] */
    (xdc_Char)0x20,  /* [2704] */
    (xdc_Char)0x61,  /* [2705] */
    (xdc_Char)0x6c,  /* [2706] */
    (xdc_Char)0x69,  /* [2707] */
    (xdc_Char)0x67,  /* [2708] */
    (xdc_Char)0x6e,  /* [2709] */
    (xdc_Char)0x6d,  /* [2710] */
    (xdc_Char)0x65,  /* [2711] */
    (xdc_Char)0x6e,  /* [2712] */
    (xdc_Char)0x74,  /* [2713] */
    (xdc_Char)0x0,  /* [2714] */
    (xdc_Char)0x62,  /* [2715] */
    (xdc_Char)0x6c,  /* [2716] */
    (xdc_Char)0x6f,  /* [2717] */
    (xdc_Char)0x63,  /* [2718] */
    (xdc_Char)0x6b,  /* [2719] */
    (xdc_Char)0x53,  /* [2720] */
    (xdc_Char)0x69,  /* [2721] */
    (xdc_Char)0x7a,  /* [2722] */
    (xdc_Char)0x65,  /* [2723] */
    (xdc_Char)0x20,  /* [2724] */
    (xdc_Char)0x6d,  /* [2725] */
    (xdc_Char)0x75,  /* [2726] */
    (xdc_Char)0x73,  /* [2727] */
    (xdc_Char)0x74,  /* [2728] */
    (xdc_Char)0x20,  /* [2729] */
    (xdc_Char)0x62,  /* [2730] */
    (xdc_Char)0x65,  /* [2731] */
    (xdc_Char)0x20,  /* [2732] */
    (xdc_Char)0x6c,  /* [2733] */
    (xdc_Char)0x61,  /* [2734] */
    (xdc_Char)0x72,  /* [2735] */
    (xdc_Char)0x67,  /* [2736] */
    (xdc_Char)0x65,  /* [2737] */
    (xdc_Char)0x20,  /* [2738] */
    (xdc_Char)0x65,  /* [2739] */
    (xdc_Char)0x6e,  /* [2740] */
    (xdc_Char)0x6f,  /* [2741] */
    (xdc_Char)0x75,  /* [2742] */
    (xdc_Char)0x67,  /* [2743] */
    (xdc_Char)0x68,  /* [2744] */
    (xdc_Char)0x20,  /* [2745] */
    (xdc_Char)0x74,  /* [2746] */
    (xdc_Char)0x6f,  /* [2747] */
    (xdc_Char)0x20,  /* [2748] */
    (xdc_Char)0x68,  /* [2749] */
    (xdc_Char)0x6f,  /* [2750] */
    (xdc_Char)0x6c,  /* [2751] */
    (xdc_Char)0x64,  /* [2752] */
    (xdc_Char)0x20,  /* [2753] */
    (xdc_Char)0x61,  /* [2754] */
    (xdc_Char)0x74,  /* [2755] */
    (xdc_Char)0x6c,  /* [2756] */
    (xdc_Char)0x65,  /* [2757] */
    (xdc_Char)0x61,  /* [2758] */
    (xdc_Char)0x73,  /* [2759] */
    (xdc_Char)0x74,  /* [2760] */
    (xdc_Char)0x20,  /* [2761] */
    (xdc_Char)0x74,  /* [2762] */
    (xdc_Char)0x77,  /* [2763] */
    (xdc_Char)0x6f,  /* [2764] */
    (xdc_Char)0x20,  /* [2765] */
    (xdc_Char)0x70,  /* [2766] */
    (xdc_Char)0x6f,  /* [2767] */
    (xdc_Char)0x69,  /* [2768] */
    (xdc_Char)0x6e,  /* [2769] */
    (xdc_Char)0x74,  /* [2770] */
    (xdc_Char)0x65,  /* [2771] */
    (xdc_Char)0x72,  /* [2772] */
    (xdc_Char)0x73,  /* [2773] */
    (xdc_Char)0x0,  /* [2774] */
    (xdc_Char)0x6e,  /* [2775] */
    (xdc_Char)0x75,  /* [2776] */
    (xdc_Char)0x6d,  /* [2777] */
    (xdc_Char)0x42,  /* [2778] */
    (xdc_Char)0x6c,  /* [2779] */
    (xdc_Char)0x6f,  /* [2780] */
    (xdc_Char)0x63,  /* [2781] */
    (xdc_Char)0x6b,  /* [2782] */
    (xdc_Char)0x73,  /* [2783] */
    (xdc_Char)0x20,  /* [2784] */
    (xdc_Char)0x63,  /* [2785] */
    (xdc_Char)0x61,  /* [2786] */
    (xdc_Char)0x6e,  /* [2787] */
    (xdc_Char)0x6e,  /* [2788] */
    (xdc_Char)0x6f,  /* [2789] */
    (xdc_Char)0x74,  /* [2790] */
    (xdc_Char)0x20,  /* [2791] */
    (xdc_Char)0x62,  /* [2792] */
    (xdc_Char)0x65,  /* [2793] */
    (xdc_Char)0x20,  /* [2794] */
    (xdc_Char)0x7a,  /* [2795] */
    (xdc_Char)0x65,  /* [2796] */
    (xdc_Char)0x72,  /* [2797] */
    (xdc_Char)0x6f,  /* [2798] */
    (xdc_Char)0x0,  /* [2799] */
    (xdc_Char)0x62,  /* [2800] */
    (xdc_Char)0x75,  /* [2801] */
    (xdc_Char)0x66,  /* [2802] */
    (xdc_Char)0x53,  /* [2803] */
    (xdc_Char)0x69,  /* [2804] */
    (xdc_Char)0x7a,  /* [2805] */
    (xdc_Char)0x65,  /* [2806] */
    (xdc_Char)0x20,  /* [2807] */
    (xdc_Char)0x63,  /* [2808] */
    (xdc_Char)0x61,  /* [2809] */
    (xdc_Char)0x6e,  /* [2810] */
    (xdc_Char)0x6e,  /* [2811] */
    (xdc_Char)0x6f,  /* [2812] */
    (xdc_Char)0x74,  /* [2813] */
    (xdc_Char)0x20,  /* [2814] */
    (xdc_Char)0x62,  /* [2815] */
    (xdc_Char)0x65,  /* [2816] */
    (xdc_Char)0x20,  /* [2817] */
    (xdc_Char)0x7a,  /* [2818] */
    (xdc_Char)0x65,  /* [2819] */
    (xdc_Char)0x72,  /* [2820] */
    (xdc_Char)0x6f,  /* [2821] */
    (xdc_Char)0x0,  /* [2822] */
    (xdc_Char)0x48,  /* [2823] */
    (xdc_Char)0x65,  /* [2824] */
    (xdc_Char)0x61,  /* [2825] */
    (xdc_Char)0x70,  /* [2826] */
    (xdc_Char)0x42,  /* [2827] */
    (xdc_Char)0x75,  /* [2828] */
    (xdc_Char)0x66,  /* [2829] */
    (xdc_Char)0x5f,  /* [2830] */
    (xdc_Char)0x63,  /* [2831] */
    (xdc_Char)0x72,  /* [2832] */
    (xdc_Char)0x65,  /* [2833] */
    (xdc_Char)0x61,  /* [2834] */
    (xdc_Char)0x74,  /* [2835] */
    (xdc_Char)0x65,  /* [2836] */
    (xdc_Char)0x27,  /* [2837] */
    (xdc_Char)0x73,  /* [2838] */
    (xdc_Char)0x20,  /* [2839] */
    (xdc_Char)0x62,  /* [2840] */
    (xdc_Char)0x75,  /* [2841] */
    (xdc_Char)0x66,  /* [2842] */
    (xdc_Char)0x53,  /* [2843] */
    (xdc_Char)0x69,  /* [2844] */
    (xdc_Char)0x7a,  /* [2845] */
    (xdc_Char)0x65,  /* [2846] */
    (xdc_Char)0x20,  /* [2847] */
    (xdc_Char)0x70,  /* [2848] */
    (xdc_Char)0x61,  /* [2849] */
    (xdc_Char)0x72,  /* [2850] */
    (xdc_Char)0x61,  /* [2851] */
    (xdc_Char)0x6d,  /* [2852] */
    (xdc_Char)0x65,  /* [2853] */
    (xdc_Char)0x74,  /* [2854] */
    (xdc_Char)0x65,  /* [2855] */
    (xdc_Char)0x72,  /* [2856] */
    (xdc_Char)0x20,  /* [2857] */
    (xdc_Char)0x69,  /* [2858] */
    (xdc_Char)0x73,  /* [2859] */
    (xdc_Char)0x20,  /* [2860] */
    (xdc_Char)0x69,  /* [2861] */
    (xdc_Char)0x6e,  /* [2862] */
    (xdc_Char)0x76,  /* [2863] */
    (xdc_Char)0x61,  /* [2864] */
    (xdc_Char)0x6c,  /* [2865] */
    (xdc_Char)0x69,  /* [2866] */
    (xdc_Char)0x64,  /* [2867] */
    (xdc_Char)0x20,  /* [2868] */
    (xdc_Char)0x28,  /* [2869] */
    (xdc_Char)0x74,  /* [2870] */
    (xdc_Char)0x6f,  /* [2871] */
    (xdc_Char)0x6f,  /* [2872] */
    (xdc_Char)0x20,  /* [2873] */
    (xdc_Char)0x73,  /* [2874] */
    (xdc_Char)0x6d,  /* [2875] */
    (xdc_Char)0x61,  /* [2876] */
    (xdc_Char)0x6c,  /* [2877] */
    (xdc_Char)0x6c,  /* [2878] */
    (xdc_Char)0x29,  /* [2879] */
    (xdc_Char)0x0,  /* [2880] */
    (xdc_Char)0x43,  /* [2881] */
    (xdc_Char)0x61,  /* [2882] */
    (xdc_Char)0x6e,  /* [2883] */
    (xdc_Char)0x6e,  /* [2884] */
    (xdc_Char)0x6f,  /* [2885] */
    (xdc_Char)0x74,  /* [2886] */
    (xdc_Char)0x20,  /* [2887] */
    (xdc_Char)0x63,  /* [2888] */
    (xdc_Char)0x61,  /* [2889] */
    (xdc_Char)0x6c,  /* [2890] */
    (xdc_Char)0x6c,  /* [2891] */
    (xdc_Char)0x20,  /* [2892] */
    (xdc_Char)0x48,  /* [2893] */
    (xdc_Char)0x65,  /* [2894] */
    (xdc_Char)0x61,  /* [2895] */
    (xdc_Char)0x70,  /* [2896] */
    (xdc_Char)0x42,  /* [2897] */
    (xdc_Char)0x75,  /* [2898] */
    (xdc_Char)0x66,  /* [2899] */
    (xdc_Char)0x5f,  /* [2900] */
    (xdc_Char)0x66,  /* [2901] */
    (xdc_Char)0x72,  /* [2902] */
    (xdc_Char)0x65,  /* [2903] */
    (xdc_Char)0x65,  /* [2904] */
    (xdc_Char)0x20,  /* [2905] */
    (xdc_Char)0x77,  /* [2906] */
    (xdc_Char)0x68,  /* [2907] */
    (xdc_Char)0x65,  /* [2908] */
    (xdc_Char)0x6e,  /* [2909] */
    (xdc_Char)0x20,  /* [2910] */
    (xdc_Char)0x6e,  /* [2911] */
    (xdc_Char)0x6f,  /* [2912] */
    (xdc_Char)0x20,  /* [2913] */
    (xdc_Char)0x62,  /* [2914] */
    (xdc_Char)0x6c,  /* [2915] */
    (xdc_Char)0x6f,  /* [2916] */
    (xdc_Char)0x63,  /* [2917] */
    (xdc_Char)0x6b,  /* [2918] */
    (xdc_Char)0x73,  /* [2919] */
    (xdc_Char)0x20,  /* [2920] */
    (xdc_Char)0x68,  /* [2921] */
    (xdc_Char)0x61,  /* [2922] */
    (xdc_Char)0x76,  /* [2923] */
    (xdc_Char)0x65,  /* [2924] */
    (xdc_Char)0x20,  /* [2925] */
    (xdc_Char)0x62,  /* [2926] */
    (xdc_Char)0x65,  /* [2927] */
    (xdc_Char)0x65,  /* [2928] */
    (xdc_Char)0x6e,  /* [2929] */
    (xdc_Char)0x20,  /* [2930] */
    (xdc_Char)0x61,  /* [2931] */
    (xdc_Char)0x6c,  /* [2932] */
    (xdc_Char)0x6c,  /* [2933] */
    (xdc_Char)0x6f,  /* [2934] */
    (xdc_Char)0x63,  /* [2935] */
    (xdc_Char)0x61,  /* [2936] */
    (xdc_Char)0x74,  /* [2937] */
    (xdc_Char)0x65,  /* [2938] */
    (xdc_Char)0x64,  /* [2939] */
    (xdc_Char)0x0,  /* [2940] */
    (xdc_Char)0x41,  /* [2941] */
    (xdc_Char)0x5f,  /* [2942] */
    (xdc_Char)0x69,  /* [2943] */
    (xdc_Char)0x6e,  /* [2944] */
    (xdc_Char)0x76,  /* [2945] */
    (xdc_Char)0x61,  /* [2946] */
    (xdc_Char)0x6c,  /* [2947] */
    (xdc_Char)0x69,  /* [2948] */
    (xdc_Char)0x64,  /* [2949] */
    (xdc_Char)0x46,  /* [2950] */
    (xdc_Char)0x72,  /* [2951] */
    (xdc_Char)0x65,  /* [2952] */
    (xdc_Char)0x65,  /* [2953] */
    (xdc_Char)0x3a,  /* [2954] */
    (xdc_Char)0x20,  /* [2955] */
    (xdc_Char)0x49,  /* [2956] */
    (xdc_Char)0x6e,  /* [2957] */
    (xdc_Char)0x76,  /* [2958] */
    (xdc_Char)0x61,  /* [2959] */
    (xdc_Char)0x6c,  /* [2960] */
    (xdc_Char)0x69,  /* [2961] */
    (xdc_Char)0x64,  /* [2962] */
    (xdc_Char)0x20,  /* [2963] */
    (xdc_Char)0x66,  /* [2964] */
    (xdc_Char)0x72,  /* [2965] */
    (xdc_Char)0x65,  /* [2966] */
    (xdc_Char)0x65,  /* [2967] */
    (xdc_Char)0x0,  /* [2968] */
    (xdc_Char)0x41,  /* [2969] */
    (xdc_Char)0x5f,  /* [2970] */
    (xdc_Char)0x7a,  /* [2971] */
    (xdc_Char)0x65,  /* [2972] */
    (xdc_Char)0x72,  /* [2973] */
    (xdc_Char)0x6f,  /* [2974] */
    (xdc_Char)0x42,  /* [2975] */
    (xdc_Char)0x6c,  /* [2976] */
    (xdc_Char)0x6f,  /* [2977] */
    (xdc_Char)0x63,  /* [2978] */
    (xdc_Char)0x6b,  /* [2979] */
    (xdc_Char)0x3a,  /* [2980] */
    (xdc_Char)0x20,  /* [2981] */
    (xdc_Char)0x43,  /* [2982] */
    (xdc_Char)0x61,  /* [2983] */
    (xdc_Char)0x6e,  /* [2984] */
    (xdc_Char)0x6e,  /* [2985] */
    (xdc_Char)0x6f,  /* [2986] */
    (xdc_Char)0x74,  /* [2987] */
    (xdc_Char)0x20,  /* [2988] */
    (xdc_Char)0x61,  /* [2989] */
    (xdc_Char)0x6c,  /* [2990] */
    (xdc_Char)0x6c,  /* [2991] */
    (xdc_Char)0x6f,  /* [2992] */
    (xdc_Char)0x63,  /* [2993] */
    (xdc_Char)0x61,  /* [2994] */
    (xdc_Char)0x74,  /* [2995] */
    (xdc_Char)0x65,  /* [2996] */
    (xdc_Char)0x20,  /* [2997] */
    (xdc_Char)0x73,  /* [2998] */
    (xdc_Char)0x69,  /* [2999] */
    (xdc_Char)0x7a,  /* [3000] */
    (xdc_Char)0x65,  /* [3001] */
    (xdc_Char)0x20,  /* [3002] */
    (xdc_Char)0x30,  /* [3003] */
    (xdc_Char)0x0,  /* [3004] */
    (xdc_Char)0x41,  /* [3005] */
    (xdc_Char)0x5f,  /* [3006] */
    (xdc_Char)0x68,  /* [3007] */
    (xdc_Char)0x65,  /* [3008] */
    (xdc_Char)0x61,  /* [3009] */
    (xdc_Char)0x70,  /* [3010] */
    (xdc_Char)0x53,  /* [3011] */
    (xdc_Char)0x69,  /* [3012] */
    (xdc_Char)0x7a,  /* [3013] */
    (xdc_Char)0x65,  /* [3014] */
    (xdc_Char)0x3a,  /* [3015] */
    (xdc_Char)0x20,  /* [3016] */
    (xdc_Char)0x52,  /* [3017] */
    (xdc_Char)0x65,  /* [3018] */
    (xdc_Char)0x71,  /* [3019] */
    (xdc_Char)0x75,  /* [3020] */
    (xdc_Char)0x65,  /* [3021] */
    (xdc_Char)0x73,  /* [3022] */
    (xdc_Char)0x74,  /* [3023] */
    (xdc_Char)0x65,  /* [3024] */
    (xdc_Char)0x64,  /* [3025] */
    (xdc_Char)0x20,  /* [3026] */
    (xdc_Char)0x68,  /* [3027] */
    (xdc_Char)0x65,  /* [3028] */
    (xdc_Char)0x61,  /* [3029] */
    (xdc_Char)0x70,  /* [3030] */
    (xdc_Char)0x20,  /* [3031] */
    (xdc_Char)0x73,  /* [3032] */
    (xdc_Char)0x69,  /* [3033] */
    (xdc_Char)0x7a,  /* [3034] */
    (xdc_Char)0x65,  /* [3035] */
    (xdc_Char)0x20,  /* [3036] */
    (xdc_Char)0x69,  /* [3037] */
    (xdc_Char)0x73,  /* [3038] */
    (xdc_Char)0x20,  /* [3039] */
    (xdc_Char)0x74,  /* [3040] */
    (xdc_Char)0x6f,  /* [3041] */
    (xdc_Char)0x6f,  /* [3042] */
    (xdc_Char)0x20,  /* [3043] */
    (xdc_Char)0x73,  /* [3044] */
    (xdc_Char)0x6d,  /* [3045] */
    (xdc_Char)0x61,  /* [3046] */
    (xdc_Char)0x6c,  /* [3047] */
    (xdc_Char)0x6c,  /* [3048] */
    (xdc_Char)0x0,  /* [3049] */
    (xdc_Char)0x41,  /* [3050] */
    (xdc_Char)0x5f,  /* [3051] */
    (xdc_Char)0x61,  /* [3052] */
    (xdc_Char)0x6c,  /* [3053] */
    (xdc_Char)0x69,  /* [3054] */
    (xdc_Char)0x67,  /* [3055] */
    (xdc_Char)0x6e,  /* [3056] */
    (xdc_Char)0x3a,  /* [3057] */
    (xdc_Char)0x20,  /* [3058] */
    (xdc_Char)0x52,  /* [3059] */
    (xdc_Char)0x65,  /* [3060] */
    (xdc_Char)0x71,  /* [3061] */
    (xdc_Char)0x75,  /* [3062] */
    (xdc_Char)0x65,  /* [3063] */
    (xdc_Char)0x73,  /* [3064] */
    (xdc_Char)0x74,  /* [3065] */
    (xdc_Char)0x65,  /* [3066] */
    (xdc_Char)0x64,  /* [3067] */
    (xdc_Char)0x20,  /* [3068] */
    (xdc_Char)0x61,  /* [3069] */
    (xdc_Char)0x6c,  /* [3070] */
    (xdc_Char)0x69,  /* [3071] */
    (xdc_Char)0x67,  /* [3072] */
    (xdc_Char)0x6e,  /* [3073] */
    (xdc_Char)0x20,  /* [3074] */
    (xdc_Char)0x69,  /* [3075] */
    (xdc_Char)0x73,  /* [3076] */
    (xdc_Char)0x20,  /* [3077] */
    (xdc_Char)0x6e,  /* [3078] */
    (xdc_Char)0x6f,  /* [3079] */
    (xdc_Char)0x74,  /* [3080] */
    (xdc_Char)0x20,  /* [3081] */
    (xdc_Char)0x61,  /* [3082] */
    (xdc_Char)0x20,  /* [3083] */
    (xdc_Char)0x70,  /* [3084] */
    (xdc_Char)0x6f,  /* [3085] */
    (xdc_Char)0x77,  /* [3086] */
    (xdc_Char)0x65,  /* [3087] */
    (xdc_Char)0x72,  /* [3088] */
    (xdc_Char)0x20,  /* [3089] */
    (xdc_Char)0x6f,  /* [3090] */
    (xdc_Char)0x66,  /* [3091] */
    (xdc_Char)0x20,  /* [3092] */
    (xdc_Char)0x32,  /* [3093] */
    (xdc_Char)0x0,  /* [3094] */
    (xdc_Char)0x49,  /* [3095] */
    (xdc_Char)0x6e,  /* [3096] */
    (xdc_Char)0x76,  /* [3097] */
    (xdc_Char)0x61,  /* [3098] */
    (xdc_Char)0x6c,  /* [3099] */
    (xdc_Char)0x69,  /* [3100] */
    (xdc_Char)0x64,  /* [3101] */
    (xdc_Char)0x20,  /* [3102] */
    (xdc_Char)0x62,  /* [3103] */
    (xdc_Char)0x6c,  /* [3104] */
    (xdc_Char)0x6f,  /* [3105] */
    (xdc_Char)0x63,  /* [3106] */
    (xdc_Char)0x6b,  /* [3107] */
    (xdc_Char)0x20,  /* [3108] */
    (xdc_Char)0x61,  /* [3109] */
    (xdc_Char)0x64,  /* [3110] */
    (xdc_Char)0x64,  /* [3111] */
    (xdc_Char)0x72,  /* [3112] */
    (xdc_Char)0x65,  /* [3113] */
    (xdc_Char)0x73,  /* [3114] */
    (xdc_Char)0x73,  /* [3115] */
    (xdc_Char)0x20,  /* [3116] */
    (xdc_Char)0x6f,  /* [3117] */
    (xdc_Char)0x6e,  /* [3118] */
    (xdc_Char)0x20,  /* [3119] */
    (xdc_Char)0x74,  /* [3120] */
    (xdc_Char)0x68,  /* [3121] */
    (xdc_Char)0x65,  /* [3122] */
    (xdc_Char)0x20,  /* [3123] */
    (xdc_Char)0x66,  /* [3124] */
    (xdc_Char)0x72,  /* [3125] */
    (xdc_Char)0x65,  /* [3126] */
    (xdc_Char)0x65,  /* [3127] */
    (xdc_Char)0x2e,  /* [3128] */
    (xdc_Char)0x20,  /* [3129] */
    (xdc_Char)0x46,  /* [3130] */
    (xdc_Char)0x61,  /* [3131] */
    (xdc_Char)0x69,  /* [3132] */
    (xdc_Char)0x6c,  /* [3133] */
    (xdc_Char)0x65,  /* [3134] */
    (xdc_Char)0x64,  /* [3135] */
    (xdc_Char)0x20,  /* [3136] */
    (xdc_Char)0x74,  /* [3137] */
    (xdc_Char)0x6f,  /* [3138] */
    (xdc_Char)0x20,  /* [3139] */
    (xdc_Char)0x66,  /* [3140] */
    (xdc_Char)0x72,  /* [3141] */
    (xdc_Char)0x65,  /* [3142] */
    (xdc_Char)0x65,  /* [3143] */
    (xdc_Char)0x20,  /* [3144] */
    (xdc_Char)0x62,  /* [3145] */
    (xdc_Char)0x6c,  /* [3146] */
    (xdc_Char)0x6f,  /* [3147] */
    (xdc_Char)0x63,  /* [3148] */
    (xdc_Char)0x6b,  /* [3149] */
    (xdc_Char)0x20,  /* [3150] */
    (xdc_Char)0x62,  /* [3151] */
    (xdc_Char)0x61,  /* [3152] */
    (xdc_Char)0x63,  /* [3153] */
    (xdc_Char)0x6b,  /* [3154] */
    (xdc_Char)0x20,  /* [3155] */
    (xdc_Char)0x74,  /* [3156] */
    (xdc_Char)0x6f,  /* [3157] */
    (xdc_Char)0x20,  /* [3158] */
    (xdc_Char)0x68,  /* [3159] */
    (xdc_Char)0x65,  /* [3160] */
    (xdc_Char)0x61,  /* [3161] */
    (xdc_Char)0x70,  /* [3162] */
    (xdc_Char)0x2e,  /* [3163] */
    (xdc_Char)0x0,  /* [3164] */
    (xdc_Char)0x41,  /* [3165] */
    (xdc_Char)0x5f,  /* [3166] */
    (xdc_Char)0x64,  /* [3167] */
    (xdc_Char)0x6f,  /* [3168] */
    (xdc_Char)0x75,  /* [3169] */
    (xdc_Char)0x62,  /* [3170] */
    (xdc_Char)0x6c,  /* [3171] */
    (xdc_Char)0x65,  /* [3172] */
    (xdc_Char)0x46,  /* [3173] */
    (xdc_Char)0x72,  /* [3174] */
    (xdc_Char)0x65,  /* [3175] */
    (xdc_Char)0x65,  /* [3176] */
    (xdc_Char)0x3a,  /* [3177] */
    (xdc_Char)0x20,  /* [3178] */
    (xdc_Char)0x42,  /* [3179] */
    (xdc_Char)0x75,  /* [3180] */
    (xdc_Char)0x66,  /* [3181] */
    (xdc_Char)0x66,  /* [3182] */
    (xdc_Char)0x65,  /* [3183] */
    (xdc_Char)0x72,  /* [3184] */
    (xdc_Char)0x20,  /* [3185] */
    (xdc_Char)0x61,  /* [3186] */
    (xdc_Char)0x6c,  /* [3187] */
    (xdc_Char)0x72,  /* [3188] */
    (xdc_Char)0x65,  /* [3189] */
    (xdc_Char)0x61,  /* [3190] */
    (xdc_Char)0x64,  /* [3191] */
    (xdc_Char)0x79,  /* [3192] */
    (xdc_Char)0x20,  /* [3193] */
    (xdc_Char)0x66,  /* [3194] */
    (xdc_Char)0x72,  /* [3195] */
    (xdc_Char)0x65,  /* [3196] */
    (xdc_Char)0x65,  /* [3197] */
    (xdc_Char)0x0,  /* [3198] */
    (xdc_Char)0x41,  /* [3199] */
    (xdc_Char)0x5f,  /* [3200] */
    (xdc_Char)0x62,  /* [3201] */
    (xdc_Char)0x75,  /* [3202] */
    (xdc_Char)0x66,  /* [3203] */
    (xdc_Char)0x4f,  /* [3204] */
    (xdc_Char)0x76,  /* [3205] */
    (xdc_Char)0x65,  /* [3206] */
    (xdc_Char)0x72,  /* [3207] */
    (xdc_Char)0x66,  /* [3208] */
    (xdc_Char)0x6c,  /* [3209] */
    (xdc_Char)0x6f,  /* [3210] */
    (xdc_Char)0x77,  /* [3211] */
    (xdc_Char)0x3a,  /* [3212] */
    (xdc_Char)0x20,  /* [3213] */
    (xdc_Char)0x42,  /* [3214] */
    (xdc_Char)0x75,  /* [3215] */
    (xdc_Char)0x66,  /* [3216] */
    (xdc_Char)0x66,  /* [3217] */
    (xdc_Char)0x65,  /* [3218] */
    (xdc_Char)0x72,  /* [3219] */
    (xdc_Char)0x20,  /* [3220] */
    (xdc_Char)0x6f,  /* [3221] */
    (xdc_Char)0x76,  /* [3222] */
    (xdc_Char)0x65,  /* [3223] */
    (xdc_Char)0x72,  /* [3224] */
    (xdc_Char)0x66,  /* [3225] */
    (xdc_Char)0x6c,  /* [3226] */
    (xdc_Char)0x6f,  /* [3227] */
    (xdc_Char)0x77,  /* [3228] */
    (xdc_Char)0x0,  /* [3229] */
    (xdc_Char)0x41,  /* [3230] */
    (xdc_Char)0x5f,  /* [3231] */
    (xdc_Char)0x6e,  /* [3232] */
    (xdc_Char)0x6f,  /* [3233] */
    (xdc_Char)0x74,  /* [3234] */
    (xdc_Char)0x45,  /* [3235] */
    (xdc_Char)0x6d,  /* [3236] */
    (xdc_Char)0x70,  /* [3237] */
    (xdc_Char)0x74,  /* [3238] */
    (xdc_Char)0x79,  /* [3239] */
    (xdc_Char)0x3a,  /* [3240] */
    (xdc_Char)0x20,  /* [3241] */
    (xdc_Char)0x48,  /* [3242] */
    (xdc_Char)0x65,  /* [3243] */
    (xdc_Char)0x61,  /* [3244] */
    (xdc_Char)0x70,  /* [3245] */
    (xdc_Char)0x20,  /* [3246] */
    (xdc_Char)0x6e,  /* [3247] */
    (xdc_Char)0x6f,  /* [3248] */
    (xdc_Char)0x74,  /* [3249] */
    (xdc_Char)0x20,  /* [3250] */
    (xdc_Char)0x65,  /* [3251] */
    (xdc_Char)0x6d,  /* [3252] */
    (xdc_Char)0x70,  /* [3253] */
    (xdc_Char)0x74,  /* [3254] */
    (xdc_Char)0x79,  /* [3255] */
    (xdc_Char)0x0,  /* [3256] */
    (xdc_Char)0x41,  /* [3257] */
    (xdc_Char)0x5f,  /* [3258] */
    (xdc_Char)0x6e,  /* [3259] */
    (xdc_Char)0x75,  /* [3260] */
    (xdc_Char)0x6c,  /* [3261] */
    (xdc_Char)0x6c,  /* [3262] */
    (xdc_Char)0x4f,  /* [3263] */
    (xdc_Char)0x62,  /* [3264] */
    (xdc_Char)0x6a,  /* [3265] */
    (xdc_Char)0x65,  /* [3266] */
    (xdc_Char)0x63,  /* [3267] */
    (xdc_Char)0x74,  /* [3268] */
    (xdc_Char)0x3a,  /* [3269] */
    (xdc_Char)0x20,  /* [3270] */
    (xdc_Char)0x48,  /* [3271] */
    (xdc_Char)0x65,  /* [3272] */
    (xdc_Char)0x61,  /* [3273] */
    (xdc_Char)0x70,  /* [3274] */
    (xdc_Char)0x54,  /* [3275] */
    (xdc_Char)0x72,  /* [3276] */
    (xdc_Char)0x61,  /* [3277] */
    (xdc_Char)0x63,  /* [3278] */
    (xdc_Char)0x6b,  /* [3279] */
    (xdc_Char)0x5f,  /* [3280] */
    (xdc_Char)0x70,  /* [3281] */
    (xdc_Char)0x72,  /* [3282] */
    (xdc_Char)0x69,  /* [3283] */
    (xdc_Char)0x6e,  /* [3284] */
    (xdc_Char)0x74,  /* [3285] */
    (xdc_Char)0x48,  /* [3286] */
    (xdc_Char)0x65,  /* [3287] */
    (xdc_Char)0x61,  /* [3288] */
    (xdc_Char)0x70,  /* [3289] */
    (xdc_Char)0x20,  /* [3290] */
    (xdc_Char)0x63,  /* [3291] */
    (xdc_Char)0x61,  /* [3292] */
    (xdc_Char)0x6c,  /* [3293] */
    (xdc_Char)0x6c,  /* [3294] */
    (xdc_Char)0x65,  /* [3295] */
    (xdc_Char)0x64,  /* [3296] */
    (xdc_Char)0x20,  /* [3297] */
    (xdc_Char)0x77,  /* [3298] */
    (xdc_Char)0x69,  /* [3299] */
    (xdc_Char)0x74,  /* [3300] */
    (xdc_Char)0x68,  /* [3301] */
    (xdc_Char)0x20,  /* [3302] */
    (xdc_Char)0x6e,  /* [3303] */
    (xdc_Char)0x75,  /* [3304] */
    (xdc_Char)0x6c,  /* [3305] */
    (xdc_Char)0x6c,  /* [3306] */
    (xdc_Char)0x20,  /* [3307] */
    (xdc_Char)0x6f,  /* [3308] */
    (xdc_Char)0x62,  /* [3309] */
    (xdc_Char)0x6a,  /* [3310] */
    (xdc_Char)0x0,  /* [3311] */
    (xdc_Char)0x41,  /* [3312] */
    (xdc_Char)0x5f,  /* [3313] */
    (xdc_Char)0x62,  /* [3314] */
    (xdc_Char)0x61,  /* [3315] */
    (xdc_Char)0x64,  /* [3316] */
    (xdc_Char)0x43,  /* [3317] */
    (xdc_Char)0x6f,  /* [3318] */
    (xdc_Char)0x6e,  /* [3319] */
    (xdc_Char)0x74,  /* [3320] */
    (xdc_Char)0x65,  /* [3321] */
    (xdc_Char)0x78,  /* [3322] */
    (xdc_Char)0x74,  /* [3323] */
    (xdc_Char)0x3a,  /* [3324] */
    (xdc_Char)0x20,  /* [3325] */
    (xdc_Char)0x62,  /* [3326] */
    (xdc_Char)0x61,  /* [3327] */
    (xdc_Char)0x64,  /* [3328] */
    (xdc_Char)0x20,  /* [3329] */
    (xdc_Char)0x63,  /* [3330] */
    (xdc_Char)0x61,  /* [3331] */
    (xdc_Char)0x6c,  /* [3332] */
    (xdc_Char)0x6c,  /* [3333] */
    (xdc_Char)0x69,  /* [3334] */
    (xdc_Char)0x6e,  /* [3335] */
    (xdc_Char)0x67,  /* [3336] */
    (xdc_Char)0x20,  /* [3337] */
    (xdc_Char)0x63,  /* [3338] */
    (xdc_Char)0x6f,  /* [3339] */
    (xdc_Char)0x6e,  /* [3340] */
    (xdc_Char)0x74,  /* [3341] */
    (xdc_Char)0x65,  /* [3342] */
    (xdc_Char)0x78,  /* [3343] */
    (xdc_Char)0x74,  /* [3344] */
    (xdc_Char)0x2e,  /* [3345] */
    (xdc_Char)0x20,  /* [3346] */
    (xdc_Char)0x4d,  /* [3347] */
    (xdc_Char)0x61,  /* [3348] */
    (xdc_Char)0x79,  /* [3349] */
    (xdc_Char)0x20,  /* [3350] */
    (xdc_Char)0x6e,  /* [3351] */
    (xdc_Char)0x6f,  /* [3352] */
    (xdc_Char)0x74,  /* [3353] */
    (xdc_Char)0x20,  /* [3354] */
    (xdc_Char)0x62,  /* [3355] */
    (xdc_Char)0x65,  /* [3356] */
    (xdc_Char)0x20,  /* [3357] */
    (xdc_Char)0x65,  /* [3358] */
    (xdc_Char)0x6e,  /* [3359] */
    (xdc_Char)0x74,  /* [3360] */
    (xdc_Char)0x65,  /* [3361] */
    (xdc_Char)0x72,  /* [3362] */
    (xdc_Char)0x65,  /* [3363] */
    (xdc_Char)0x64,  /* [3364] */
    (xdc_Char)0x20,  /* [3365] */
    (xdc_Char)0x66,  /* [3366] */
    (xdc_Char)0x72,  /* [3367] */
    (xdc_Char)0x6f,  /* [3368] */
    (xdc_Char)0x6d,  /* [3369] */
    (xdc_Char)0x20,  /* [3370] */
    (xdc_Char)0x61,  /* [3371] */
    (xdc_Char)0x20,  /* [3372] */
    (xdc_Char)0x68,  /* [3373] */
    (xdc_Char)0x61,  /* [3374] */
    (xdc_Char)0x72,  /* [3375] */
    (xdc_Char)0x64,  /* [3376] */
    (xdc_Char)0x77,  /* [3377] */
    (xdc_Char)0x61,  /* [3378] */
    (xdc_Char)0x72,  /* [3379] */
    (xdc_Char)0x65,  /* [3380] */
    (xdc_Char)0x20,  /* [3381] */
    (xdc_Char)0x69,  /* [3382] */
    (xdc_Char)0x6e,  /* [3383] */
    (xdc_Char)0x74,  /* [3384] */
    (xdc_Char)0x65,  /* [3385] */
    (xdc_Char)0x72,  /* [3386] */
    (xdc_Char)0x72,  /* [3387] */
    (xdc_Char)0x75,  /* [3388] */
    (xdc_Char)0x70,  /* [3389] */
    (xdc_Char)0x74,  /* [3390] */
    (xdc_Char)0x20,  /* [3391] */
    (xdc_Char)0x74,  /* [3392] */
    (xdc_Char)0x68,  /* [3393] */
    (xdc_Char)0x72,  /* [3394] */
    (xdc_Char)0x65,  /* [3395] */
    (xdc_Char)0x61,  /* [3396] */
    (xdc_Char)0x64,  /* [3397] */
    (xdc_Char)0x2e,  /* [3398] */
    (xdc_Char)0x0,  /* [3399] */
    (xdc_Char)0x41,  /* [3400] */
    (xdc_Char)0x5f,  /* [3401] */
    (xdc_Char)0x62,  /* [3402] */
    (xdc_Char)0x61,  /* [3403] */
    (xdc_Char)0x64,  /* [3404] */
    (xdc_Char)0x43,  /* [3405] */
    (xdc_Char)0x6f,  /* [3406] */
    (xdc_Char)0x6e,  /* [3407] */
    (xdc_Char)0x74,  /* [3408] */
    (xdc_Char)0x65,  /* [3409] */
    (xdc_Char)0x78,  /* [3410] */
    (xdc_Char)0x74,  /* [3411] */
    (xdc_Char)0x3a,  /* [3412] */
    (xdc_Char)0x20,  /* [3413] */
    (xdc_Char)0x62,  /* [3414] */
    (xdc_Char)0x61,  /* [3415] */
    (xdc_Char)0x64,  /* [3416] */
    (xdc_Char)0x20,  /* [3417] */
    (xdc_Char)0x63,  /* [3418] */
    (xdc_Char)0x61,  /* [3419] */
    (xdc_Char)0x6c,  /* [3420] */
    (xdc_Char)0x6c,  /* [3421] */
    (xdc_Char)0x69,  /* [3422] */
    (xdc_Char)0x6e,  /* [3423] */
    (xdc_Char)0x67,  /* [3424] */
    (xdc_Char)0x20,  /* [3425] */
    (xdc_Char)0x63,  /* [3426] */
    (xdc_Char)0x6f,  /* [3427] */
    (xdc_Char)0x6e,  /* [3428] */
    (xdc_Char)0x74,  /* [3429] */
    (xdc_Char)0x65,  /* [3430] */
    (xdc_Char)0x78,  /* [3431] */
    (xdc_Char)0x74,  /* [3432] */
    (xdc_Char)0x2e,  /* [3433] */
    (xdc_Char)0x20,  /* [3434] */
    (xdc_Char)0x4d,  /* [3435] */
    (xdc_Char)0x61,  /* [3436] */
    (xdc_Char)0x79,  /* [3437] */
    (xdc_Char)0x20,  /* [3438] */
    (xdc_Char)0x6e,  /* [3439] */
    (xdc_Char)0x6f,  /* [3440] */
    (xdc_Char)0x74,  /* [3441] */
    (xdc_Char)0x20,  /* [3442] */
    (xdc_Char)0x62,  /* [3443] */
    (xdc_Char)0x65,  /* [3444] */
    (xdc_Char)0x20,  /* [3445] */
    (xdc_Char)0x65,  /* [3446] */
    (xdc_Char)0x6e,  /* [3447] */
    (xdc_Char)0x74,  /* [3448] */
    (xdc_Char)0x65,  /* [3449] */
    (xdc_Char)0x72,  /* [3450] */
    (xdc_Char)0x65,  /* [3451] */
    (xdc_Char)0x64,  /* [3452] */
    (xdc_Char)0x20,  /* [3453] */
    (xdc_Char)0x66,  /* [3454] */
    (xdc_Char)0x72,  /* [3455] */
    (xdc_Char)0x6f,  /* [3456] */
    (xdc_Char)0x6d,  /* [3457] */
    (xdc_Char)0x20,  /* [3458] */
    (xdc_Char)0x61,  /* [3459] */
    (xdc_Char)0x20,  /* [3460] */
    (xdc_Char)0x73,  /* [3461] */
    (xdc_Char)0x6f,  /* [3462] */
    (xdc_Char)0x66,  /* [3463] */
    (xdc_Char)0x74,  /* [3464] */
    (xdc_Char)0x77,  /* [3465] */
    (xdc_Char)0x61,  /* [3466] */
    (xdc_Char)0x72,  /* [3467] */
    (xdc_Char)0x65,  /* [3468] */
    (xdc_Char)0x20,  /* [3469] */
    (xdc_Char)0x6f,  /* [3470] */
    (xdc_Char)0x72,  /* [3471] */
    (xdc_Char)0x20,  /* [3472] */
    (xdc_Char)0x68,  /* [3473] */
    (xdc_Char)0x61,  /* [3474] */
    (xdc_Char)0x72,  /* [3475] */
    (xdc_Char)0x64,  /* [3476] */
    (xdc_Char)0x77,  /* [3477] */
    (xdc_Char)0x61,  /* [3478] */
    (xdc_Char)0x72,  /* [3479] */
    (xdc_Char)0x65,  /* [3480] */
    (xdc_Char)0x20,  /* [3481] */
    (xdc_Char)0x69,  /* [3482] */
    (xdc_Char)0x6e,  /* [3483] */
    (xdc_Char)0x74,  /* [3484] */
    (xdc_Char)0x65,  /* [3485] */
    (xdc_Char)0x72,  /* [3486] */
    (xdc_Char)0x72,  /* [3487] */
    (xdc_Char)0x75,  /* [3488] */
    (xdc_Char)0x70,  /* [3489] */
    (xdc_Char)0x74,  /* [3490] */
    (xdc_Char)0x20,  /* [3491] */
    (xdc_Char)0x74,  /* [3492] */
    (xdc_Char)0x68,  /* [3493] */
    (xdc_Char)0x72,  /* [3494] */
    (xdc_Char)0x65,  /* [3495] */
    (xdc_Char)0x61,  /* [3496] */
    (xdc_Char)0x64,  /* [3497] */
    (xdc_Char)0x2e,  /* [3498] */
    (xdc_Char)0x0,  /* [3499] */
    (xdc_Char)0x41,  /* [3500] */
    (xdc_Char)0x5f,  /* [3501] */
    (xdc_Char)0x62,  /* [3502] */
    (xdc_Char)0x61,  /* [3503] */
    (xdc_Char)0x64,  /* [3504] */
    (xdc_Char)0x43,  /* [3505] */
    (xdc_Char)0x6f,  /* [3506] */
    (xdc_Char)0x6e,  /* [3507] */
    (xdc_Char)0x74,  /* [3508] */
    (xdc_Char)0x65,  /* [3509] */
    (xdc_Char)0x78,  /* [3510] */
    (xdc_Char)0x74,  /* [3511] */
    (xdc_Char)0x3a,  /* [3512] */
    (xdc_Char)0x20,  /* [3513] */
    (xdc_Char)0x62,  /* [3514] */
    (xdc_Char)0x61,  /* [3515] */
    (xdc_Char)0x64,  /* [3516] */
    (xdc_Char)0x20,  /* [3517] */
    (xdc_Char)0x63,  /* [3518] */
    (xdc_Char)0x61,  /* [3519] */
    (xdc_Char)0x6c,  /* [3520] */
    (xdc_Char)0x6c,  /* [3521] */
    (xdc_Char)0x69,  /* [3522] */
    (xdc_Char)0x6e,  /* [3523] */
    (xdc_Char)0x67,  /* [3524] */
    (xdc_Char)0x20,  /* [3525] */
    (xdc_Char)0x63,  /* [3526] */
    (xdc_Char)0x6f,  /* [3527] */
    (xdc_Char)0x6e,  /* [3528] */
    (xdc_Char)0x74,  /* [3529] */
    (xdc_Char)0x65,  /* [3530] */
    (xdc_Char)0x78,  /* [3531] */
    (xdc_Char)0x74,  /* [3532] */
    (xdc_Char)0x2e,  /* [3533] */
    (xdc_Char)0x20,  /* [3534] */
    (xdc_Char)0x53,  /* [3535] */
    (xdc_Char)0x65,  /* [3536] */
    (xdc_Char)0x65,  /* [3537] */
    (xdc_Char)0x20,  /* [3538] */
    (xdc_Char)0x47,  /* [3539] */
    (xdc_Char)0x61,  /* [3540] */
    (xdc_Char)0x74,  /* [3541] */
    (xdc_Char)0x65,  /* [3542] */
    (xdc_Char)0x4d,  /* [3543] */
    (xdc_Char)0x75,  /* [3544] */
    (xdc_Char)0x74,  /* [3545] */
    (xdc_Char)0x65,  /* [3546] */
    (xdc_Char)0x78,  /* [3547] */
    (xdc_Char)0x50,  /* [3548] */
    (xdc_Char)0x72,  /* [3549] */
    (xdc_Char)0x69,  /* [3550] */
    (xdc_Char)0x20,  /* [3551] */
    (xdc_Char)0x41,  /* [3552] */
    (xdc_Char)0x50,  /* [3553] */
    (xdc_Char)0x49,  /* [3554] */
    (xdc_Char)0x20,  /* [3555] */
    (xdc_Char)0x64,  /* [3556] */
    (xdc_Char)0x6f,  /* [3557] */
    (xdc_Char)0x63,  /* [3558] */
    (xdc_Char)0x20,  /* [3559] */
    (xdc_Char)0x66,  /* [3560] */
    (xdc_Char)0x6f,  /* [3561] */
    (xdc_Char)0x72,  /* [3562] */
    (xdc_Char)0x20,  /* [3563] */
    (xdc_Char)0x64,  /* [3564] */
    (xdc_Char)0x65,  /* [3565] */
    (xdc_Char)0x74,  /* [3566] */
    (xdc_Char)0x61,  /* [3567] */
    (xdc_Char)0x69,  /* [3568] */
    (xdc_Char)0x6c,  /* [3569] */
    (xdc_Char)0x73,  /* [3570] */
    (xdc_Char)0x2e,  /* [3571] */
    (xdc_Char)0x0,  /* [3572] */
    (xdc_Char)0x41,  /* [3573] */
    (xdc_Char)0x5f,  /* [3574] */
    (xdc_Char)0x65,  /* [3575] */
    (xdc_Char)0x6e,  /* [3576] */
    (xdc_Char)0x74,  /* [3577] */
    (xdc_Char)0x65,  /* [3578] */
    (xdc_Char)0x72,  /* [3579] */
    (xdc_Char)0x54,  /* [3580] */
    (xdc_Char)0x61,  /* [3581] */
    (xdc_Char)0x73,  /* [3582] */
    (xdc_Char)0x6b,  /* [3583] */
    (xdc_Char)0x44,  /* [3584] */
    (xdc_Char)0x69,  /* [3585] */
    (xdc_Char)0x73,  /* [3586] */
    (xdc_Char)0x61,  /* [3587] */
    (xdc_Char)0x62,  /* [3588] */
    (xdc_Char)0x6c,  /* [3589] */
    (xdc_Char)0x65,  /* [3590] */
    (xdc_Char)0x64,  /* [3591] */
    (xdc_Char)0x3a,  /* [3592] */
    (xdc_Char)0x20,  /* [3593] */
    (xdc_Char)0x43,  /* [3594] */
    (xdc_Char)0x61,  /* [3595] */
    (xdc_Char)0x6e,  /* [3596] */
    (xdc_Char)0x6e,  /* [3597] */
    (xdc_Char)0x6f,  /* [3598] */
    (xdc_Char)0x74,  /* [3599] */
    (xdc_Char)0x20,  /* [3600] */
    (xdc_Char)0x63,  /* [3601] */
    (xdc_Char)0x61,  /* [3602] */
    (xdc_Char)0x6c,  /* [3603] */
    (xdc_Char)0x6c,  /* [3604] */
    (xdc_Char)0x20,  /* [3605] */
    (xdc_Char)0x47,  /* [3606] */
    (xdc_Char)0x61,  /* [3607] */
    (xdc_Char)0x74,  /* [3608] */
    (xdc_Char)0x65,  /* [3609] */
    (xdc_Char)0x4d,  /* [3610] */
    (xdc_Char)0x75,  /* [3611] */
    (xdc_Char)0x74,  /* [3612] */
    (xdc_Char)0x65,  /* [3613] */
    (xdc_Char)0x78,  /* [3614] */
    (xdc_Char)0x50,  /* [3615] */
    (xdc_Char)0x72,  /* [3616] */
    (xdc_Char)0x69,  /* [3617] */
    (xdc_Char)0x5f,  /* [3618] */
    (xdc_Char)0x65,  /* [3619] */
    (xdc_Char)0x6e,  /* [3620] */
    (xdc_Char)0x74,  /* [3621] */
    (xdc_Char)0x65,  /* [3622] */
    (xdc_Char)0x72,  /* [3623] */
    (xdc_Char)0x28,  /* [3624] */
    (xdc_Char)0x29,  /* [3625] */
    (xdc_Char)0x20,  /* [3626] */
    (xdc_Char)0x77,  /* [3627] */
    (xdc_Char)0x68,  /* [3628] */
    (xdc_Char)0x69,  /* [3629] */
    (xdc_Char)0x6c,  /* [3630] */
    (xdc_Char)0x65,  /* [3631] */
    (xdc_Char)0x20,  /* [3632] */
    (xdc_Char)0x74,  /* [3633] */
    (xdc_Char)0x68,  /* [3634] */
    (xdc_Char)0x65,  /* [3635] */
    (xdc_Char)0x20,  /* [3636] */
    (xdc_Char)0x54,  /* [3637] */
    (xdc_Char)0x61,  /* [3638] */
    (xdc_Char)0x73,  /* [3639] */
    (xdc_Char)0x6b,  /* [3640] */
    (xdc_Char)0x20,  /* [3641] */
    (xdc_Char)0x6f,  /* [3642] */
    (xdc_Char)0x72,  /* [3643] */
    (xdc_Char)0x20,  /* [3644] */
    (xdc_Char)0x53,  /* [3645] */
    (xdc_Char)0x77,  /* [3646] */
    (xdc_Char)0x69,  /* [3647] */
    (xdc_Char)0x20,  /* [3648] */
    (xdc_Char)0x73,  /* [3649] */
    (xdc_Char)0x63,  /* [3650] */
    (xdc_Char)0x68,  /* [3651] */
    (xdc_Char)0x65,  /* [3652] */
    (xdc_Char)0x64,  /* [3653] */
    (xdc_Char)0x75,  /* [3654] */
    (xdc_Char)0x6c,  /* [3655] */
    (xdc_Char)0x65,  /* [3656] */
    (xdc_Char)0x72,  /* [3657] */
    (xdc_Char)0x20,  /* [3658] */
    (xdc_Char)0x69,  /* [3659] */
    (xdc_Char)0x73,  /* [3660] */
    (xdc_Char)0x20,  /* [3661] */
    (xdc_Char)0x64,  /* [3662] */
    (xdc_Char)0x69,  /* [3663] */
    (xdc_Char)0x73,  /* [3664] */
    (xdc_Char)0x61,  /* [3665] */
    (xdc_Char)0x62,  /* [3666] */
    (xdc_Char)0x6c,  /* [3667] */
    (xdc_Char)0x65,  /* [3668] */
    (xdc_Char)0x64,  /* [3669] */
    (xdc_Char)0x2e,  /* [3670] */
    (xdc_Char)0x0,  /* [3671] */
    (xdc_Char)0x41,  /* [3672] */
    (xdc_Char)0x5f,  /* [3673] */
    (xdc_Char)0x62,  /* [3674] */
    (xdc_Char)0x61,  /* [3675] */
    (xdc_Char)0x64,  /* [3676] */
    (xdc_Char)0x43,  /* [3677] */
    (xdc_Char)0x6f,  /* [3678] */
    (xdc_Char)0x6e,  /* [3679] */
    (xdc_Char)0x74,  /* [3680] */
    (xdc_Char)0x65,  /* [3681] */
    (xdc_Char)0x78,  /* [3682] */
    (xdc_Char)0x74,  /* [3683] */
    (xdc_Char)0x3a,  /* [3684] */
    (xdc_Char)0x20,  /* [3685] */
    (xdc_Char)0x62,  /* [3686] */
    (xdc_Char)0x61,  /* [3687] */
    (xdc_Char)0x64,  /* [3688] */
    (xdc_Char)0x20,  /* [3689] */
    (xdc_Char)0x63,  /* [3690] */
    (xdc_Char)0x61,  /* [3691] */
    (xdc_Char)0x6c,  /* [3692] */
    (xdc_Char)0x6c,  /* [3693] */
    (xdc_Char)0x69,  /* [3694] */
    (xdc_Char)0x6e,  /* [3695] */
    (xdc_Char)0x67,  /* [3696] */
    (xdc_Char)0x20,  /* [3697] */
    (xdc_Char)0x63,  /* [3698] */
    (xdc_Char)0x6f,  /* [3699] */
    (xdc_Char)0x6e,  /* [3700] */
    (xdc_Char)0x74,  /* [3701] */
    (xdc_Char)0x65,  /* [3702] */
    (xdc_Char)0x78,  /* [3703] */
    (xdc_Char)0x74,  /* [3704] */
    (xdc_Char)0x2e,  /* [3705] */
    (xdc_Char)0x20,  /* [3706] */
    (xdc_Char)0x53,  /* [3707] */
    (xdc_Char)0x65,  /* [3708] */
    (xdc_Char)0x65,  /* [3709] */
    (xdc_Char)0x20,  /* [3710] */
    (xdc_Char)0x47,  /* [3711] */
    (xdc_Char)0x61,  /* [3712] */
    (xdc_Char)0x74,  /* [3713] */
    (xdc_Char)0x65,  /* [3714] */
    (xdc_Char)0x4d,  /* [3715] */
    (xdc_Char)0x75,  /* [3716] */
    (xdc_Char)0x74,  /* [3717] */
    (xdc_Char)0x65,  /* [3718] */
    (xdc_Char)0x78,  /* [3719] */
    (xdc_Char)0x20,  /* [3720] */
    (xdc_Char)0x41,  /* [3721] */
    (xdc_Char)0x50,  /* [3722] */
    (xdc_Char)0x49,  /* [3723] */
    (xdc_Char)0x20,  /* [3724] */
    (xdc_Char)0x64,  /* [3725] */
    (xdc_Char)0x6f,  /* [3726] */
    (xdc_Char)0x63,  /* [3727] */
    (xdc_Char)0x20,  /* [3728] */
    (xdc_Char)0x66,  /* [3729] */
    (xdc_Char)0x6f,  /* [3730] */
    (xdc_Char)0x72,  /* [3731] */
    (xdc_Char)0x20,  /* [3732] */
    (xdc_Char)0x64,  /* [3733] */
    (xdc_Char)0x65,  /* [3734] */
    (xdc_Char)0x74,  /* [3735] */
    (xdc_Char)0x61,  /* [3736] */
    (xdc_Char)0x69,  /* [3737] */
    (xdc_Char)0x6c,  /* [3738] */
    (xdc_Char)0x73,  /* [3739] */
    (xdc_Char)0x2e,  /* [3740] */
    (xdc_Char)0x0,  /* [3741] */
    (xdc_Char)0x41,  /* [3742] */
    (xdc_Char)0x5f,  /* [3743] */
    (xdc_Char)0x62,  /* [3744] */
    (xdc_Char)0x61,  /* [3745] */
    (xdc_Char)0x64,  /* [3746] */
    (xdc_Char)0x43,  /* [3747] */
    (xdc_Char)0x6f,  /* [3748] */
    (xdc_Char)0x6e,  /* [3749] */
    (xdc_Char)0x74,  /* [3750] */
    (xdc_Char)0x65,  /* [3751] */
    (xdc_Char)0x78,  /* [3752] */
    (xdc_Char)0x74,  /* [3753] */
    (xdc_Char)0x3a,  /* [3754] */
    (xdc_Char)0x20,  /* [3755] */
    (xdc_Char)0x62,  /* [3756] */
    (xdc_Char)0x61,  /* [3757] */
    (xdc_Char)0x64,  /* [3758] */
    (xdc_Char)0x20,  /* [3759] */
    (xdc_Char)0x63,  /* [3760] */
    (xdc_Char)0x61,  /* [3761] */
    (xdc_Char)0x6c,  /* [3762] */
    (xdc_Char)0x6c,  /* [3763] */
    (xdc_Char)0x69,  /* [3764] */
    (xdc_Char)0x6e,  /* [3765] */
    (xdc_Char)0x67,  /* [3766] */
    (xdc_Char)0x20,  /* [3767] */
    (xdc_Char)0x63,  /* [3768] */
    (xdc_Char)0x6f,  /* [3769] */
    (xdc_Char)0x6e,  /* [3770] */
    (xdc_Char)0x74,  /* [3771] */
    (xdc_Char)0x65,  /* [3772] */
    (xdc_Char)0x78,  /* [3773] */
    (xdc_Char)0x74,  /* [3774] */
    (xdc_Char)0x2e,  /* [3775] */
    (xdc_Char)0x20,  /* [3776] */
    (xdc_Char)0x53,  /* [3777] */
    (xdc_Char)0x65,  /* [3778] */
    (xdc_Char)0x65,  /* [3779] */
    (xdc_Char)0x20,  /* [3780] */
    (xdc_Char)0x47,  /* [3781] */
    (xdc_Char)0x61,  /* [3782] */
    (xdc_Char)0x74,  /* [3783] */
    (xdc_Char)0x65,  /* [3784] */
    (xdc_Char)0x53,  /* [3785] */
    (xdc_Char)0x70,  /* [3786] */
    (xdc_Char)0x69,  /* [3787] */
    (xdc_Char)0x6e,  /* [3788] */
    (xdc_Char)0x6c,  /* [3789] */
    (xdc_Char)0x6f,  /* [3790] */
    (xdc_Char)0x63,  /* [3791] */
    (xdc_Char)0x6b,  /* [3792] */
    (xdc_Char)0x20,  /* [3793] */
    (xdc_Char)0x41,  /* [3794] */
    (xdc_Char)0x50,  /* [3795] */
    (xdc_Char)0x49,  /* [3796] */
    (xdc_Char)0x20,  /* [3797] */
    (xdc_Char)0x64,  /* [3798] */
    (xdc_Char)0x6f,  /* [3799] */
    (xdc_Char)0x63,  /* [3800] */
    (xdc_Char)0x20,  /* [3801] */
    (xdc_Char)0x66,  /* [3802] */
    (xdc_Char)0x6f,  /* [3803] */
    (xdc_Char)0x72,  /* [3804] */
    (xdc_Char)0x20,  /* [3805] */
    (xdc_Char)0x64,  /* [3806] */
    (xdc_Char)0x65,  /* [3807] */
    (xdc_Char)0x74,  /* [3808] */
    (xdc_Char)0x61,  /* [3809] */
    (xdc_Char)0x69,  /* [3810] */
    (xdc_Char)0x6c,  /* [3811] */
    (xdc_Char)0x73,  /* [3812] */
    (xdc_Char)0x2e,  /* [3813] */
    (xdc_Char)0x0,  /* [3814] */
    (xdc_Char)0x41,  /* [3815] */
    (xdc_Char)0x5f,  /* [3816] */
    (xdc_Char)0x69,  /* [3817] */
    (xdc_Char)0x6e,  /* [3818] */
    (xdc_Char)0x76,  /* [3819] */
    (xdc_Char)0x61,  /* [3820] */
    (xdc_Char)0x6c,  /* [3821] */
    (xdc_Char)0x69,  /* [3822] */
    (xdc_Char)0x64,  /* [3823] */
    (xdc_Char)0x51,  /* [3824] */
    (xdc_Char)0x75,  /* [3825] */
    (xdc_Char)0x61,  /* [3826] */
    (xdc_Char)0x6c,  /* [3827] */
    (xdc_Char)0x69,  /* [3828] */
    (xdc_Char)0x74,  /* [3829] */
    (xdc_Char)0x79,  /* [3830] */
    (xdc_Char)0x3a,  /* [3831] */
    (xdc_Char)0x20,  /* [3832] */
    (xdc_Char)0x53,  /* [3833] */
    (xdc_Char)0x65,  /* [3834] */
    (xdc_Char)0x65,  /* [3835] */
    (xdc_Char)0x20,  /* [3836] */
    (xdc_Char)0x47,  /* [3837] */
    (xdc_Char)0x61,  /* [3838] */
    (xdc_Char)0x74,  /* [3839] */
    (xdc_Char)0x65,  /* [3840] */
    (xdc_Char)0x53,  /* [3841] */
    (xdc_Char)0x70,  /* [3842] */
    (xdc_Char)0x69,  /* [3843] */
    (xdc_Char)0x6e,  /* [3844] */
    (xdc_Char)0x6c,  /* [3845] */
    (xdc_Char)0x6f,  /* [3846] */
    (xdc_Char)0x63,  /* [3847] */
    (xdc_Char)0x6b,  /* [3848] */
    (xdc_Char)0x20,  /* [3849] */
    (xdc_Char)0x41,  /* [3850] */
    (xdc_Char)0x50,  /* [3851] */
    (xdc_Char)0x49,  /* [3852] */
    (xdc_Char)0x20,  /* [3853] */
    (xdc_Char)0x64,  /* [3854] */
    (xdc_Char)0x6f,  /* [3855] */
    (xdc_Char)0x63,  /* [3856] */
    (xdc_Char)0x20,  /* [3857] */
    (xdc_Char)0x66,  /* [3858] */
    (xdc_Char)0x6f,  /* [3859] */
    (xdc_Char)0x72,  /* [3860] */
    (xdc_Char)0x20,  /* [3861] */
    (xdc_Char)0x64,  /* [3862] */
    (xdc_Char)0x65,  /* [3863] */
    (xdc_Char)0x74,  /* [3864] */
    (xdc_Char)0x61,  /* [3865] */
    (xdc_Char)0x69,  /* [3866] */
    (xdc_Char)0x6c,  /* [3867] */
    (xdc_Char)0x73,  /* [3868] */
    (xdc_Char)0x2e,  /* [3869] */
    (xdc_Char)0x0,  /* [3870] */
    (xdc_Char)0x61,  /* [3871] */
    (xdc_Char)0x73,  /* [3872] */
    (xdc_Char)0x73,  /* [3873] */
    (xdc_Char)0x65,  /* [3874] */
    (xdc_Char)0x72,  /* [3875] */
    (xdc_Char)0x74,  /* [3876] */
    (xdc_Char)0x69,  /* [3877] */
    (xdc_Char)0x6f,  /* [3878] */
    (xdc_Char)0x6e,  /* [3879] */
    (xdc_Char)0x20,  /* [3880] */
    (xdc_Char)0x66,  /* [3881] */
    (xdc_Char)0x61,  /* [3882] */
    (xdc_Char)0x69,  /* [3883] */
    (xdc_Char)0x6c,  /* [3884] */
    (xdc_Char)0x75,  /* [3885] */
    (xdc_Char)0x72,  /* [3886] */
    (xdc_Char)0x65,  /* [3887] */
    (xdc_Char)0x25,  /* [3888] */
    (xdc_Char)0x73,  /* [3889] */
    (xdc_Char)0x25,  /* [3890] */
    (xdc_Char)0x73,  /* [3891] */
    (xdc_Char)0x0,  /* [3892] */
    (xdc_Char)0x25,  /* [3893] */
    (xdc_Char)0x24,  /* [3894] */
    (xdc_Char)0x53,  /* [3895] */
    (xdc_Char)0x0,  /* [3896] */
    (xdc_Char)0x6f,  /* [3897] */
    (xdc_Char)0x75,  /* [3898] */
    (xdc_Char)0x74,  /* [3899] */
    (xdc_Char)0x20,  /* [3900] */
    (xdc_Char)0x6f,  /* [3901] */
    (xdc_Char)0x66,  /* [3902] */
    (xdc_Char)0x20,  /* [3903] */
    (xdc_Char)0x6d,  /* [3904] */
    (xdc_Char)0x65,  /* [3905] */
    (xdc_Char)0x6d,  /* [3906] */
    (xdc_Char)0x6f,  /* [3907] */
    (xdc_Char)0x72,  /* [3908] */
    (xdc_Char)0x79,  /* [3909] */
    (xdc_Char)0x3a,  /* [3910] */
    (xdc_Char)0x20,  /* [3911] */
    (xdc_Char)0x68,  /* [3912] */
    (xdc_Char)0x65,  /* [3913] */
    (xdc_Char)0x61,  /* [3914] */
    (xdc_Char)0x70,  /* [3915] */
    (xdc_Char)0x3d,  /* [3916] */
    (xdc_Char)0x30,  /* [3917] */
    (xdc_Char)0x78,  /* [3918] */
    (xdc_Char)0x25,  /* [3919] */
    (xdc_Char)0x78,  /* [3920] */
    (xdc_Char)0x2c,  /* [3921] */
    (xdc_Char)0x20,  /* [3922] */
    (xdc_Char)0x73,  /* [3923] */
    (xdc_Char)0x69,  /* [3924] */
    (xdc_Char)0x7a,  /* [3925] */
    (xdc_Char)0x65,  /* [3926] */
    (xdc_Char)0x3d,  /* [3927] */
    (xdc_Char)0x25,  /* [3928] */
    (xdc_Char)0x75,  /* [3929] */
    (xdc_Char)0x0,  /* [3930] */
    (xdc_Char)0x25,  /* [3931] */
    (xdc_Char)0x73,  /* [3932] */
    (xdc_Char)0x20,  /* [3933] */
    (xdc_Char)0x30,  /* [3934] */
    (xdc_Char)0x78,  /* [3935] */
    (xdc_Char)0x25,  /* [3936] */
    (xdc_Char)0x78,  /* [3937] */
    (xdc_Char)0x0,  /* [3938] */
    (xdc_Char)0x45,  /* [3939] */
    (xdc_Char)0x5f,  /* [3940] */
    (xdc_Char)0x62,  /* [3941] */
    (xdc_Char)0x61,  /* [3942] */
    (xdc_Char)0x64,  /* [3943] */
    (xdc_Char)0x4c,  /* [3944] */
    (xdc_Char)0x65,  /* [3945] */
    (xdc_Char)0x76,  /* [3946] */
    (xdc_Char)0x65,  /* [3947] */
    (xdc_Char)0x6c,  /* [3948] */
    (xdc_Char)0x3a,  /* [3949] */
    (xdc_Char)0x20,  /* [3950] */
    (xdc_Char)0x42,  /* [3951] */
    (xdc_Char)0x61,  /* [3952] */
    (xdc_Char)0x64,  /* [3953] */
    (xdc_Char)0x20,  /* [3954] */
    (xdc_Char)0x66,  /* [3955] */
    (xdc_Char)0x69,  /* [3956] */
    (xdc_Char)0x6c,  /* [3957] */
    (xdc_Char)0x74,  /* [3958] */
    (xdc_Char)0x65,  /* [3959] */
    (xdc_Char)0x72,  /* [3960] */
    (xdc_Char)0x20,  /* [3961] */
    (xdc_Char)0x6c,  /* [3962] */
    (xdc_Char)0x65,  /* [3963] */
    (xdc_Char)0x76,  /* [3964] */
    (xdc_Char)0x65,  /* [3965] */
    (xdc_Char)0x6c,  /* [3966] */
    (xdc_Char)0x20,  /* [3967] */
    (xdc_Char)0x76,  /* [3968] */
    (xdc_Char)0x61,  /* [3969] */
    (xdc_Char)0x6c,  /* [3970] */
    (xdc_Char)0x75,  /* [3971] */
    (xdc_Char)0x65,  /* [3972] */
    (xdc_Char)0x3a,  /* [3973] */
    (xdc_Char)0x20,  /* [3974] */
    (xdc_Char)0x25,  /* [3975] */
    (xdc_Char)0x64,  /* [3976] */
    (xdc_Char)0x0,  /* [3977] */
    (xdc_Char)0x66,  /* [3978] */
    (xdc_Char)0x72,  /* [3979] */
    (xdc_Char)0x65,  /* [3980] */
    (xdc_Char)0x65,  /* [3981] */
    (xdc_Char)0x28,  /* [3982] */
    (xdc_Char)0x29,  /* [3983] */
    (xdc_Char)0x20,  /* [3984] */
    (xdc_Char)0x69,  /* [3985] */
    (xdc_Char)0x6e,  /* [3986] */
    (xdc_Char)0x76,  /* [3987] */
    (xdc_Char)0x61,  /* [3988] */
    (xdc_Char)0x6c,  /* [3989] */
    (xdc_Char)0x69,  /* [3990] */
    (xdc_Char)0x64,  /* [3991] */
    (xdc_Char)0x20,  /* [3992] */
    (xdc_Char)0x69,  /* [3993] */
    (xdc_Char)0x6e,  /* [3994] */
    (xdc_Char)0x20,  /* [3995] */
    (xdc_Char)0x67,  /* [3996] */
    (xdc_Char)0x72,  /* [3997] */
    (xdc_Char)0x6f,  /* [3998] */
    (xdc_Char)0x77,  /* [3999] */
    (xdc_Char)0x74,  /* [4000] */
    (xdc_Char)0x68,  /* [4001] */
    (xdc_Char)0x2d,  /* [4002] */
    (xdc_Char)0x6f,  /* [4003] */
    (xdc_Char)0x6e,  /* [4004] */
    (xdc_Char)0x6c,  /* [4005] */
    (xdc_Char)0x79,  /* [4006] */
    (xdc_Char)0x20,  /* [4007] */
    (xdc_Char)0x48,  /* [4008] */
    (xdc_Char)0x65,  /* [4009] */
    (xdc_Char)0x61,  /* [4010] */
    (xdc_Char)0x70,  /* [4011] */
    (xdc_Char)0x4d,  /* [4012] */
    (xdc_Char)0x69,  /* [4013] */
    (xdc_Char)0x6e,  /* [4014] */
    (xdc_Char)0x0,  /* [4015] */
    (xdc_Char)0x54,  /* [4016] */
    (xdc_Char)0x68,  /* [4017] */
    (xdc_Char)0x65,  /* [4018] */
    (xdc_Char)0x20,  /* [4019] */
    (xdc_Char)0x52,  /* [4020] */
    (xdc_Char)0x54,  /* [4021] */
    (xdc_Char)0x53,  /* [4022] */
    (xdc_Char)0x20,  /* [4023] */
    (xdc_Char)0x68,  /* [4024] */
    (xdc_Char)0x65,  /* [4025] */
    (xdc_Char)0x61,  /* [4026] */
    (xdc_Char)0x70,  /* [4027] */
    (xdc_Char)0x20,  /* [4028] */
    (xdc_Char)0x69,  /* [4029] */
    (xdc_Char)0x73,  /* [4030] */
    (xdc_Char)0x20,  /* [4031] */
    (xdc_Char)0x75,  /* [4032] */
    (xdc_Char)0x73,  /* [4033] */
    (xdc_Char)0x65,  /* [4034] */
    (xdc_Char)0x64,  /* [4035] */
    (xdc_Char)0x20,  /* [4036] */
    (xdc_Char)0x75,  /* [4037] */
    (xdc_Char)0x70,  /* [4038] */
    (xdc_Char)0x2e,  /* [4039] */
    (xdc_Char)0x20,  /* [4040] */
    (xdc_Char)0x45,  /* [4041] */
    (xdc_Char)0x78,  /* [4042] */
    (xdc_Char)0x61,  /* [4043] */
    (xdc_Char)0x6d,  /* [4044] */
    (xdc_Char)0x69,  /* [4045] */
    (xdc_Char)0x6e,  /* [4046] */
    (xdc_Char)0x65,  /* [4047] */
    (xdc_Char)0x20,  /* [4048] */
    (xdc_Char)0x50,  /* [4049] */
    (xdc_Char)0x72,  /* [4050] */
    (xdc_Char)0x6f,  /* [4051] */
    (xdc_Char)0x67,  /* [4052] */
    (xdc_Char)0x72,  /* [4053] */
    (xdc_Char)0x61,  /* [4054] */
    (xdc_Char)0x6d,  /* [4055] */
    (xdc_Char)0x2e,  /* [4056] */
    (xdc_Char)0x68,  /* [4057] */
    (xdc_Char)0x65,  /* [4058] */
    (xdc_Char)0x61,  /* [4059] */
    (xdc_Char)0x70,  /* [4060] */
    (xdc_Char)0x2e,  /* [4061] */
    (xdc_Char)0x0,  /* [4062] */
    (xdc_Char)0x45,  /* [4063] */
    (xdc_Char)0x5f,  /* [4064] */
    (xdc_Char)0x62,  /* [4065] */
    (xdc_Char)0x61,  /* [4066] */
    (xdc_Char)0x64,  /* [4067] */
    (xdc_Char)0x43,  /* [4068] */
    (xdc_Char)0x6f,  /* [4069] */
    (xdc_Char)0x6d,  /* [4070] */
    (xdc_Char)0x6d,  /* [4071] */
    (xdc_Char)0x61,  /* [4072] */
    (xdc_Char)0x6e,  /* [4073] */
    (xdc_Char)0x64,  /* [4074] */
    (xdc_Char)0x3a,  /* [4075] */
    (xdc_Char)0x20,  /* [4076] */
    (xdc_Char)0x52,  /* [4077] */
    (xdc_Char)0x65,  /* [4078] */
    (xdc_Char)0x63,  /* [4079] */
    (xdc_Char)0x65,  /* [4080] */
    (xdc_Char)0x69,  /* [4081] */
    (xdc_Char)0x76,  /* [4082] */
    (xdc_Char)0x65,  /* [4083] */
    (xdc_Char)0x64,  /* [4084] */
    (xdc_Char)0x20,  /* [4085] */
    (xdc_Char)0x69,  /* [4086] */
    (xdc_Char)0x6e,  /* [4087] */
    (xdc_Char)0x76,  /* [4088] */
    (xdc_Char)0x61,  /* [4089] */
    (xdc_Char)0x6c,  /* [4090] */
    (xdc_Char)0x69,  /* [4091] */
    (xdc_Char)0x64,  /* [4092] */
    (xdc_Char)0x20,  /* [4093] */
    (xdc_Char)0x63,  /* [4094] */
    (xdc_Char)0x6f,  /* [4095] */
    (xdc_Char)0x6d,  /* [4096] */
    (xdc_Char)0x6d,  /* [4097] */
    (xdc_Char)0x61,  /* [4098] */
    (xdc_Char)0x6e,  /* [4099] */
    (xdc_Char)0x64,  /* [4100] */
    (xdc_Char)0x2c,  /* [4101] */
    (xdc_Char)0x20,  /* [4102] */
    (xdc_Char)0x69,  /* [4103] */
    (xdc_Char)0x64,  /* [4104] */
    (xdc_Char)0x3a,  /* [4105] */
    (xdc_Char)0x20,  /* [4106] */
    (xdc_Char)0x25,  /* [4107] */
    (xdc_Char)0x64,  /* [4108] */
    (xdc_Char)0x2e,  /* [4109] */
    (xdc_Char)0x0,  /* [4110] */
    (xdc_Char)0x45,  /* [4111] */
    (xdc_Char)0x5f,  /* [4112] */
    (xdc_Char)0x73,  /* [4113] */
    (xdc_Char)0x74,  /* [4114] */
    (xdc_Char)0x61,  /* [4115] */
    (xdc_Char)0x63,  /* [4116] */
    (xdc_Char)0x6b,  /* [4117] */
    (xdc_Char)0x4f,  /* [4118] */
    (xdc_Char)0x76,  /* [4119] */
    (xdc_Char)0x65,  /* [4120] */
    (xdc_Char)0x72,  /* [4121] */
    (xdc_Char)0x66,  /* [4122] */
    (xdc_Char)0x6c,  /* [4123] */
    (xdc_Char)0x6f,  /* [4124] */
    (xdc_Char)0x77,  /* [4125] */
    (xdc_Char)0x3a,  /* [4126] */
    (xdc_Char)0x20,  /* [4127] */
    (xdc_Char)0x54,  /* [4128] */
    (xdc_Char)0x61,  /* [4129] */
    (xdc_Char)0x73,  /* [4130] */
    (xdc_Char)0x6b,  /* [4131] */
    (xdc_Char)0x20,  /* [4132] */
    (xdc_Char)0x30,  /* [4133] */
    (xdc_Char)0x78,  /* [4134] */
    (xdc_Char)0x25,  /* [4135] */
    (xdc_Char)0x78,  /* [4136] */
    (xdc_Char)0x20,  /* [4137] */
    (xdc_Char)0x73,  /* [4138] */
    (xdc_Char)0x74,  /* [4139] */
    (xdc_Char)0x61,  /* [4140] */
    (xdc_Char)0x63,  /* [4141] */
    (xdc_Char)0x6b,  /* [4142] */
    (xdc_Char)0x20,  /* [4143] */
    (xdc_Char)0x6f,  /* [4144] */
    (xdc_Char)0x76,  /* [4145] */
    (xdc_Char)0x65,  /* [4146] */
    (xdc_Char)0x72,  /* [4147] */
    (xdc_Char)0x66,  /* [4148] */
    (xdc_Char)0x6c,  /* [4149] */
    (xdc_Char)0x6f,  /* [4150] */
    (xdc_Char)0x77,  /* [4151] */
    (xdc_Char)0x2e,  /* [4152] */
    (xdc_Char)0x0,  /* [4153] */
    (xdc_Char)0x45,  /* [4154] */
    (xdc_Char)0x5f,  /* [4155] */
    (xdc_Char)0x73,  /* [4156] */
    (xdc_Char)0x70,  /* [4157] */
    (xdc_Char)0x4f,  /* [4158] */
    (xdc_Char)0x75,  /* [4159] */
    (xdc_Char)0x74,  /* [4160] */
    (xdc_Char)0x4f,  /* [4161] */
    (xdc_Char)0x66,  /* [4162] */
    (xdc_Char)0x42,  /* [4163] */
    (xdc_Char)0x6f,  /* [4164] */
    (xdc_Char)0x75,  /* [4165] */
    (xdc_Char)0x6e,  /* [4166] */
    (xdc_Char)0x64,  /* [4167] */
    (xdc_Char)0x73,  /* [4168] */
    (xdc_Char)0x3a,  /* [4169] */
    (xdc_Char)0x20,  /* [4170] */
    (xdc_Char)0x54,  /* [4171] */
    (xdc_Char)0x61,  /* [4172] */
    (xdc_Char)0x73,  /* [4173] */
    (xdc_Char)0x6b,  /* [4174] */
    (xdc_Char)0x20,  /* [4175] */
    (xdc_Char)0x30,  /* [4176] */
    (xdc_Char)0x78,  /* [4177] */
    (xdc_Char)0x25,  /* [4178] */
    (xdc_Char)0x78,  /* [4179] */
    (xdc_Char)0x20,  /* [4180] */
    (xdc_Char)0x73,  /* [4181] */
    (xdc_Char)0x74,  /* [4182] */
    (xdc_Char)0x61,  /* [4183] */
    (xdc_Char)0x63,  /* [4184] */
    (xdc_Char)0x6b,  /* [4185] */
    (xdc_Char)0x20,  /* [4186] */
    (xdc_Char)0x65,  /* [4187] */
    (xdc_Char)0x72,  /* [4188] */
    (xdc_Char)0x72,  /* [4189] */
    (xdc_Char)0x6f,  /* [4190] */
    (xdc_Char)0x72,  /* [4191] */
    (xdc_Char)0x2c,  /* [4192] */
    (xdc_Char)0x20,  /* [4193] */
    (xdc_Char)0x53,  /* [4194] */
    (xdc_Char)0x50,  /* [4195] */
    (xdc_Char)0x20,  /* [4196] */
    (xdc_Char)0x3d,  /* [4197] */
    (xdc_Char)0x20,  /* [4198] */
    (xdc_Char)0x30,  /* [4199] */
    (xdc_Char)0x78,  /* [4200] */
    (xdc_Char)0x25,  /* [4201] */
    (xdc_Char)0x78,  /* [4202] */
    (xdc_Char)0x2e,  /* [4203] */
    (xdc_Char)0x0,  /* [4204] */
    (xdc_Char)0x45,  /* [4205] */
    (xdc_Char)0x5f,  /* [4206] */
    (xdc_Char)0x64,  /* [4207] */
    (xdc_Char)0x65,  /* [4208] */
    (xdc_Char)0x6c,  /* [4209] */
    (xdc_Char)0x65,  /* [4210] */
    (xdc_Char)0x74,  /* [4211] */
    (xdc_Char)0x65,  /* [4212] */
    (xdc_Char)0x4e,  /* [4213] */
    (xdc_Char)0x6f,  /* [4214] */
    (xdc_Char)0x74,  /* [4215] */
    (xdc_Char)0x41,  /* [4216] */
    (xdc_Char)0x6c,  /* [4217] */
    (xdc_Char)0x6c,  /* [4218] */
    (xdc_Char)0x6f,  /* [4219] */
    (xdc_Char)0x77,  /* [4220] */
    (xdc_Char)0x65,  /* [4221] */
    (xdc_Char)0x64,  /* [4222] */
    (xdc_Char)0x3a,  /* [4223] */
    (xdc_Char)0x20,  /* [4224] */
    (xdc_Char)0x54,  /* [4225] */
    (xdc_Char)0x61,  /* [4226] */
    (xdc_Char)0x73,  /* [4227] */
    (xdc_Char)0x6b,  /* [4228] */
    (xdc_Char)0x20,  /* [4229] */
    (xdc_Char)0x30,  /* [4230] */
    (xdc_Char)0x78,  /* [4231] */
    (xdc_Char)0x25,  /* [4232] */
    (xdc_Char)0x78,  /* [4233] */
    (xdc_Char)0x2e,  /* [4234] */
    (xdc_Char)0x0,  /* [4235] */
    (xdc_Char)0x45,  /* [4236] */
    (xdc_Char)0x5f,  /* [4237] */
    (xdc_Char)0x6d,  /* [4238] */
    (xdc_Char)0x6f,  /* [4239] */
    (xdc_Char)0x64,  /* [4240] */
    (xdc_Char)0x75,  /* [4241] */
    (xdc_Char)0x6c,  /* [4242] */
    (xdc_Char)0x65,  /* [4243] */
    (xdc_Char)0x53,  /* [4244] */
    (xdc_Char)0x74,  /* [4245] */
    (xdc_Char)0x61,  /* [4246] */
    (xdc_Char)0x74,  /* [4247] */
    (xdc_Char)0x65,  /* [4248] */
    (xdc_Char)0x43,  /* [4249] */
    (xdc_Char)0x68,  /* [4250] */
    (xdc_Char)0x65,  /* [4251] */
    (xdc_Char)0x63,  /* [4252] */
    (xdc_Char)0x6b,  /* [4253] */
    (xdc_Char)0x46,  /* [4254] */
    (xdc_Char)0x61,  /* [4255] */
    (xdc_Char)0x69,  /* [4256] */
    (xdc_Char)0x6c,  /* [4257] */
    (xdc_Char)0x65,  /* [4258] */
    (xdc_Char)0x64,  /* [4259] */
    (xdc_Char)0x3a,  /* [4260] */
    (xdc_Char)0x20,  /* [4261] */
    (xdc_Char)0x54,  /* [4262] */
    (xdc_Char)0x61,  /* [4263] */
    (xdc_Char)0x73,  /* [4264] */
    (xdc_Char)0x6b,  /* [4265] */
    (xdc_Char)0x20,  /* [4266] */
    (xdc_Char)0x6d,  /* [4267] */
    (xdc_Char)0x6f,  /* [4268] */
    (xdc_Char)0x64,  /* [4269] */
    (xdc_Char)0x75,  /* [4270] */
    (xdc_Char)0x6c,  /* [4271] */
    (xdc_Char)0x65,  /* [4272] */
    (xdc_Char)0x20,  /* [4273] */
    (xdc_Char)0x73,  /* [4274] */
    (xdc_Char)0x74,  /* [4275] */
    (xdc_Char)0x61,  /* [4276] */
    (xdc_Char)0x74,  /* [4277] */
    (xdc_Char)0x65,  /* [4278] */
    (xdc_Char)0x20,  /* [4279] */
    (xdc_Char)0x64,  /* [4280] */
    (xdc_Char)0x61,  /* [4281] */
    (xdc_Char)0x74,  /* [4282] */
    (xdc_Char)0x61,  /* [4283] */
    (xdc_Char)0x20,  /* [4284] */
    (xdc_Char)0x69,  /* [4285] */
    (xdc_Char)0x6e,  /* [4286] */
    (xdc_Char)0x74,  /* [4287] */
    (xdc_Char)0x65,  /* [4288] */
    (xdc_Char)0x67,  /* [4289] */
    (xdc_Char)0x72,  /* [4290] */
    (xdc_Char)0x69,  /* [4291] */
    (xdc_Char)0x74,  /* [4292] */
    (xdc_Char)0x79,  /* [4293] */
    (xdc_Char)0x20,  /* [4294] */
    (xdc_Char)0x63,  /* [4295] */
    (xdc_Char)0x68,  /* [4296] */
    (xdc_Char)0x65,  /* [4297] */
    (xdc_Char)0x63,  /* [4298] */
    (xdc_Char)0x6b,  /* [4299] */
    (xdc_Char)0x20,  /* [4300] */
    (xdc_Char)0x66,  /* [4301] */
    (xdc_Char)0x61,  /* [4302] */
    (xdc_Char)0x69,  /* [4303] */
    (xdc_Char)0x6c,  /* [4304] */
    (xdc_Char)0x65,  /* [4305] */
    (xdc_Char)0x64,  /* [4306] */
    (xdc_Char)0x2e,  /* [4307] */
    (xdc_Char)0x0,  /* [4308] */
    (xdc_Char)0x45,  /* [4309] */
    (xdc_Char)0x5f,  /* [4310] */
    (xdc_Char)0x6f,  /* [4311] */
    (xdc_Char)0x62,  /* [4312] */
    (xdc_Char)0x6a,  /* [4313] */
    (xdc_Char)0x65,  /* [4314] */
    (xdc_Char)0x63,  /* [4315] */
    (xdc_Char)0x74,  /* [4316] */
    (xdc_Char)0x43,  /* [4317] */
    (xdc_Char)0x68,  /* [4318] */
    (xdc_Char)0x65,  /* [4319] */
    (xdc_Char)0x63,  /* [4320] */
    (xdc_Char)0x6b,  /* [4321] */
    (xdc_Char)0x46,  /* [4322] */
    (xdc_Char)0x61,  /* [4323] */
    (xdc_Char)0x69,  /* [4324] */
    (xdc_Char)0x6c,  /* [4325] */
    (xdc_Char)0x65,  /* [4326] */
    (xdc_Char)0x64,  /* [4327] */
    (xdc_Char)0x3a,  /* [4328] */
    (xdc_Char)0x20,  /* [4329] */
    (xdc_Char)0x54,  /* [4330] */
    (xdc_Char)0x61,  /* [4331] */
    (xdc_Char)0x73,  /* [4332] */
    (xdc_Char)0x6b,  /* [4333] */
    (xdc_Char)0x20,  /* [4334] */
    (xdc_Char)0x30,  /* [4335] */
    (xdc_Char)0x78,  /* [4336] */
    (xdc_Char)0x25,  /* [4337] */
    (xdc_Char)0x78,  /* [4338] */
    (xdc_Char)0x20,  /* [4339] */
    (xdc_Char)0x6f,  /* [4340] */
    (xdc_Char)0x62,  /* [4341] */
    (xdc_Char)0x6a,  /* [4342] */
    (xdc_Char)0x65,  /* [4343] */
    (xdc_Char)0x63,  /* [4344] */
    (xdc_Char)0x74,  /* [4345] */
    (xdc_Char)0x20,  /* [4346] */
    (xdc_Char)0x64,  /* [4347] */
    (xdc_Char)0x61,  /* [4348] */
    (xdc_Char)0x74,  /* [4349] */
    (xdc_Char)0x61,  /* [4350] */
    (xdc_Char)0x20,  /* [4351] */
    (xdc_Char)0x69,  /* [4352] */
    (xdc_Char)0x6e,  /* [4353] */
    (xdc_Char)0x74,  /* [4354] */
    (xdc_Char)0x65,  /* [4355] */
    (xdc_Char)0x67,  /* [4356] */
    (xdc_Char)0x72,  /* [4357] */
    (xdc_Char)0x69,  /* [4358] */
    (xdc_Char)0x74,  /* [4359] */
    (xdc_Char)0x79,  /* [4360] */
    (xdc_Char)0x20,  /* [4361] */
    (xdc_Char)0x63,  /* [4362] */
    (xdc_Char)0x68,  /* [4363] */
    (xdc_Char)0x65,  /* [4364] */
    (xdc_Char)0x63,  /* [4365] */
    (xdc_Char)0x6b,  /* [4366] */
    (xdc_Char)0x20,  /* [4367] */
    (xdc_Char)0x66,  /* [4368] */
    (xdc_Char)0x61,  /* [4369] */
    (xdc_Char)0x69,  /* [4370] */
    (xdc_Char)0x6c,  /* [4371] */
    (xdc_Char)0x65,  /* [4372] */
    (xdc_Char)0x64,  /* [4373] */
    (xdc_Char)0x2e,  /* [4374] */
    (xdc_Char)0x0,  /* [4375] */
    (xdc_Char)0x45,  /* [4376] */
    (xdc_Char)0x5f,  /* [4377] */
    (xdc_Char)0x73,  /* [4378] */
    (xdc_Char)0x74,  /* [4379] */
    (xdc_Char)0x61,  /* [4380] */
    (xdc_Char)0x63,  /* [4381] */
    (xdc_Char)0x6b,  /* [4382] */
    (xdc_Char)0x4f,  /* [4383] */
    (xdc_Char)0x76,  /* [4384] */
    (xdc_Char)0x65,  /* [4385] */
    (xdc_Char)0x72,  /* [4386] */
    (xdc_Char)0x66,  /* [4387] */
    (xdc_Char)0x6c,  /* [4388] */
    (xdc_Char)0x6f,  /* [4389] */
    (xdc_Char)0x77,  /* [4390] */
    (xdc_Char)0x3a,  /* [4391] */
    (xdc_Char)0x20,  /* [4392] */
    (xdc_Char)0x49,  /* [4393] */
    (xdc_Char)0x53,  /* [4394] */
    (xdc_Char)0x52,  /* [4395] */
    (xdc_Char)0x20,  /* [4396] */
    (xdc_Char)0x73,  /* [4397] */
    (xdc_Char)0x74,  /* [4398] */
    (xdc_Char)0x61,  /* [4399] */
    (xdc_Char)0x63,  /* [4400] */
    (xdc_Char)0x6b,  /* [4401] */
    (xdc_Char)0x20,  /* [4402] */
    (xdc_Char)0x6f,  /* [4403] */
    (xdc_Char)0x76,  /* [4404] */
    (xdc_Char)0x65,  /* [4405] */
    (xdc_Char)0x72,  /* [4406] */
    (xdc_Char)0x66,  /* [4407] */
    (xdc_Char)0x6c,  /* [4408] */
    (xdc_Char)0x6f,  /* [4409] */
    (xdc_Char)0x77,  /* [4410] */
    (xdc_Char)0x2e,  /* [4411] */
    (xdc_Char)0x0,  /* [4412] */
    (xdc_Char)0x45,  /* [4413] */
    (xdc_Char)0x5f,  /* [4414] */
    (xdc_Char)0x62,  /* [4415] */
    (xdc_Char)0x61,  /* [4416] */
    (xdc_Char)0x64,  /* [4417] */
    (xdc_Char)0x49,  /* [4418] */
    (xdc_Char)0x6e,  /* [4419] */
    (xdc_Char)0x74,  /* [4420] */
    (xdc_Char)0x4e,  /* [4421] */
    (xdc_Char)0x75,  /* [4422] */
    (xdc_Char)0x6d,  /* [4423] */
    (xdc_Char)0x2c,  /* [4424] */
    (xdc_Char)0x20,  /* [4425] */
    (xdc_Char)0x69,  /* [4426] */
    (xdc_Char)0x6e,  /* [4427] */
    (xdc_Char)0x74,  /* [4428] */
    (xdc_Char)0x6e,  /* [4429] */
    (xdc_Char)0x75,  /* [4430] */
    (xdc_Char)0x6d,  /* [4431] */
    (xdc_Char)0x3a,  /* [4432] */
    (xdc_Char)0x20,  /* [4433] */
    (xdc_Char)0x25,  /* [4434] */
    (xdc_Char)0x64,  /* [4435] */
    (xdc_Char)0x20,  /* [4436] */
    (xdc_Char)0x69,  /* [4437] */
    (xdc_Char)0x73,  /* [4438] */
    (xdc_Char)0x20,  /* [4439] */
    (xdc_Char)0x6f,  /* [4440] */
    (xdc_Char)0x75,  /* [4441] */
    (xdc_Char)0x74,  /* [4442] */
    (xdc_Char)0x20,  /* [4443] */
    (xdc_Char)0x6f,  /* [4444] */
    (xdc_Char)0x66,  /* [4445] */
    (xdc_Char)0x20,  /* [4446] */
    (xdc_Char)0x72,  /* [4447] */
    (xdc_Char)0x61,  /* [4448] */
    (xdc_Char)0x6e,  /* [4449] */
    (xdc_Char)0x67,  /* [4450] */
    (xdc_Char)0x65,  /* [4451] */
    (xdc_Char)0x0,  /* [4452] */
    (xdc_Char)0x45,  /* [4453] */
    (xdc_Char)0x5f,  /* [4454] */
    (xdc_Char)0x61,  /* [4455] */
    (xdc_Char)0x6c,  /* [4456] */
    (xdc_Char)0x72,  /* [4457] */
    (xdc_Char)0x65,  /* [4458] */
    (xdc_Char)0x61,  /* [4459] */
    (xdc_Char)0x64,  /* [4460] */
    (xdc_Char)0x79,  /* [4461] */
    (xdc_Char)0x44,  /* [4462] */
    (xdc_Char)0x65,  /* [4463] */
    (xdc_Char)0x66,  /* [4464] */
    (xdc_Char)0x69,  /* [4465] */
    (xdc_Char)0x6e,  /* [4466] */
    (xdc_Char)0x65,  /* [4467] */
    (xdc_Char)0x64,  /* [4468] */
    (xdc_Char)0x3a,  /* [4469] */
    (xdc_Char)0x20,  /* [4470] */
    (xdc_Char)0x48,  /* [4471] */
    (xdc_Char)0x77,  /* [4472] */
    (xdc_Char)0x69,  /* [4473] */
    (xdc_Char)0x20,  /* [4474] */
    (xdc_Char)0x61,  /* [4475] */
    (xdc_Char)0x6c,  /* [4476] */
    (xdc_Char)0x72,  /* [4477] */
    (xdc_Char)0x65,  /* [4478] */
    (xdc_Char)0x61,  /* [4479] */
    (xdc_Char)0x64,  /* [4480] */
    (xdc_Char)0x79,  /* [4481] */
    (xdc_Char)0x20,  /* [4482] */
    (xdc_Char)0x64,  /* [4483] */
    (xdc_Char)0x65,  /* [4484] */
    (xdc_Char)0x66,  /* [4485] */
    (xdc_Char)0x69,  /* [4486] */
    (xdc_Char)0x6e,  /* [4487] */
    (xdc_Char)0x65,  /* [4488] */
    (xdc_Char)0x64,  /* [4489] */
    (xdc_Char)0x3a,  /* [4490] */
    (xdc_Char)0x20,  /* [4491] */
    (xdc_Char)0x69,  /* [4492] */
    (xdc_Char)0x6e,  /* [4493] */
    (xdc_Char)0x74,  /* [4494] */
    (xdc_Char)0x72,  /* [4495] */
    (xdc_Char)0x23,  /* [4496] */
    (xdc_Char)0x20,  /* [4497] */
    (xdc_Char)0x25,  /* [4498] */
    (xdc_Char)0x64,  /* [4499] */
    (xdc_Char)0x0,  /* [4500] */
    (xdc_Char)0x45,  /* [4501] */
    (xdc_Char)0x5f,  /* [4502] */
    (xdc_Char)0x68,  /* [4503] */
    (xdc_Char)0x77,  /* [4504] */
    (xdc_Char)0x69,  /* [4505] */
    (xdc_Char)0x4c,  /* [4506] */
    (xdc_Char)0x69,  /* [4507] */
    (xdc_Char)0x6d,  /* [4508] */
    (xdc_Char)0x69,  /* [4509] */
    (xdc_Char)0x74,  /* [4510] */
    (xdc_Char)0x45,  /* [4511] */
    (xdc_Char)0x78,  /* [4512] */
    (xdc_Char)0x63,  /* [4513] */
    (xdc_Char)0x65,  /* [4514] */
    (xdc_Char)0x65,  /* [4515] */
    (xdc_Char)0x64,  /* [4516] */
    (xdc_Char)0x65,  /* [4517] */
    (xdc_Char)0x64,  /* [4518] */
    (xdc_Char)0x3a,  /* [4519] */
    (xdc_Char)0x20,  /* [4520] */
    (xdc_Char)0x54,  /* [4521] */
    (xdc_Char)0x6f,  /* [4522] */
    (xdc_Char)0x6f,  /* [4523] */
    (xdc_Char)0x20,  /* [4524] */
    (xdc_Char)0x6d,  /* [4525] */
    (xdc_Char)0x61,  /* [4526] */
    (xdc_Char)0x6e,  /* [4527] */
    (xdc_Char)0x79,  /* [4528] */
    (xdc_Char)0x20,  /* [4529] */
    (xdc_Char)0x69,  /* [4530] */
    (xdc_Char)0x6e,  /* [4531] */
    (xdc_Char)0x74,  /* [4532] */
    (xdc_Char)0x65,  /* [4533] */
    (xdc_Char)0x72,  /* [4534] */
    (xdc_Char)0x72,  /* [4535] */
    (xdc_Char)0x75,  /* [4536] */
    (xdc_Char)0x70,  /* [4537] */
    (xdc_Char)0x74,  /* [4538] */
    (xdc_Char)0x73,  /* [4539] */
    (xdc_Char)0x20,  /* [4540] */
    (xdc_Char)0x64,  /* [4541] */
    (xdc_Char)0x65,  /* [4542] */
    (xdc_Char)0x66,  /* [4543] */
    (xdc_Char)0x69,  /* [4544] */
    (xdc_Char)0x6e,  /* [4545] */
    (xdc_Char)0x65,  /* [4546] */
    (xdc_Char)0x64,  /* [4547] */
    (xdc_Char)0x0,  /* [4548] */
    (xdc_Char)0x45,  /* [4549] */
    (xdc_Char)0x5f,  /* [4550] */
    (xdc_Char)0x65,  /* [4551] */
    (xdc_Char)0x78,  /* [4552] */
    (xdc_Char)0x63,  /* [4553] */
    (xdc_Char)0x65,  /* [4554] */
    (xdc_Char)0x70,  /* [4555] */
    (xdc_Char)0x74,  /* [4556] */
    (xdc_Char)0x69,  /* [4557] */
    (xdc_Char)0x6f,  /* [4558] */
    (xdc_Char)0x6e,  /* [4559] */
    (xdc_Char)0x3a,  /* [4560] */
    (xdc_Char)0x20,  /* [4561] */
    (xdc_Char)0x69,  /* [4562] */
    (xdc_Char)0x64,  /* [4563] */
    (xdc_Char)0x20,  /* [4564] */
    (xdc_Char)0x3d,  /* [4565] */
    (xdc_Char)0x20,  /* [4566] */
    (xdc_Char)0x25,  /* [4567] */
    (xdc_Char)0x64,  /* [4568] */
    (xdc_Char)0x2c,  /* [4569] */
    (xdc_Char)0x20,  /* [4570] */
    (xdc_Char)0x70,  /* [4571] */
    (xdc_Char)0x63,  /* [4572] */
    (xdc_Char)0x20,  /* [4573] */
    (xdc_Char)0x3d,  /* [4574] */
    (xdc_Char)0x20,  /* [4575] */
    (xdc_Char)0x25,  /* [4576] */
    (xdc_Char)0x30,  /* [4577] */
    (xdc_Char)0x38,  /* [4578] */
    (xdc_Char)0x78,  /* [4579] */
    (xdc_Char)0x2e,  /* [4580] */
    (xdc_Char)0xa,  /* [4581] */
    (xdc_Char)0x54,  /* [4582] */
    (xdc_Char)0x6f,  /* [4583] */
    (xdc_Char)0x20,  /* [4584] */
    (xdc_Char)0x73,  /* [4585] */
    (xdc_Char)0x65,  /* [4586] */
    (xdc_Char)0x65,  /* [4587] */
    (xdc_Char)0x20,  /* [4588] */
    (xdc_Char)0x6d,  /* [4589] */
    (xdc_Char)0x6f,  /* [4590] */
    (xdc_Char)0x72,  /* [4591] */
    (xdc_Char)0x65,  /* [4592] */
    (xdc_Char)0x20,  /* [4593] */
    (xdc_Char)0x65,  /* [4594] */
    (xdc_Char)0x78,  /* [4595] */
    (xdc_Char)0x63,  /* [4596] */
    (xdc_Char)0x65,  /* [4597] */
    (xdc_Char)0x70,  /* [4598] */
    (xdc_Char)0x74,  /* [4599] */
    (xdc_Char)0x69,  /* [4600] */
    (xdc_Char)0x6f,  /* [4601] */
    (xdc_Char)0x6e,  /* [4602] */
    (xdc_Char)0x20,  /* [4603] */
    (xdc_Char)0x64,  /* [4604] */
    (xdc_Char)0x65,  /* [4605] */
    (xdc_Char)0x74,  /* [4606] */
    (xdc_Char)0x61,  /* [4607] */
    (xdc_Char)0x69,  /* [4608] */
    (xdc_Char)0x6c,  /* [4609] */
    (xdc_Char)0x2c,  /* [4610] */
    (xdc_Char)0x20,  /* [4611] */
    (xdc_Char)0x73,  /* [4612] */
    (xdc_Char)0x65,  /* [4613] */
    (xdc_Char)0x74,  /* [4614] */
    (xdc_Char)0x20,  /* [4615] */
    (xdc_Char)0x74,  /* [4616] */
    (xdc_Char)0x69,  /* [4617] */
    (xdc_Char)0x2e,  /* [4618] */
    (xdc_Char)0x73,  /* [4619] */
    (xdc_Char)0x79,  /* [4620] */
    (xdc_Char)0x73,  /* [4621] */
    (xdc_Char)0x62,  /* [4622] */
    (xdc_Char)0x69,  /* [4623] */
    (xdc_Char)0x6f,  /* [4624] */
    (xdc_Char)0x73,  /* [4625] */
    (xdc_Char)0x2e,  /* [4626] */
    (xdc_Char)0x66,  /* [4627] */
    (xdc_Char)0x61,  /* [4628] */
    (xdc_Char)0x6d,  /* [4629] */
    (xdc_Char)0x69,  /* [4630] */
    (xdc_Char)0x6c,  /* [4631] */
    (xdc_Char)0x79,  /* [4632] */
    (xdc_Char)0x2e,  /* [4633] */
    (xdc_Char)0x61,  /* [4634] */
    (xdc_Char)0x72,  /* [4635] */
    (xdc_Char)0x6d,  /* [4636] */
    (xdc_Char)0x2e,  /* [4637] */
    (xdc_Char)0x6d,  /* [4638] */
    (xdc_Char)0x33,  /* [4639] */
    (xdc_Char)0x2e,  /* [4640] */
    (xdc_Char)0x48,  /* [4641] */
    (xdc_Char)0x77,  /* [4642] */
    (xdc_Char)0x69,  /* [4643] */
    (xdc_Char)0x2e,  /* [4644] */
    (xdc_Char)0x65,  /* [4645] */
    (xdc_Char)0x6e,  /* [4646] */
    (xdc_Char)0x61,  /* [4647] */
    (xdc_Char)0x62,  /* [4648] */
    (xdc_Char)0x6c,  /* [4649] */
    (xdc_Char)0x65,  /* [4650] */
    (xdc_Char)0x45,  /* [4651] */
    (xdc_Char)0x78,  /* [4652] */
    (xdc_Char)0x63,  /* [4653] */
    (xdc_Char)0x65,  /* [4654] */
    (xdc_Char)0x70,  /* [4655] */
    (xdc_Char)0x74,  /* [4656] */
    (xdc_Char)0x69,  /* [4657] */
    (xdc_Char)0x6f,  /* [4658] */
    (xdc_Char)0x6e,  /* [4659] */
    (xdc_Char)0x20,  /* [4660] */
    (xdc_Char)0x3d,  /* [4661] */
    (xdc_Char)0x20,  /* [4662] */
    (xdc_Char)0x74,  /* [4663] */
    (xdc_Char)0x72,  /* [4664] */
    (xdc_Char)0x75,  /* [4665] */
    (xdc_Char)0x65,  /* [4666] */
    (xdc_Char)0x20,  /* [4667] */
    (xdc_Char)0x6f,  /* [4668] */
    (xdc_Char)0x72,  /* [4669] */
    (xdc_Char)0x2c,  /* [4670] */
    (xdc_Char)0xa,  /* [4671] */
    (xdc_Char)0x65,  /* [4672] */
    (xdc_Char)0x78,  /* [4673] */
    (xdc_Char)0x61,  /* [4674] */
    (xdc_Char)0x6d,  /* [4675] */
    (xdc_Char)0x69,  /* [4676] */
    (xdc_Char)0x6e,  /* [4677] */
    (xdc_Char)0x65,  /* [4678] */
    (xdc_Char)0x20,  /* [4679] */
    (xdc_Char)0x74,  /* [4680] */
    (xdc_Char)0x68,  /* [4681] */
    (xdc_Char)0x65,  /* [4682] */
    (xdc_Char)0x20,  /* [4683] */
    (xdc_Char)0x45,  /* [4684] */
    (xdc_Char)0x78,  /* [4685] */
    (xdc_Char)0x63,  /* [4686] */
    (xdc_Char)0x65,  /* [4687] */
    (xdc_Char)0x70,  /* [4688] */
    (xdc_Char)0x74,  /* [4689] */
    (xdc_Char)0x69,  /* [4690] */
    (xdc_Char)0x6f,  /* [4691] */
    (xdc_Char)0x6e,  /* [4692] */
    (xdc_Char)0x20,  /* [4693] */
    (xdc_Char)0x76,  /* [4694] */
    (xdc_Char)0x69,  /* [4695] */
    (xdc_Char)0x65,  /* [4696] */
    (xdc_Char)0x77,  /* [4697] */
    (xdc_Char)0x20,  /* [4698] */
    (xdc_Char)0x66,  /* [4699] */
    (xdc_Char)0x6f,  /* [4700] */
    (xdc_Char)0x72,  /* [4701] */
    (xdc_Char)0x20,  /* [4702] */
    (xdc_Char)0x74,  /* [4703] */
    (xdc_Char)0x68,  /* [4704] */
    (xdc_Char)0x65,  /* [4705] */
    (xdc_Char)0x20,  /* [4706] */
    (xdc_Char)0x74,  /* [4707] */
    (xdc_Char)0x69,  /* [4708] */
    (xdc_Char)0x2e,  /* [4709] */
    (xdc_Char)0x73,  /* [4710] */
    (xdc_Char)0x79,  /* [4711] */
    (xdc_Char)0x73,  /* [4712] */
    (xdc_Char)0x62,  /* [4713] */
    (xdc_Char)0x69,  /* [4714] */
    (xdc_Char)0x6f,  /* [4715] */
    (xdc_Char)0x73,  /* [4716] */
    (xdc_Char)0x2e,  /* [4717] */
    (xdc_Char)0x66,  /* [4718] */
    (xdc_Char)0x61,  /* [4719] */
    (xdc_Char)0x6d,  /* [4720] */
    (xdc_Char)0x69,  /* [4721] */
    (xdc_Char)0x6c,  /* [4722] */
    (xdc_Char)0x79,  /* [4723] */
    (xdc_Char)0x2e,  /* [4724] */
    (xdc_Char)0x61,  /* [4725] */
    (xdc_Char)0x72,  /* [4726] */
    (xdc_Char)0x6d,  /* [4727] */
    (xdc_Char)0x2e,  /* [4728] */
    (xdc_Char)0x6d,  /* [4729] */
    (xdc_Char)0x33,  /* [4730] */
    (xdc_Char)0x2e,  /* [4731] */
    (xdc_Char)0x48,  /* [4732] */
    (xdc_Char)0x77,  /* [4733] */
    (xdc_Char)0x69,  /* [4734] */
    (xdc_Char)0x20,  /* [4735] */
    (xdc_Char)0x6d,  /* [4736] */
    (xdc_Char)0x6f,  /* [4737] */
    (xdc_Char)0x64,  /* [4738] */
    (xdc_Char)0x75,  /* [4739] */
    (xdc_Char)0x6c,  /* [4740] */
    (xdc_Char)0x65,  /* [4741] */
    (xdc_Char)0x20,  /* [4742] */
    (xdc_Char)0x75,  /* [4743] */
    (xdc_Char)0x73,  /* [4744] */
    (xdc_Char)0x69,  /* [4745] */
    (xdc_Char)0x6e,  /* [4746] */
    (xdc_Char)0x67,  /* [4747] */
    (xdc_Char)0x20,  /* [4748] */
    (xdc_Char)0x52,  /* [4749] */
    (xdc_Char)0x4f,  /* [4750] */
    (xdc_Char)0x56,  /* [4751] */
    (xdc_Char)0x2e,  /* [4752] */
    (xdc_Char)0x0,  /* [4753] */
    (xdc_Char)0x45,  /* [4754] */
    (xdc_Char)0x5f,  /* [4755] */
    (xdc_Char)0x6e,  /* [4756] */
    (xdc_Char)0x6f,  /* [4757] */
    (xdc_Char)0x49,  /* [4758] */
    (xdc_Char)0x73,  /* [4759] */
    (xdc_Char)0x72,  /* [4760] */
    (xdc_Char)0x3a,  /* [4761] */
    (xdc_Char)0x20,  /* [4762] */
    (xdc_Char)0x69,  /* [4763] */
    (xdc_Char)0x64,  /* [4764] */
    (xdc_Char)0x20,  /* [4765] */
    (xdc_Char)0x3d,  /* [4766] */
    (xdc_Char)0x20,  /* [4767] */
    (xdc_Char)0x25,  /* [4768] */
    (xdc_Char)0x64,  /* [4769] */
    (xdc_Char)0x2c,  /* [4770] */
    (xdc_Char)0x20,  /* [4771] */
    (xdc_Char)0x70,  /* [4772] */
    (xdc_Char)0x63,  /* [4773] */
    (xdc_Char)0x20,  /* [4774] */
    (xdc_Char)0x3d,  /* [4775] */
    (xdc_Char)0x20,  /* [4776] */
    (xdc_Char)0x25,  /* [4777] */
    (xdc_Char)0x30,  /* [4778] */
    (xdc_Char)0x38,  /* [4779] */
    (xdc_Char)0x78,  /* [4780] */
    (xdc_Char)0x0,  /* [4781] */
    (xdc_Char)0x45,  /* [4782] */
    (xdc_Char)0x5f,  /* [4783] */
    (xdc_Char)0x4e,  /* [4784] */
    (xdc_Char)0x4d,  /* [4785] */
    (xdc_Char)0x49,  /* [4786] */
    (xdc_Char)0x3a,  /* [4787] */
    (xdc_Char)0x20,  /* [4788] */
    (xdc_Char)0x25,  /* [4789] */
    (xdc_Char)0x73,  /* [4790] */
    (xdc_Char)0x0,  /* [4791] */
    (xdc_Char)0x45,  /* [4792] */
    (xdc_Char)0x5f,  /* [4793] */
    (xdc_Char)0x68,  /* [4794] */
    (xdc_Char)0x61,  /* [4795] */
    (xdc_Char)0x72,  /* [4796] */
    (xdc_Char)0x64,  /* [4797] */
    (xdc_Char)0x46,  /* [4798] */
    (xdc_Char)0x61,  /* [4799] */
    (xdc_Char)0x75,  /* [4800] */
    (xdc_Char)0x6c,  /* [4801] */
    (xdc_Char)0x74,  /* [4802] */
    (xdc_Char)0x3a,  /* [4803] */
    (xdc_Char)0x20,  /* [4804] */
    (xdc_Char)0x25,  /* [4805] */
    (xdc_Char)0x73,  /* [4806] */
    (xdc_Char)0x0,  /* [4807] */
    (xdc_Char)0x45,  /* [4808] */
    (xdc_Char)0x5f,  /* [4809] */
    (xdc_Char)0x6d,  /* [4810] */
    (xdc_Char)0x65,  /* [4811] */
    (xdc_Char)0x6d,  /* [4812] */
    (xdc_Char)0x46,  /* [4813] */
    (xdc_Char)0x61,  /* [4814] */
    (xdc_Char)0x75,  /* [4815] */
    (xdc_Char)0x6c,  /* [4816] */
    (xdc_Char)0x74,  /* [4817] */
    (xdc_Char)0x3a,  /* [4818] */
    (xdc_Char)0x20,  /* [4819] */
    (xdc_Char)0x25,  /* [4820] */
    (xdc_Char)0x73,  /* [4821] */
    (xdc_Char)0x2c,  /* [4822] */
    (xdc_Char)0x20,  /* [4823] */
    (xdc_Char)0x61,  /* [4824] */
    (xdc_Char)0x64,  /* [4825] */
    (xdc_Char)0x64,  /* [4826] */
    (xdc_Char)0x72,  /* [4827] */
    (xdc_Char)0x65,  /* [4828] */
    (xdc_Char)0x73,  /* [4829] */
    (xdc_Char)0x73,  /* [4830] */
    (xdc_Char)0x3a,  /* [4831] */
    (xdc_Char)0x20,  /* [4832] */
    (xdc_Char)0x25,  /* [4833] */
    (xdc_Char)0x30,  /* [4834] */
    (xdc_Char)0x38,  /* [4835] */
    (xdc_Char)0x78,  /* [4836] */
    (xdc_Char)0x0,  /* [4837] */
    (xdc_Char)0x45,  /* [4838] */
    (xdc_Char)0x5f,  /* [4839] */
    (xdc_Char)0x62,  /* [4840] */
    (xdc_Char)0x75,  /* [4841] */
    (xdc_Char)0x73,  /* [4842] */
    (xdc_Char)0x46,  /* [4843] */
    (xdc_Char)0x61,  /* [4844] */
    (xdc_Char)0x75,  /* [4845] */
    (xdc_Char)0x6c,  /* [4846] */
    (xdc_Char)0x74,  /* [4847] */
    (xdc_Char)0x3a,  /* [4848] */
    (xdc_Char)0x20,  /* [4849] */
    (xdc_Char)0x25,  /* [4850] */
    (xdc_Char)0x73,  /* [4851] */
    (xdc_Char)0x2c,  /* [4852] */
    (xdc_Char)0x20,  /* [4853] */
    (xdc_Char)0x61,  /* [4854] */
    (xdc_Char)0x64,  /* [4855] */
    (xdc_Char)0x64,  /* [4856] */
    (xdc_Char)0x72,  /* [4857] */
    (xdc_Char)0x65,  /* [4858] */
    (xdc_Char)0x73,  /* [4859] */
    (xdc_Char)0x73,  /* [4860] */
    (xdc_Char)0x3a,  /* [4861] */
    (xdc_Char)0x20,  /* [4862] */
    (xdc_Char)0x25,  /* [4863] */
    (xdc_Char)0x30,  /* [4864] */
    (xdc_Char)0x38,  /* [4865] */
    (xdc_Char)0x78,  /* [4866] */
    (xdc_Char)0x0,  /* [4867] */
    (xdc_Char)0x45,  /* [4868] */
    (xdc_Char)0x5f,  /* [4869] */
    (xdc_Char)0x75,  /* [4870] */
    (xdc_Char)0x73,  /* [4871] */
    (xdc_Char)0x61,  /* [4872] */
    (xdc_Char)0x67,  /* [4873] */
    (xdc_Char)0x65,  /* [4874] */
    (xdc_Char)0x46,  /* [4875] */
    (xdc_Char)0x61,  /* [4876] */
    (xdc_Char)0x75,  /* [4877] */
    (xdc_Char)0x6c,  /* [4878] */
    (xdc_Char)0x74,  /* [4879] */
    (xdc_Char)0x3a,  /* [4880] */
    (xdc_Char)0x20,  /* [4881] */
    (xdc_Char)0x25,  /* [4882] */
    (xdc_Char)0x73,  /* [4883] */
    (xdc_Char)0x0,  /* [4884] */
    (xdc_Char)0x45,  /* [4885] */
    (xdc_Char)0x5f,  /* [4886] */
    (xdc_Char)0x73,  /* [4887] */
    (xdc_Char)0x76,  /* [4888] */
    (xdc_Char)0x43,  /* [4889] */
    (xdc_Char)0x61,  /* [4890] */
    (xdc_Char)0x6c,  /* [4891] */
    (xdc_Char)0x6c,  /* [4892] */
    (xdc_Char)0x3a,  /* [4893] */
    (xdc_Char)0x20,  /* [4894] */
    (xdc_Char)0x73,  /* [4895] */
    (xdc_Char)0x76,  /* [4896] */
    (xdc_Char)0x4e,  /* [4897] */
    (xdc_Char)0x75,  /* [4898] */
    (xdc_Char)0x6d,  /* [4899] */
    (xdc_Char)0x20,  /* [4900] */
    (xdc_Char)0x3d,  /* [4901] */
    (xdc_Char)0x20,  /* [4902] */
    (xdc_Char)0x25,  /* [4903] */
    (xdc_Char)0x64,  /* [4904] */
    (xdc_Char)0x0,  /* [4905] */
    (xdc_Char)0x45,  /* [4906] */
    (xdc_Char)0x5f,  /* [4907] */
    (xdc_Char)0x64,  /* [4908] */
    (xdc_Char)0x65,  /* [4909] */
    (xdc_Char)0x62,  /* [4910] */
    (xdc_Char)0x75,  /* [4911] */
    (xdc_Char)0x67,  /* [4912] */
    (xdc_Char)0x4d,  /* [4913] */
    (xdc_Char)0x6f,  /* [4914] */
    (xdc_Char)0x6e,  /* [4915] */
    (xdc_Char)0x3a,  /* [4916] */
    (xdc_Char)0x20,  /* [4917] */
    (xdc_Char)0x25,  /* [4918] */
    (xdc_Char)0x73,  /* [4919] */
    (xdc_Char)0x0,  /* [4920] */
    (xdc_Char)0x45,  /* [4921] */
    (xdc_Char)0x5f,  /* [4922] */
    (xdc_Char)0x72,  /* [4923] */
    (xdc_Char)0x65,  /* [4924] */
    (xdc_Char)0x73,  /* [4925] */
    (xdc_Char)0x65,  /* [4926] */
    (xdc_Char)0x72,  /* [4927] */
    (xdc_Char)0x76,  /* [4928] */
    (xdc_Char)0x65,  /* [4929] */
    (xdc_Char)0x64,  /* [4930] */
    (xdc_Char)0x3a,  /* [4931] */
    (xdc_Char)0x20,  /* [4932] */
    (xdc_Char)0x25,  /* [4933] */
    (xdc_Char)0x73,  /* [4934] */
    (xdc_Char)0x20,  /* [4935] */
    (xdc_Char)0x25,  /* [4936] */
    (xdc_Char)0x64,  /* [4937] */
    (xdc_Char)0x0,  /* [4938] */
    (xdc_Char)0x45,  /* [4939] */
    (xdc_Char)0x5f,  /* [4940] */
    (xdc_Char)0x69,  /* [4941] */
    (xdc_Char)0x6e,  /* [4942] */
    (xdc_Char)0x76,  /* [4943] */
    (xdc_Char)0x61,  /* [4944] */
    (xdc_Char)0x6c,  /* [4945] */
    (xdc_Char)0x69,  /* [4946] */
    (xdc_Char)0x64,  /* [4947] */
    (xdc_Char)0x54,  /* [4948] */
    (xdc_Char)0x69,  /* [4949] */
    (xdc_Char)0x6d,  /* [4950] */
    (xdc_Char)0x65,  /* [4951] */
    (xdc_Char)0x72,  /* [4952] */
    (xdc_Char)0x3a,  /* [4953] */
    (xdc_Char)0x20,  /* [4954] */
    (xdc_Char)0x49,  /* [4955] */
    (xdc_Char)0x6e,  /* [4956] */
    (xdc_Char)0x76,  /* [4957] */
    (xdc_Char)0x61,  /* [4958] */
    (xdc_Char)0x6c,  /* [4959] */
    (xdc_Char)0x69,  /* [4960] */
    (xdc_Char)0x64,  /* [4961] */
    (xdc_Char)0x20,  /* [4962] */
    (xdc_Char)0x54,  /* [4963] */
    (xdc_Char)0x69,  /* [4964] */
    (xdc_Char)0x6d,  /* [4965] */
    (xdc_Char)0x65,  /* [4966] */
    (xdc_Char)0x72,  /* [4967] */
    (xdc_Char)0x20,  /* [4968] */
    (xdc_Char)0x49,  /* [4969] */
    (xdc_Char)0x64,  /* [4970] */
    (xdc_Char)0x20,  /* [4971] */
    (xdc_Char)0x25,  /* [4972] */
    (xdc_Char)0x64,  /* [4973] */
    (xdc_Char)0x0,  /* [4974] */
    (xdc_Char)0x45,  /* [4975] */
    (xdc_Char)0x5f,  /* [4976] */
    (xdc_Char)0x6e,  /* [4977] */
    (xdc_Char)0x6f,  /* [4978] */
    (xdc_Char)0x74,  /* [4979] */
    (xdc_Char)0x41,  /* [4980] */
    (xdc_Char)0x76,  /* [4981] */
    (xdc_Char)0x61,  /* [4982] */
    (xdc_Char)0x69,  /* [4983] */
    (xdc_Char)0x6c,  /* [4984] */
    (xdc_Char)0x61,  /* [4985] */
    (xdc_Char)0x62,  /* [4986] */
    (xdc_Char)0x6c,  /* [4987] */
    (xdc_Char)0x65,  /* [4988] */
    (xdc_Char)0x3a,  /* [4989] */
    (xdc_Char)0x20,  /* [4990] */
    (xdc_Char)0x54,  /* [4991] */
    (xdc_Char)0x69,  /* [4992] */
    (xdc_Char)0x6d,  /* [4993] */
    (xdc_Char)0x65,  /* [4994] */
    (xdc_Char)0x72,  /* [4995] */
    (xdc_Char)0x20,  /* [4996] */
    (xdc_Char)0x6e,  /* [4997] */
    (xdc_Char)0x6f,  /* [4998] */
    (xdc_Char)0x74,  /* [4999] */
    (xdc_Char)0x20,  /* [5000] */
    (xdc_Char)0x61,  /* [5001] */
    (xdc_Char)0x76,  /* [5002] */
    (xdc_Char)0x61,  /* [5003] */
    (xdc_Char)0x69,  /* [5004] */
    (xdc_Char)0x6c,  /* [5005] */
    (xdc_Char)0x61,  /* [5006] */
    (xdc_Char)0x62,  /* [5007] */
    (xdc_Char)0x6c,  /* [5008] */
    (xdc_Char)0x65,  /* [5009] */
    (xdc_Char)0x20,  /* [5010] */
    (xdc_Char)0x25,  /* [5011] */
    (xdc_Char)0x64,  /* [5012] */
    (xdc_Char)0x0,  /* [5013] */
    (xdc_Char)0x45,  /* [5014] */
    (xdc_Char)0x5f,  /* [5015] */
    (xdc_Char)0x63,  /* [5016] */
    (xdc_Char)0x61,  /* [5017] */
    (xdc_Char)0x6e,  /* [5018] */
    (xdc_Char)0x6e,  /* [5019] */
    (xdc_Char)0x6f,  /* [5020] */
    (xdc_Char)0x74,  /* [5021] */
    (xdc_Char)0x53,  /* [5022] */
    (xdc_Char)0x75,  /* [5023] */
    (xdc_Char)0x70,  /* [5024] */
    (xdc_Char)0x70,  /* [5025] */
    (xdc_Char)0x6f,  /* [5026] */
    (xdc_Char)0x72,  /* [5027] */
    (xdc_Char)0x74,  /* [5028] */
    (xdc_Char)0x3a,  /* [5029] */
    (xdc_Char)0x20,  /* [5030] */
    (xdc_Char)0x54,  /* [5031] */
    (xdc_Char)0x69,  /* [5032] */
    (xdc_Char)0x6d,  /* [5033] */
    (xdc_Char)0x65,  /* [5034] */
    (xdc_Char)0x72,  /* [5035] */
    (xdc_Char)0x20,  /* [5036] */
    (xdc_Char)0x63,  /* [5037] */
    (xdc_Char)0x61,  /* [5038] */
    (xdc_Char)0x6e,  /* [5039] */
    (xdc_Char)0x6e,  /* [5040] */
    (xdc_Char)0x6f,  /* [5041] */
    (xdc_Char)0x74,  /* [5042] */
    (xdc_Char)0x20,  /* [5043] */
    (xdc_Char)0x73,  /* [5044] */
    (xdc_Char)0x75,  /* [5045] */
    (xdc_Char)0x70,  /* [5046] */
    (xdc_Char)0x70,  /* [5047] */
    (xdc_Char)0x6f,  /* [5048] */
    (xdc_Char)0x72,  /* [5049] */
    (xdc_Char)0x74,  /* [5050] */
    (xdc_Char)0x20,  /* [5051] */
    (xdc_Char)0x72,  /* [5052] */
    (xdc_Char)0x65,  /* [5053] */
    (xdc_Char)0x71,  /* [5054] */
    (xdc_Char)0x75,  /* [5055] */
    (xdc_Char)0x65,  /* [5056] */
    (xdc_Char)0x73,  /* [5057] */
    (xdc_Char)0x74,  /* [5058] */
    (xdc_Char)0x65,  /* [5059] */
    (xdc_Char)0x64,  /* [5060] */
    (xdc_Char)0x20,  /* [5061] */
    (xdc_Char)0x70,  /* [5062] */
    (xdc_Char)0x65,  /* [5063] */
    (xdc_Char)0x72,  /* [5064] */
    (xdc_Char)0x69,  /* [5065] */
    (xdc_Char)0x6f,  /* [5066] */
    (xdc_Char)0x64,  /* [5067] */
    (xdc_Char)0x20,  /* [5068] */
    (xdc_Char)0x25,  /* [5069] */
    (xdc_Char)0x64,  /* [5070] */
    (xdc_Char)0x0,  /* [5071] */
    (xdc_Char)0x72,  /* [5072] */
    (xdc_Char)0x65,  /* [5073] */
    (xdc_Char)0x71,  /* [5074] */
    (xdc_Char)0x75,  /* [5075] */
    (xdc_Char)0x65,  /* [5076] */
    (xdc_Char)0x73,  /* [5077] */
    (xdc_Char)0x74,  /* [5078] */
    (xdc_Char)0x65,  /* [5079] */
    (xdc_Char)0x64,  /* [5080] */
    (xdc_Char)0x20,  /* [5081] */
    (xdc_Char)0x73,  /* [5082] */
    (xdc_Char)0x69,  /* [5083] */
    (xdc_Char)0x7a,  /* [5084] */
    (xdc_Char)0x65,  /* [5085] */
    (xdc_Char)0x20,  /* [5086] */
    (xdc_Char)0x69,  /* [5087] */
    (xdc_Char)0x73,  /* [5088] */
    (xdc_Char)0x20,  /* [5089] */
    (xdc_Char)0x74,  /* [5090] */
    (xdc_Char)0x6f,  /* [5091] */
    (xdc_Char)0x6f,  /* [5092] */
    (xdc_Char)0x20,  /* [5093] */
    (xdc_Char)0x62,  /* [5094] */
    (xdc_Char)0x69,  /* [5095] */
    (xdc_Char)0x67,  /* [5096] */
    (xdc_Char)0x3a,  /* [5097] */
    (xdc_Char)0x20,  /* [5098] */
    (xdc_Char)0x68,  /* [5099] */
    (xdc_Char)0x61,  /* [5100] */
    (xdc_Char)0x6e,  /* [5101] */
    (xdc_Char)0x64,  /* [5102] */
    (xdc_Char)0x6c,  /* [5103] */
    (xdc_Char)0x65,  /* [5104] */
    (xdc_Char)0x3d,  /* [5105] */
    (xdc_Char)0x30,  /* [5106] */
    (xdc_Char)0x78,  /* [5107] */
    (xdc_Char)0x25,  /* [5108] */
    (xdc_Char)0x78,  /* [5109] */
    (xdc_Char)0x2c,  /* [5110] */
    (xdc_Char)0x20,  /* [5111] */
    (xdc_Char)0x73,  /* [5112] */
    (xdc_Char)0x69,  /* [5113] */
    (xdc_Char)0x7a,  /* [5114] */
    (xdc_Char)0x65,  /* [5115] */
    (xdc_Char)0x3d,  /* [5116] */
    (xdc_Char)0x25,  /* [5117] */
    (xdc_Char)0x75,  /* [5118] */
    (xdc_Char)0x0,  /* [5119] */
    (xdc_Char)0x6f,  /* [5120] */
    (xdc_Char)0x75,  /* [5121] */
    (xdc_Char)0x74,  /* [5122] */
    (xdc_Char)0x20,  /* [5123] */
    (xdc_Char)0x6f,  /* [5124] */
    (xdc_Char)0x66,  /* [5125] */
    (xdc_Char)0x20,  /* [5126] */
    (xdc_Char)0x6d,  /* [5127] */
    (xdc_Char)0x65,  /* [5128] */
    (xdc_Char)0x6d,  /* [5129] */
    (xdc_Char)0x6f,  /* [5130] */
    (xdc_Char)0x72,  /* [5131] */
    (xdc_Char)0x79,  /* [5132] */
    (xdc_Char)0x3a,  /* [5133] */
    (xdc_Char)0x20,  /* [5134] */
    (xdc_Char)0x68,  /* [5135] */
    (xdc_Char)0x61,  /* [5136] */
    (xdc_Char)0x6e,  /* [5137] */
    (xdc_Char)0x64,  /* [5138] */
    (xdc_Char)0x6c,  /* [5139] */
    (xdc_Char)0x65,  /* [5140] */
    (xdc_Char)0x3d,  /* [5141] */
    (xdc_Char)0x30,  /* [5142] */
    (xdc_Char)0x78,  /* [5143] */
    (xdc_Char)0x25,  /* [5144] */
    (xdc_Char)0x78,  /* [5145] */
    (xdc_Char)0x2c,  /* [5146] */
    (xdc_Char)0x20,  /* [5147] */
    (xdc_Char)0x73,  /* [5148] */
    (xdc_Char)0x69,  /* [5149] */
    (xdc_Char)0x7a,  /* [5150] */
    (xdc_Char)0x65,  /* [5151] */
    (xdc_Char)0x3d,  /* [5152] */
    (xdc_Char)0x25,  /* [5153] */
    (xdc_Char)0x75,  /* [5154] */
    (xdc_Char)0x0,  /* [5155] */
    (xdc_Char)0x45,  /* [5156] */
    (xdc_Char)0x5f,  /* [5157] */
    (xdc_Char)0x70,  /* [5158] */
    (xdc_Char)0x72,  /* [5159] */
    (xdc_Char)0x69,  /* [5160] */
    (xdc_Char)0x6f,  /* [5161] */
    (xdc_Char)0x72,  /* [5162] */
    (xdc_Char)0x69,  /* [5163] */
    (xdc_Char)0x74,  /* [5164] */
    (xdc_Char)0x79,  /* [5165] */
    (xdc_Char)0x3a,  /* [5166] */
    (xdc_Char)0x20,  /* [5167] */
    (xdc_Char)0x54,  /* [5168] */
    (xdc_Char)0x68,  /* [5169] */
    (xdc_Char)0x72,  /* [5170] */
    (xdc_Char)0x65,  /* [5171] */
    (xdc_Char)0x61,  /* [5172] */
    (xdc_Char)0x64,  /* [5173] */
    (xdc_Char)0x20,  /* [5174] */
    (xdc_Char)0x70,  /* [5175] */
    (xdc_Char)0x72,  /* [5176] */
    (xdc_Char)0x69,  /* [5177] */
    (xdc_Char)0x6f,  /* [5178] */
    (xdc_Char)0x72,  /* [5179] */
    (xdc_Char)0x69,  /* [5180] */
    (xdc_Char)0x74,  /* [5181] */
    (xdc_Char)0x79,  /* [5182] */
    (xdc_Char)0x20,  /* [5183] */
    (xdc_Char)0x69,  /* [5184] */
    (xdc_Char)0x73,  /* [5185] */
    (xdc_Char)0x20,  /* [5186] */
    (xdc_Char)0x69,  /* [5187] */
    (xdc_Char)0x6e,  /* [5188] */
    (xdc_Char)0x76,  /* [5189] */
    (xdc_Char)0x61,  /* [5190] */
    (xdc_Char)0x6c,  /* [5191] */
    (xdc_Char)0x69,  /* [5192] */
    (xdc_Char)0x64,  /* [5193] */
    (xdc_Char)0x20,  /* [5194] */
    (xdc_Char)0x25,  /* [5195] */
    (xdc_Char)0x64,  /* [5196] */
    (xdc_Char)0x0,  /* [5197] */
    (xdc_Char)0x45,  /* [5198] */
    (xdc_Char)0x5f,  /* [5199] */
    (xdc_Char)0x6e,  /* [5200] */
    (xdc_Char)0x6f,  /* [5201] */
    (xdc_Char)0x61,  /* [5202] */
    (xdc_Char)0x6c,  /* [5203] */
    (xdc_Char)0x74,  /* [5204] */
    (xdc_Char)0x63,  /* [5205] */
    (xdc_Char)0x6c,  /* [5206] */
    (xdc_Char)0x6b,  /* [5207] */
    (xdc_Char)0x3a,  /* [5208] */
    (xdc_Char)0x20,  /* [5209] */
    (xdc_Char)0x54,  /* [5210] */
    (xdc_Char)0x69,  /* [5211] */
    (xdc_Char)0x6d,  /* [5212] */
    (xdc_Char)0x65,  /* [5213] */
    (xdc_Char)0x72,  /* [5214] */
    (xdc_Char)0x20,  /* [5215] */
    (xdc_Char)0x64,  /* [5216] */
    (xdc_Char)0x6f,  /* [5217] */
    (xdc_Char)0x65,  /* [5218] */
    (xdc_Char)0x73,  /* [5219] */
    (xdc_Char)0x20,  /* [5220] */
    (xdc_Char)0x6e,  /* [5221] */
    (xdc_Char)0x6f,  /* [5222] */
    (xdc_Char)0x74,  /* [5223] */
    (xdc_Char)0x20,  /* [5224] */
    (xdc_Char)0x73,  /* [5225] */
    (xdc_Char)0x75,  /* [5226] */
    (xdc_Char)0x70,  /* [5227] */
    (xdc_Char)0x70,  /* [5228] */
    (xdc_Char)0x6f,  /* [5229] */
    (xdc_Char)0x72,  /* [5230] */
    (xdc_Char)0x74,  /* [5231] */
    (xdc_Char)0x20,  /* [5232] */
    (xdc_Char)0x61,  /* [5233] */
    (xdc_Char)0x6c,  /* [5234] */
    (xdc_Char)0x74,  /* [5235] */
    (xdc_Char)0x63,  /* [5236] */
    (xdc_Char)0x6c,  /* [5237] */
    (xdc_Char)0x6b,  /* [5238] */
    (xdc_Char)0x0,  /* [5239] */
    (xdc_Char)0x3c,  /* [5240] */
    (xdc_Char)0x2d,  /* [5241] */
    (xdc_Char)0x2d,  /* [5242] */
    (xdc_Char)0x20,  /* [5243] */
    (xdc_Char)0x63,  /* [5244] */
    (xdc_Char)0x6f,  /* [5245] */
    (xdc_Char)0x6e,  /* [5246] */
    (xdc_Char)0x73,  /* [5247] */
    (xdc_Char)0x74,  /* [5248] */
    (xdc_Char)0x72,  /* [5249] */
    (xdc_Char)0x75,  /* [5250] */
    (xdc_Char)0x63,  /* [5251] */
    (xdc_Char)0x74,  /* [5252] */
    (xdc_Char)0x3a,  /* [5253] */
    (xdc_Char)0x20,  /* [5254] */
    (xdc_Char)0x25,  /* [5255] */
    (xdc_Char)0x70,  /* [5256] */
    (xdc_Char)0x28,  /* [5257] */
    (xdc_Char)0x27,  /* [5258] */
    (xdc_Char)0x25,  /* [5259] */
    (xdc_Char)0x73,  /* [5260] */
    (xdc_Char)0x27,  /* [5261] */
    (xdc_Char)0x29,  /* [5262] */
    (xdc_Char)0x0,  /* [5263] */
    (xdc_Char)0x3c,  /* [5264] */
    (xdc_Char)0x2d,  /* [5265] */
    (xdc_Char)0x2d,  /* [5266] */
    (xdc_Char)0x20,  /* [5267] */
    (xdc_Char)0x63,  /* [5268] */
    (xdc_Char)0x72,  /* [5269] */
    (xdc_Char)0x65,  /* [5270] */
    (xdc_Char)0x61,  /* [5271] */
    (xdc_Char)0x74,  /* [5272] */
    (xdc_Char)0x65,  /* [5273] */
    (xdc_Char)0x3a,  /* [5274] */
    (xdc_Char)0x20,  /* [5275] */
    (xdc_Char)0x25,  /* [5276] */
    (xdc_Char)0x70,  /* [5277] */
    (xdc_Char)0x28,  /* [5278] */
    (xdc_Char)0x27,  /* [5279] */
    (xdc_Char)0x25,  /* [5280] */
    (xdc_Char)0x73,  /* [5281] */
    (xdc_Char)0x27,  /* [5282] */
    (xdc_Char)0x29,  /* [5283] */
    (xdc_Char)0x0,  /* [5284] */
    (xdc_Char)0x2d,  /* [5285] */
    (xdc_Char)0x2d,  /* [5286] */
    (xdc_Char)0x3e,  /* [5287] */
    (xdc_Char)0x20,  /* [5288] */
    (xdc_Char)0x64,  /* [5289] */
    (xdc_Char)0x65,  /* [5290] */
    (xdc_Char)0x73,  /* [5291] */
    (xdc_Char)0x74,  /* [5292] */
    (xdc_Char)0x72,  /* [5293] */
    (xdc_Char)0x75,  /* [5294] */
    (xdc_Char)0x63,  /* [5295] */
    (xdc_Char)0x74,  /* [5296] */
    (xdc_Char)0x3a,  /* [5297] */
    (xdc_Char)0x20,  /* [5298] */
    (xdc_Char)0x28,  /* [5299] */
    (xdc_Char)0x25,  /* [5300] */
    (xdc_Char)0x70,  /* [5301] */
    (xdc_Char)0x29,  /* [5302] */
    (xdc_Char)0x0,  /* [5303] */
    (xdc_Char)0x2d,  /* [5304] */
    (xdc_Char)0x2d,  /* [5305] */
    (xdc_Char)0x3e,  /* [5306] */
    (xdc_Char)0x20,  /* [5307] */
    (xdc_Char)0x64,  /* [5308] */
    (xdc_Char)0x65,  /* [5309] */
    (xdc_Char)0x6c,  /* [5310] */
    (xdc_Char)0x65,  /* [5311] */
    (xdc_Char)0x74,  /* [5312] */
    (xdc_Char)0x65,  /* [5313] */
    (xdc_Char)0x3a,  /* [5314] */
    (xdc_Char)0x20,  /* [5315] */
    (xdc_Char)0x28,  /* [5316] */
    (xdc_Char)0x25,  /* [5317] */
    (xdc_Char)0x70,  /* [5318] */
    (xdc_Char)0x29,  /* [5319] */
    (xdc_Char)0x0,  /* [5320] */
    (xdc_Char)0x45,  /* [5321] */
    (xdc_Char)0x52,  /* [5322] */
    (xdc_Char)0x52,  /* [5323] */
    (xdc_Char)0x4f,  /* [5324] */
    (xdc_Char)0x52,  /* [5325] */
    (xdc_Char)0x3a,  /* [5326] */
    (xdc_Char)0x20,  /* [5327] */
    (xdc_Char)0x25,  /* [5328] */
    (xdc_Char)0x24,  /* [5329] */
    (xdc_Char)0x46,  /* [5330] */
    (xdc_Char)0x25,  /* [5331] */
    (xdc_Char)0x24,  /* [5332] */
    (xdc_Char)0x53,  /* [5333] */
    (xdc_Char)0x0,  /* [5334] */
    (xdc_Char)0x57,  /* [5335] */
    (xdc_Char)0x41,  /* [5336] */
    (xdc_Char)0x52,  /* [5337] */
    (xdc_Char)0x4e,  /* [5338] */
    (xdc_Char)0x49,  /* [5339] */
    (xdc_Char)0x4e,  /* [5340] */
    (xdc_Char)0x47,  /* [5341] */
    (xdc_Char)0x3a,  /* [5342] */
    (xdc_Char)0x20,  /* [5343] */
    (xdc_Char)0x25,  /* [5344] */
    (xdc_Char)0x24,  /* [5345] */
    (xdc_Char)0x46,  /* [5346] */
    (xdc_Char)0x25,  /* [5347] */
    (xdc_Char)0x24,  /* [5348] */
    (xdc_Char)0x53,  /* [5349] */
    (xdc_Char)0x0,  /* [5350] */
    (xdc_Char)0x25,  /* [5351] */
    (xdc_Char)0x24,  /* [5352] */
    (xdc_Char)0x46,  /* [5353] */
    (xdc_Char)0x25,  /* [5354] */
    (xdc_Char)0x24,  /* [5355] */
    (xdc_Char)0x53,  /* [5356] */
    (xdc_Char)0x0,  /* [5357] */
    (xdc_Char)0x53,  /* [5358] */
    (xdc_Char)0x74,  /* [5359] */
    (xdc_Char)0x61,  /* [5360] */
    (xdc_Char)0x72,  /* [5361] */
    (xdc_Char)0x74,  /* [5362] */
    (xdc_Char)0x3a,  /* [5363] */
    (xdc_Char)0x20,  /* [5364] */
    (xdc_Char)0x25,  /* [5365] */
    (xdc_Char)0x24,  /* [5366] */
    (xdc_Char)0x53,  /* [5367] */
    (xdc_Char)0x0,  /* [5368] */
    (xdc_Char)0x53,  /* [5369] */
    (xdc_Char)0x74,  /* [5370] */
    (xdc_Char)0x6f,  /* [5371] */
    (xdc_Char)0x70,  /* [5372] */
    (xdc_Char)0x3a,  /* [5373] */
    (xdc_Char)0x20,  /* [5374] */
    (xdc_Char)0x25,  /* [5375] */
    (xdc_Char)0x24,  /* [5376] */
    (xdc_Char)0x53,  /* [5377] */
    (xdc_Char)0x0,  /* [5378] */
    (xdc_Char)0x53,  /* [5379] */
    (xdc_Char)0x74,  /* [5380] */
    (xdc_Char)0x61,  /* [5381] */
    (xdc_Char)0x72,  /* [5382] */
    (xdc_Char)0x74,  /* [5383] */
    (xdc_Char)0x49,  /* [5384] */
    (xdc_Char)0x6e,  /* [5385] */
    (xdc_Char)0x73,  /* [5386] */
    (xdc_Char)0x74,  /* [5387] */
    (xdc_Char)0x61,  /* [5388] */
    (xdc_Char)0x6e,  /* [5389] */
    (xdc_Char)0x63,  /* [5390] */
    (xdc_Char)0x65,  /* [5391] */
    (xdc_Char)0x3a,  /* [5392] */
    (xdc_Char)0x20,  /* [5393] */
    (xdc_Char)0x25,  /* [5394] */
    (xdc_Char)0x24,  /* [5395] */
    (xdc_Char)0x53,  /* [5396] */
    (xdc_Char)0x0,  /* [5397] */
    (xdc_Char)0x53,  /* [5398] */
    (xdc_Char)0x74,  /* [5399] */
    (xdc_Char)0x6f,  /* [5400] */
    (xdc_Char)0x70,  /* [5401] */
    (xdc_Char)0x49,  /* [5402] */
    (xdc_Char)0x6e,  /* [5403] */
    (xdc_Char)0x73,  /* [5404] */
    (xdc_Char)0x74,  /* [5405] */
    (xdc_Char)0x61,  /* [5406] */
    (xdc_Char)0x6e,  /* [5407] */
    (xdc_Char)0x63,  /* [5408] */
    (xdc_Char)0x65,  /* [5409] */
    (xdc_Char)0x3a,  /* [5410] */
    (xdc_Char)0x20,  /* [5411] */
    (xdc_Char)0x25,  /* [5412] */
    (xdc_Char)0x24,  /* [5413] */
    (xdc_Char)0x53,  /* [5414] */
    (xdc_Char)0x0,  /* [5415] */
    (xdc_Char)0x45,  /* [5416] */
    (xdc_Char)0x52,  /* [5417] */
    (xdc_Char)0x52,  /* [5418] */
    (xdc_Char)0x4f,  /* [5419] */
    (xdc_Char)0x52,  /* [5420] */
    (xdc_Char)0x3a,  /* [5421] */
    (xdc_Char)0x20,  /* [5422] */
    (xdc_Char)0x45,  /* [5423] */
    (xdc_Char)0x72,  /* [5424] */
    (xdc_Char)0x72,  /* [5425] */
    (xdc_Char)0x6f,  /* [5426] */
    (xdc_Char)0x72,  /* [5427] */
    (xdc_Char)0x43,  /* [5428] */
    (xdc_Char)0x6f,  /* [5429] */
    (xdc_Char)0x64,  /* [5430] */
    (xdc_Char)0x65,  /* [5431] */
    (xdc_Char)0x3a,  /* [5432] */
    (xdc_Char)0x30,  /* [5433] */
    (xdc_Char)0x78,  /* [5434] */
    (xdc_Char)0x25,  /* [5435] */
    (xdc_Char)0x78,  /* [5436] */
    (xdc_Char)0x0,  /* [5437] */
    (xdc_Char)0x45,  /* [5438] */
    (xdc_Char)0x52,  /* [5439] */
    (xdc_Char)0x52,  /* [5440] */
    (xdc_Char)0x4f,  /* [5441] */
    (xdc_Char)0x52,  /* [5442] */
    (xdc_Char)0x3a,  /* [5443] */
    (xdc_Char)0x20,  /* [5444] */
    (xdc_Char)0x45,  /* [5445] */
    (xdc_Char)0x72,  /* [5446] */
    (xdc_Char)0x72,  /* [5447] */
    (xdc_Char)0x6f,  /* [5448] */
    (xdc_Char)0x72,  /* [5449] */
    (xdc_Char)0x43,  /* [5450] */
    (xdc_Char)0x6f,  /* [5451] */
    (xdc_Char)0x64,  /* [5452] */
    (xdc_Char)0x65,  /* [5453] */
    (xdc_Char)0x3a,  /* [5454] */
    (xdc_Char)0x30,  /* [5455] */
    (xdc_Char)0x78,  /* [5456] */
    (xdc_Char)0x25,  /* [5457] */
    (xdc_Char)0x78,  /* [5458] */
    (xdc_Char)0x2e,  /* [5459] */
    (xdc_Char)0x20,  /* [5460] */
    (xdc_Char)0x25,  /* [5461] */
    (xdc_Char)0x24,  /* [5462] */
    (xdc_Char)0x53,  /* [5463] */
    (xdc_Char)0x0,  /* [5464] */
    (xdc_Char)0x48,  /* [5465] */
    (xdc_Char)0x57,  /* [5466] */
    (xdc_Char)0x20,  /* [5467] */
    (xdc_Char)0x45,  /* [5468] */
    (xdc_Char)0x52,  /* [5469] */
    (xdc_Char)0x52,  /* [5470] */
    (xdc_Char)0x4f,  /* [5471] */
    (xdc_Char)0x52,  /* [5472] */
    (xdc_Char)0x3a,  /* [5473] */
    (xdc_Char)0x20,  /* [5474] */
    (xdc_Char)0x45,  /* [5475] */
    (xdc_Char)0x72,  /* [5476] */
    (xdc_Char)0x72,  /* [5477] */
    (xdc_Char)0x6f,  /* [5478] */
    (xdc_Char)0x72,  /* [5479] */
    (xdc_Char)0x43,  /* [5480] */
    (xdc_Char)0x6f,  /* [5481] */
    (xdc_Char)0x64,  /* [5482] */
    (xdc_Char)0x65,  /* [5483] */
    (xdc_Char)0x3a,  /* [5484] */
    (xdc_Char)0x30,  /* [5485] */
    (xdc_Char)0x78,  /* [5486] */
    (xdc_Char)0x25,  /* [5487] */
    (xdc_Char)0x78,  /* [5488] */
    (xdc_Char)0x0,  /* [5489] */
    (xdc_Char)0x48,  /* [5490] */
    (xdc_Char)0x57,  /* [5491] */
    (xdc_Char)0x20,  /* [5492] */
    (xdc_Char)0x45,  /* [5493] */
    (xdc_Char)0x52,  /* [5494] */
    (xdc_Char)0x52,  /* [5495] */
    (xdc_Char)0x4f,  /* [5496] */
    (xdc_Char)0x52,  /* [5497] */
    (xdc_Char)0x3a,  /* [5498] */
    (xdc_Char)0x20,  /* [5499] */
    (xdc_Char)0x45,  /* [5500] */
    (xdc_Char)0x72,  /* [5501] */
    (xdc_Char)0x72,  /* [5502] */
    (xdc_Char)0x6f,  /* [5503] */
    (xdc_Char)0x72,  /* [5504] */
    (xdc_Char)0x43,  /* [5505] */
    (xdc_Char)0x6f,  /* [5506] */
    (xdc_Char)0x64,  /* [5507] */
    (xdc_Char)0x65,  /* [5508] */
    (xdc_Char)0x3a,  /* [5509] */
    (xdc_Char)0x30,  /* [5510] */
    (xdc_Char)0x78,  /* [5511] */
    (xdc_Char)0x25,  /* [5512] */
    (xdc_Char)0x78,  /* [5513] */
    (xdc_Char)0x2e,  /* [5514] */
    (xdc_Char)0x20,  /* [5515] */
    (xdc_Char)0x25,  /* [5516] */
    (xdc_Char)0x24,  /* [5517] */
    (xdc_Char)0x53,  /* [5518] */
    (xdc_Char)0x0,  /* [5519] */
    (xdc_Char)0x46,  /* [5520] */
    (xdc_Char)0x41,  /* [5521] */
    (xdc_Char)0x54,  /* [5522] */
    (xdc_Char)0x41,  /* [5523] */
    (xdc_Char)0x4c,  /* [5524] */
    (xdc_Char)0x20,  /* [5525] */
    (xdc_Char)0x45,  /* [5526] */
    (xdc_Char)0x52,  /* [5527] */
    (xdc_Char)0x52,  /* [5528] */
    (xdc_Char)0x4f,  /* [5529] */
    (xdc_Char)0x52,  /* [5530] */
    (xdc_Char)0x3a,  /* [5531] */
    (xdc_Char)0x20,  /* [5532] */
    (xdc_Char)0x45,  /* [5533] */
    (xdc_Char)0x72,  /* [5534] */
    (xdc_Char)0x72,  /* [5535] */
    (xdc_Char)0x6f,  /* [5536] */
    (xdc_Char)0x72,  /* [5537] */
    (xdc_Char)0x43,  /* [5538] */
    (xdc_Char)0x6f,  /* [5539] */
    (xdc_Char)0x64,  /* [5540] */
    (xdc_Char)0x65,  /* [5541] */
    (xdc_Char)0x3a,  /* [5542] */
    (xdc_Char)0x30,  /* [5543] */
    (xdc_Char)0x78,  /* [5544] */
    (xdc_Char)0x25,  /* [5545] */
    (xdc_Char)0x78,  /* [5546] */
    (xdc_Char)0x0,  /* [5547] */
    (xdc_Char)0x46,  /* [5548] */
    (xdc_Char)0x41,  /* [5549] */
    (xdc_Char)0x54,  /* [5550] */
    (xdc_Char)0x41,  /* [5551] */
    (xdc_Char)0x4c,  /* [5552] */
    (xdc_Char)0x20,  /* [5553] */
    (xdc_Char)0x45,  /* [5554] */
    (xdc_Char)0x52,  /* [5555] */
    (xdc_Char)0x52,  /* [5556] */
    (xdc_Char)0x4f,  /* [5557] */
    (xdc_Char)0x52,  /* [5558] */
    (xdc_Char)0x3a,  /* [5559] */
    (xdc_Char)0x20,  /* [5560] */
    (xdc_Char)0x45,  /* [5561] */
    (xdc_Char)0x72,  /* [5562] */
    (xdc_Char)0x72,  /* [5563] */
    (xdc_Char)0x6f,  /* [5564] */
    (xdc_Char)0x72,  /* [5565] */
    (xdc_Char)0x43,  /* [5566] */
    (xdc_Char)0x6f,  /* [5567] */
    (xdc_Char)0x64,  /* [5568] */
    (xdc_Char)0x65,  /* [5569] */
    (xdc_Char)0x3a,  /* [5570] */
    (xdc_Char)0x30,  /* [5571] */
    (xdc_Char)0x78,  /* [5572] */
    (xdc_Char)0x25,  /* [5573] */
    (xdc_Char)0x78,  /* [5574] */
    (xdc_Char)0x2e,  /* [5575] */
    (xdc_Char)0x20,  /* [5576] */
    (xdc_Char)0x25,  /* [5577] */
    (xdc_Char)0x24,  /* [5578] */
    (xdc_Char)0x53,  /* [5579] */
    (xdc_Char)0x0,  /* [5580] */
    (xdc_Char)0x43,  /* [5581] */
    (xdc_Char)0x52,  /* [5582] */
    (xdc_Char)0x49,  /* [5583] */
    (xdc_Char)0x54,  /* [5584] */
    (xdc_Char)0x49,  /* [5585] */
    (xdc_Char)0x43,  /* [5586] */
    (xdc_Char)0x41,  /* [5587] */
    (xdc_Char)0x4c,  /* [5588] */
    (xdc_Char)0x20,  /* [5589] */
    (xdc_Char)0x45,  /* [5590] */
    (xdc_Char)0x52,  /* [5591] */
    (xdc_Char)0x52,  /* [5592] */
    (xdc_Char)0x4f,  /* [5593] */
    (xdc_Char)0x52,  /* [5594] */
    (xdc_Char)0x3a,  /* [5595] */
    (xdc_Char)0x20,  /* [5596] */
    (xdc_Char)0x45,  /* [5597] */
    (xdc_Char)0x72,  /* [5598] */
    (xdc_Char)0x72,  /* [5599] */
    (xdc_Char)0x6f,  /* [5600] */
    (xdc_Char)0x72,  /* [5601] */
    (xdc_Char)0x43,  /* [5602] */
    (xdc_Char)0x6f,  /* [5603] */
    (xdc_Char)0x64,  /* [5604] */
    (xdc_Char)0x65,  /* [5605] */
    (xdc_Char)0x3a,  /* [5606] */
    (xdc_Char)0x30,  /* [5607] */
    (xdc_Char)0x78,  /* [5608] */
    (xdc_Char)0x25,  /* [5609] */
    (xdc_Char)0x78,  /* [5610] */
    (xdc_Char)0x0,  /* [5611] */
    (xdc_Char)0x43,  /* [5612] */
    (xdc_Char)0x52,  /* [5613] */
    (xdc_Char)0x49,  /* [5614] */
    (xdc_Char)0x54,  /* [5615] */
    (xdc_Char)0x49,  /* [5616] */
    (xdc_Char)0x43,  /* [5617] */
    (xdc_Char)0x41,  /* [5618] */
    (xdc_Char)0x4c,  /* [5619] */
    (xdc_Char)0x20,  /* [5620] */
    (xdc_Char)0x45,  /* [5621] */
    (xdc_Char)0x52,  /* [5622] */
    (xdc_Char)0x52,  /* [5623] */
    (xdc_Char)0x4f,  /* [5624] */
    (xdc_Char)0x52,  /* [5625] */
    (xdc_Char)0x3a,  /* [5626] */
    (xdc_Char)0x20,  /* [5627] */
    (xdc_Char)0x45,  /* [5628] */
    (xdc_Char)0x72,  /* [5629] */
    (xdc_Char)0x72,  /* [5630] */
    (xdc_Char)0x6f,  /* [5631] */
    (xdc_Char)0x72,  /* [5632] */
    (xdc_Char)0x43,  /* [5633] */
    (xdc_Char)0x6f,  /* [5634] */
    (xdc_Char)0x64,  /* [5635] */
    (xdc_Char)0x65,  /* [5636] */
    (xdc_Char)0x3a,  /* [5637] */
    (xdc_Char)0x30,  /* [5638] */
    (xdc_Char)0x78,  /* [5639] */
    (xdc_Char)0x25,  /* [5640] */
    (xdc_Char)0x78,  /* [5641] */
    (xdc_Char)0x2e,  /* [5642] */
    (xdc_Char)0x20,  /* [5643] */
    (xdc_Char)0x25,  /* [5644] */
    (xdc_Char)0x24,  /* [5645] */
    (xdc_Char)0x53,  /* [5646] */
    (xdc_Char)0x0,  /* [5647] */
    (xdc_Char)0x45,  /* [5648] */
    (xdc_Char)0x52,  /* [5649] */
    (xdc_Char)0x52,  /* [5650] */
    (xdc_Char)0x4f,  /* [5651] */
    (xdc_Char)0x52,  /* [5652] */
    (xdc_Char)0x3a,  /* [5653] */
    (xdc_Char)0x20,  /* [5654] */
    (xdc_Char)0x45,  /* [5655] */
    (xdc_Char)0x78,  /* [5656] */
    (xdc_Char)0x63,  /* [5657] */
    (xdc_Char)0x65,  /* [5658] */
    (xdc_Char)0x70,  /* [5659] */
    (xdc_Char)0x74,  /* [5660] */
    (xdc_Char)0x69,  /* [5661] */
    (xdc_Char)0x6f,  /* [5662] */
    (xdc_Char)0x6e,  /* [5663] */
    (xdc_Char)0x20,  /* [5664] */
    (xdc_Char)0x61,  /* [5665] */
    (xdc_Char)0x74,  /* [5666] */
    (xdc_Char)0x20,  /* [5667] */
    (xdc_Char)0x25,  /* [5668] */
    (xdc_Char)0x24,  /* [5669] */
    (xdc_Char)0x46,  /* [5670] */
    (xdc_Char)0x2e,  /* [5671] */
    (xdc_Char)0x0,  /* [5672] */
    (xdc_Char)0x45,  /* [5673] */
    (xdc_Char)0x52,  /* [5674] */
    (xdc_Char)0x52,  /* [5675] */
    (xdc_Char)0x4f,  /* [5676] */
    (xdc_Char)0x52,  /* [5677] */
    (xdc_Char)0x3a,  /* [5678] */
    (xdc_Char)0x20,  /* [5679] */
    (xdc_Char)0x55,  /* [5680] */
    (xdc_Char)0x6e,  /* [5681] */
    (xdc_Char)0x63,  /* [5682] */
    (xdc_Char)0x61,  /* [5683] */
    (xdc_Char)0x75,  /* [5684] */
    (xdc_Char)0x67,  /* [5685] */
    (xdc_Char)0x68,  /* [5686] */
    (xdc_Char)0x74,  /* [5687] */
    (xdc_Char)0x20,  /* [5688] */
    (xdc_Char)0x45,  /* [5689] */
    (xdc_Char)0x78,  /* [5690] */
    (xdc_Char)0x63,  /* [5691] */
    (xdc_Char)0x65,  /* [5692] */
    (xdc_Char)0x70,  /* [5693] */
    (xdc_Char)0x74,  /* [5694] */
    (xdc_Char)0x69,  /* [5695] */
    (xdc_Char)0x6f,  /* [5696] */
    (xdc_Char)0x6e,  /* [5697] */
    (xdc_Char)0x20,  /* [5698] */
    (xdc_Char)0x61,  /* [5699] */
    (xdc_Char)0x74,  /* [5700] */
    (xdc_Char)0x20,  /* [5701] */
    (xdc_Char)0x25,  /* [5702] */
    (xdc_Char)0x24,  /* [5703] */
    (xdc_Char)0x46,  /* [5704] */
    (xdc_Char)0x2e,  /* [5705] */
    (xdc_Char)0x0,  /* [5706] */
    (xdc_Char)0x45,  /* [5707] */
    (xdc_Char)0x52,  /* [5708] */
    (xdc_Char)0x52,  /* [5709] */
    (xdc_Char)0x4f,  /* [5710] */
    (xdc_Char)0x52,  /* [5711] */
    (xdc_Char)0x3a,  /* [5712] */
    (xdc_Char)0x20,  /* [5713] */
    (xdc_Char)0x4e,  /* [5714] */
    (xdc_Char)0x75,  /* [5715] */
    (xdc_Char)0x6c,  /* [5716] */
    (xdc_Char)0x6c,  /* [5717] */
    (xdc_Char)0x20,  /* [5718] */
    (xdc_Char)0x50,  /* [5719] */
    (xdc_Char)0x6f,  /* [5720] */
    (xdc_Char)0x69,  /* [5721] */
    (xdc_Char)0x6e,  /* [5722] */
    (xdc_Char)0x74,  /* [5723] */
    (xdc_Char)0x65,  /* [5724] */
    (xdc_Char)0x72,  /* [5725] */
    (xdc_Char)0x20,  /* [5726] */
    (xdc_Char)0x45,  /* [5727] */
    (xdc_Char)0x78,  /* [5728] */
    (xdc_Char)0x63,  /* [5729] */
    (xdc_Char)0x65,  /* [5730] */
    (xdc_Char)0x70,  /* [5731] */
    (xdc_Char)0x74,  /* [5732] */
    (xdc_Char)0x69,  /* [5733] */
    (xdc_Char)0x6f,  /* [5734] */
    (xdc_Char)0x6e,  /* [5735] */
    (xdc_Char)0x20,  /* [5736] */
    (xdc_Char)0x61,  /* [5737] */
    (xdc_Char)0x74,  /* [5738] */
    (xdc_Char)0x20,  /* [5739] */
    (xdc_Char)0x25,  /* [5740] */
    (xdc_Char)0x24,  /* [5741] */
    (xdc_Char)0x46,  /* [5742] */
    (xdc_Char)0x2e,  /* [5743] */
    (xdc_Char)0x0,  /* [5744] */
    (xdc_Char)0x45,  /* [5745] */
    (xdc_Char)0x52,  /* [5746] */
    (xdc_Char)0x52,  /* [5747] */
    (xdc_Char)0x4f,  /* [5748] */
    (xdc_Char)0x52,  /* [5749] */
    (xdc_Char)0x3a,  /* [5750] */
    (xdc_Char)0x20,  /* [5751] */
    (xdc_Char)0x55,  /* [5752] */
    (xdc_Char)0x6e,  /* [5753] */
    (xdc_Char)0x65,  /* [5754] */
    (xdc_Char)0x78,  /* [5755] */
    (xdc_Char)0x70,  /* [5756] */
    (xdc_Char)0x65,  /* [5757] */
    (xdc_Char)0x63,  /* [5758] */
    (xdc_Char)0x74,  /* [5759] */
    (xdc_Char)0x65,  /* [5760] */
    (xdc_Char)0x64,  /* [5761] */
    (xdc_Char)0x20,  /* [5762] */
    (xdc_Char)0x49,  /* [5763] */
    (xdc_Char)0x6e,  /* [5764] */
    (xdc_Char)0x74,  /* [5765] */
    (xdc_Char)0x65,  /* [5766] */
    (xdc_Char)0x72,  /* [5767] */
    (xdc_Char)0x72,  /* [5768] */
    (xdc_Char)0x75,  /* [5769] */
    (xdc_Char)0x70,  /* [5770] */
    (xdc_Char)0x74,  /* [5771] */
    (xdc_Char)0x20,  /* [5772] */
    (xdc_Char)0x61,  /* [5773] */
    (xdc_Char)0x74,  /* [5774] */
    (xdc_Char)0x20,  /* [5775] */
    (xdc_Char)0x25,  /* [5776] */
    (xdc_Char)0x24,  /* [5777] */
    (xdc_Char)0x46,  /* [5778] */
    (xdc_Char)0x2e,  /* [5779] */
    (xdc_Char)0x0,  /* [5780] */
    (xdc_Char)0x45,  /* [5781] */
    (xdc_Char)0x52,  /* [5782] */
    (xdc_Char)0x52,  /* [5783] */
    (xdc_Char)0x4f,  /* [5784] */
    (xdc_Char)0x52,  /* [5785] */
    (xdc_Char)0x3a,  /* [5786] */
    (xdc_Char)0x20,  /* [5787] */
    (xdc_Char)0x4d,  /* [5788] */
    (xdc_Char)0x65,  /* [5789] */
    (xdc_Char)0x6d,  /* [5790] */
    (xdc_Char)0x6f,  /* [5791] */
    (xdc_Char)0x72,  /* [5792] */
    (xdc_Char)0x79,  /* [5793] */
    (xdc_Char)0x20,  /* [5794] */
    (xdc_Char)0x41,  /* [5795] */
    (xdc_Char)0x63,  /* [5796] */
    (xdc_Char)0x63,  /* [5797] */
    (xdc_Char)0x65,  /* [5798] */
    (xdc_Char)0x73,  /* [5799] */
    (xdc_Char)0x73,  /* [5800] */
    (xdc_Char)0x20,  /* [5801] */
    (xdc_Char)0x46,  /* [5802] */
    (xdc_Char)0x61,  /* [5803] */
    (xdc_Char)0x75,  /* [5804] */
    (xdc_Char)0x6c,  /* [5805] */
    (xdc_Char)0x74,  /* [5806] */
    (xdc_Char)0x20,  /* [5807] */
    (xdc_Char)0x61,  /* [5808] */
    (xdc_Char)0x74,  /* [5809] */
    (xdc_Char)0x20,  /* [5810] */
    (xdc_Char)0x25,  /* [5811] */
    (xdc_Char)0x24,  /* [5812] */
    (xdc_Char)0x46,  /* [5813] */
    (xdc_Char)0x2e,  /* [5814] */
    (xdc_Char)0x20,  /* [5815] */
    (xdc_Char)0x5b,  /* [5816] */
    (xdc_Char)0x41,  /* [5817] */
    (xdc_Char)0x44,  /* [5818] */
    (xdc_Char)0x52,  /* [5819] */
    (xdc_Char)0x53,  /* [5820] */
    (xdc_Char)0x5d,  /* [5821] */
    (xdc_Char)0x30,  /* [5822] */
    (xdc_Char)0x78,  /* [5823] */
    (xdc_Char)0x25,  /* [5824] */
    (xdc_Char)0x78,  /* [5825] */
    (xdc_Char)0x0,  /* [5826] */
    (xdc_Char)0x45,  /* [5827] */
    (xdc_Char)0x52,  /* [5828] */
    (xdc_Char)0x52,  /* [5829] */
    (xdc_Char)0x4f,  /* [5830] */
    (xdc_Char)0x52,  /* [5831] */
    (xdc_Char)0x3a,  /* [5832] */
    (xdc_Char)0x20,  /* [5833] */
    (xdc_Char)0x53,  /* [5834] */
    (xdc_Char)0x65,  /* [5835] */
    (xdc_Char)0x63,  /* [5836] */
    (xdc_Char)0x75,  /* [5837] */
    (xdc_Char)0x72,  /* [5838] */
    (xdc_Char)0x69,  /* [5839] */
    (xdc_Char)0x74,  /* [5840] */
    (xdc_Char)0x79,  /* [5841] */
    (xdc_Char)0x20,  /* [5842] */
    (xdc_Char)0x45,  /* [5843] */
    (xdc_Char)0x78,  /* [5844] */
    (xdc_Char)0x63,  /* [5845] */
    (xdc_Char)0x65,  /* [5846] */
    (xdc_Char)0x70,  /* [5847] */
    (xdc_Char)0x74,  /* [5848] */
    (xdc_Char)0x69,  /* [5849] */
    (xdc_Char)0x6f,  /* [5850] */
    (xdc_Char)0x6e,  /* [5851] */
    (xdc_Char)0x20,  /* [5852] */
    (xdc_Char)0x61,  /* [5853] */
    (xdc_Char)0x74,  /* [5854] */
    (xdc_Char)0x20,  /* [5855] */
    (xdc_Char)0x25,  /* [5856] */
    (xdc_Char)0x24,  /* [5857] */
    (xdc_Char)0x46,  /* [5858] */
    (xdc_Char)0x2e,  /* [5859] */
    (xdc_Char)0x0,  /* [5860] */
    (xdc_Char)0x45,  /* [5861] */
    (xdc_Char)0x52,  /* [5862] */
    (xdc_Char)0x52,  /* [5863] */
    (xdc_Char)0x4f,  /* [5864] */
    (xdc_Char)0x52,  /* [5865] */
    (xdc_Char)0x3a,  /* [5866] */
    (xdc_Char)0x20,  /* [5867] */
    (xdc_Char)0x44,  /* [5868] */
    (xdc_Char)0x69,  /* [5869] */
    (xdc_Char)0x76,  /* [5870] */
    (xdc_Char)0x69,  /* [5871] */
    (xdc_Char)0x73,  /* [5872] */
    (xdc_Char)0x69,  /* [5873] */
    (xdc_Char)0x6f,  /* [5874] */
    (xdc_Char)0x6e,  /* [5875] */
    (xdc_Char)0x20,  /* [5876] */
    (xdc_Char)0x62,  /* [5877] */
    (xdc_Char)0x79,  /* [5878] */
    (xdc_Char)0x20,  /* [5879] */
    (xdc_Char)0x7a,  /* [5880] */
    (xdc_Char)0x65,  /* [5881] */
    (xdc_Char)0x72,  /* [5882] */
    (xdc_Char)0x6f,  /* [5883] */
    (xdc_Char)0x20,  /* [5884] */
    (xdc_Char)0x61,  /* [5885] */
    (xdc_Char)0x74,  /* [5886] */
    (xdc_Char)0x20,  /* [5887] */
    (xdc_Char)0x25,  /* [5888] */
    (xdc_Char)0x24,  /* [5889] */
    (xdc_Char)0x46,  /* [5890] */
    (xdc_Char)0x2e,  /* [5891] */
    (xdc_Char)0x0,  /* [5892] */
    (xdc_Char)0x45,  /* [5893] */
    (xdc_Char)0x52,  /* [5894] */
    (xdc_Char)0x52,  /* [5895] */
    (xdc_Char)0x4f,  /* [5896] */
    (xdc_Char)0x52,  /* [5897] */
    (xdc_Char)0x3a,  /* [5898] */
    (xdc_Char)0x20,  /* [5899] */
    (xdc_Char)0x4f,  /* [5900] */
    (xdc_Char)0x76,  /* [5901] */
    (xdc_Char)0x65,  /* [5902] */
    (xdc_Char)0x72,  /* [5903] */
    (xdc_Char)0x66,  /* [5904] */
    (xdc_Char)0x6c,  /* [5905] */
    (xdc_Char)0x6f,  /* [5906] */
    (xdc_Char)0x77,  /* [5907] */
    (xdc_Char)0x20,  /* [5908] */
    (xdc_Char)0x65,  /* [5909] */
    (xdc_Char)0x78,  /* [5910] */
    (xdc_Char)0x63,  /* [5911] */
    (xdc_Char)0x65,  /* [5912] */
    (xdc_Char)0x70,  /* [5913] */
    (xdc_Char)0x74,  /* [5914] */
    (xdc_Char)0x69,  /* [5915] */
    (xdc_Char)0x6f,  /* [5916] */
    (xdc_Char)0x6e,  /* [5917] */
    (xdc_Char)0x20,  /* [5918] */
    (xdc_Char)0x61,  /* [5919] */
    (xdc_Char)0x74,  /* [5920] */
    (xdc_Char)0x20,  /* [5921] */
    (xdc_Char)0x25,  /* [5922] */
    (xdc_Char)0x24,  /* [5923] */
    (xdc_Char)0x46,  /* [5924] */
    (xdc_Char)0x2e,  /* [5925] */
    (xdc_Char)0x0,  /* [5926] */
    (xdc_Char)0x45,  /* [5927] */
    (xdc_Char)0x52,  /* [5928] */
    (xdc_Char)0x52,  /* [5929] */
    (xdc_Char)0x4f,  /* [5930] */
    (xdc_Char)0x52,  /* [5931] */
    (xdc_Char)0x3a,  /* [5932] */
    (xdc_Char)0x20,  /* [5933] */
    (xdc_Char)0x49,  /* [5934] */
    (xdc_Char)0x6e,  /* [5935] */
    (xdc_Char)0x64,  /* [5936] */
    (xdc_Char)0x65,  /* [5937] */
    (xdc_Char)0x78,  /* [5938] */
    (xdc_Char)0x20,  /* [5939] */
    (xdc_Char)0x6f,  /* [5940] */
    (xdc_Char)0x75,  /* [5941] */
    (xdc_Char)0x74,  /* [5942] */
    (xdc_Char)0x20,  /* [5943] */
    (xdc_Char)0x6f,  /* [5944] */
    (xdc_Char)0x66,  /* [5945] */
    (xdc_Char)0x20,  /* [5946] */
    (xdc_Char)0x72,  /* [5947] */
    (xdc_Char)0x61,  /* [5948] */
    (xdc_Char)0x6e,  /* [5949] */
    (xdc_Char)0x67,  /* [5950] */
    (xdc_Char)0x65,  /* [5951] */
    (xdc_Char)0x20,  /* [5952] */
    (xdc_Char)0x61,  /* [5953] */
    (xdc_Char)0x74,  /* [5954] */
    (xdc_Char)0x20,  /* [5955] */
    (xdc_Char)0x25,  /* [5956] */
    (xdc_Char)0x24,  /* [5957] */
    (xdc_Char)0x46,  /* [5958] */
    (xdc_Char)0x2e,  /* [5959] */
    (xdc_Char)0x20,  /* [5960] */
    (xdc_Char)0x5b,  /* [5961] */
    (xdc_Char)0x49,  /* [5962] */
    (xdc_Char)0x4e,  /* [5963] */
    (xdc_Char)0x44,  /* [5964] */
    (xdc_Char)0x45,  /* [5965] */
    (xdc_Char)0x58,  /* [5966] */
    (xdc_Char)0x5d,  /* [5967] */
    (xdc_Char)0x30,  /* [5968] */
    (xdc_Char)0x78,  /* [5969] */
    (xdc_Char)0x25,  /* [5970] */
    (xdc_Char)0x78,  /* [5971] */
    (xdc_Char)0x0,  /* [5972] */
    (xdc_Char)0x45,  /* [5973] */
    (xdc_Char)0x52,  /* [5974] */
    (xdc_Char)0x52,  /* [5975] */
    (xdc_Char)0x4f,  /* [5976] */
    (xdc_Char)0x52,  /* [5977] */
    (xdc_Char)0x3a,  /* [5978] */
    (xdc_Char)0x20,  /* [5979] */
    (xdc_Char)0x41,  /* [5980] */
    (xdc_Char)0x74,  /* [5981] */
    (xdc_Char)0x74,  /* [5982] */
    (xdc_Char)0x65,  /* [5983] */
    (xdc_Char)0x6d,  /* [5984] */
    (xdc_Char)0x70,  /* [5985] */
    (xdc_Char)0x74,  /* [5986] */
    (xdc_Char)0x20,  /* [5987] */
    (xdc_Char)0x74,  /* [5988] */
    (xdc_Char)0x6f,  /* [5989] */
    (xdc_Char)0x20,  /* [5990] */
    (xdc_Char)0x61,  /* [5991] */
    (xdc_Char)0x63,  /* [5992] */
    (xdc_Char)0x63,  /* [5993] */
    (xdc_Char)0x65,  /* [5994] */
    (xdc_Char)0x73,  /* [5995] */
    (xdc_Char)0x73,  /* [5996] */
    (xdc_Char)0x20,  /* [5997] */
    (xdc_Char)0x66,  /* [5998] */
    (xdc_Char)0x65,  /* [5999] */
    (xdc_Char)0x61,  /* [6000] */
    (xdc_Char)0x74,  /* [6001] */
    (xdc_Char)0x75,  /* [6002] */
    (xdc_Char)0x72,  /* [6003] */
    (xdc_Char)0x65,  /* [6004] */
    (xdc_Char)0x20,  /* [6005] */
    (xdc_Char)0x74,  /* [6006] */
    (xdc_Char)0x68,  /* [6007] */
    (xdc_Char)0x61,  /* [6008] */
    (xdc_Char)0x74,  /* [6009] */
    (xdc_Char)0x20,  /* [6010] */
    (xdc_Char)0x69,  /* [6011] */
    (xdc_Char)0x73,  /* [6012] */
    (xdc_Char)0x20,  /* [6013] */
    (xdc_Char)0x6e,  /* [6014] */
    (xdc_Char)0x6f,  /* [6015] */
    (xdc_Char)0x74,  /* [6016] */
    (xdc_Char)0x20,  /* [6017] */
    (xdc_Char)0x69,  /* [6018] */
    (xdc_Char)0x6d,  /* [6019] */
    (xdc_Char)0x70,  /* [6020] */
    (xdc_Char)0x6c,  /* [6021] */
    (xdc_Char)0x65,  /* [6022] */
    (xdc_Char)0x6d,  /* [6023] */
    (xdc_Char)0x65,  /* [6024] */
    (xdc_Char)0x6e,  /* [6025] */
    (xdc_Char)0x74,  /* [6026] */
    (xdc_Char)0x65,  /* [6027] */
    (xdc_Char)0x64,  /* [6028] */
    (xdc_Char)0x20,  /* [6029] */
    (xdc_Char)0x61,  /* [6030] */
    (xdc_Char)0x74,  /* [6031] */
    (xdc_Char)0x20,  /* [6032] */
    (xdc_Char)0x25,  /* [6033] */
    (xdc_Char)0x24,  /* [6034] */
    (xdc_Char)0x46,  /* [6035] */
    (xdc_Char)0x2e,  /* [6036] */
    (xdc_Char)0x0,  /* [6037] */
    (xdc_Char)0x45,  /* [6038] */
    (xdc_Char)0x52,  /* [6039] */
    (xdc_Char)0x52,  /* [6040] */
    (xdc_Char)0x4f,  /* [6041] */
    (xdc_Char)0x52,  /* [6042] */
    (xdc_Char)0x3a,  /* [6043] */
    (xdc_Char)0x20,  /* [6044] */
    (xdc_Char)0x53,  /* [6045] */
    (xdc_Char)0x74,  /* [6046] */
    (xdc_Char)0x61,  /* [6047] */
    (xdc_Char)0x63,  /* [6048] */
    (xdc_Char)0x6b,  /* [6049] */
    (xdc_Char)0x20,  /* [6050] */
    (xdc_Char)0x4f,  /* [6051] */
    (xdc_Char)0x76,  /* [6052] */
    (xdc_Char)0x65,  /* [6053] */
    (xdc_Char)0x72,  /* [6054] */
    (xdc_Char)0x66,  /* [6055] */
    (xdc_Char)0x6c,  /* [6056] */
    (xdc_Char)0x6f,  /* [6057] */
    (xdc_Char)0x77,  /* [6058] */
    (xdc_Char)0x20,  /* [6059] */
    (xdc_Char)0x64,  /* [6060] */
    (xdc_Char)0x65,  /* [6061] */
    (xdc_Char)0x74,  /* [6062] */
    (xdc_Char)0x65,  /* [6063] */
    (xdc_Char)0x63,  /* [6064] */
    (xdc_Char)0x74,  /* [6065] */
    (xdc_Char)0x65,  /* [6066] */
    (xdc_Char)0x64,  /* [6067] */
    (xdc_Char)0x20,  /* [6068] */
    (xdc_Char)0x61,  /* [6069] */
    (xdc_Char)0x74,  /* [6070] */
    (xdc_Char)0x20,  /* [6071] */
    (xdc_Char)0x25,  /* [6072] */
    (xdc_Char)0x24,  /* [6073] */
    (xdc_Char)0x46,  /* [6074] */
    (xdc_Char)0x2e,  /* [6075] */
    (xdc_Char)0x0,  /* [6076] */
    (xdc_Char)0x45,  /* [6077] */
    (xdc_Char)0x52,  /* [6078] */
    (xdc_Char)0x52,  /* [6079] */
    (xdc_Char)0x4f,  /* [6080] */
    (xdc_Char)0x52,  /* [6081] */
    (xdc_Char)0x3a,  /* [6082] */
    (xdc_Char)0x20,  /* [6083] */
    (xdc_Char)0x49,  /* [6084] */
    (xdc_Char)0x6c,  /* [6085] */
    (xdc_Char)0x6c,  /* [6086] */
    (xdc_Char)0x65,  /* [6087] */
    (xdc_Char)0x67,  /* [6088] */
    (xdc_Char)0x61,  /* [6089] */
    (xdc_Char)0x6c,  /* [6090] */
    (xdc_Char)0x20,  /* [6091] */
    (xdc_Char)0x49,  /* [6092] */
    (xdc_Char)0x6e,  /* [6093] */
    (xdc_Char)0x73,  /* [6094] */
    (xdc_Char)0x74,  /* [6095] */
    (xdc_Char)0x72,  /* [6096] */
    (xdc_Char)0x75,  /* [6097] */
    (xdc_Char)0x63,  /* [6098] */
    (xdc_Char)0x74,  /* [6099] */
    (xdc_Char)0x69,  /* [6100] */
    (xdc_Char)0x6f,  /* [6101] */
    (xdc_Char)0x6e,  /* [6102] */
    (xdc_Char)0x20,  /* [6103] */
    (xdc_Char)0x65,  /* [6104] */
    (xdc_Char)0x78,  /* [6105] */
    (xdc_Char)0x65,  /* [6106] */
    (xdc_Char)0x63,  /* [6107] */
    (xdc_Char)0x75,  /* [6108] */
    (xdc_Char)0x74,  /* [6109] */
    (xdc_Char)0x65,  /* [6110] */
    (xdc_Char)0x64,  /* [6111] */
    (xdc_Char)0x20,  /* [6112] */
    (xdc_Char)0x61,  /* [6113] */
    (xdc_Char)0x74,  /* [6114] */
    (xdc_Char)0x20,  /* [6115] */
    (xdc_Char)0x25,  /* [6116] */
    (xdc_Char)0x24,  /* [6117] */
    (xdc_Char)0x46,  /* [6118] */
    (xdc_Char)0x2e,  /* [6119] */
    (xdc_Char)0x0,  /* [6120] */
    (xdc_Char)0x45,  /* [6121] */
    (xdc_Char)0x52,  /* [6122] */
    (xdc_Char)0x52,  /* [6123] */
    (xdc_Char)0x4f,  /* [6124] */
    (xdc_Char)0x52,  /* [6125] */
    (xdc_Char)0x3a,  /* [6126] */
    (xdc_Char)0x20,  /* [6127] */
    (xdc_Char)0x45,  /* [6128] */
    (xdc_Char)0x6e,  /* [6129] */
    (xdc_Char)0x74,  /* [6130] */
    (xdc_Char)0x72,  /* [6131] */
    (xdc_Char)0x79,  /* [6132] */
    (xdc_Char)0x20,  /* [6133] */
    (xdc_Char)0x50,  /* [6134] */
    (xdc_Char)0x6f,  /* [6135] */
    (xdc_Char)0x69,  /* [6136] */
    (xdc_Char)0x6e,  /* [6137] */
    (xdc_Char)0x74,  /* [6138] */
    (xdc_Char)0x20,  /* [6139] */
    (xdc_Char)0x4e,  /* [6140] */
    (xdc_Char)0x6f,  /* [6141] */
    (xdc_Char)0x74,  /* [6142] */
    (xdc_Char)0x20,  /* [6143] */
    (xdc_Char)0x46,  /* [6144] */
    (xdc_Char)0x6f,  /* [6145] */
    (xdc_Char)0x75,  /* [6146] */
    (xdc_Char)0x6e,  /* [6147] */
    (xdc_Char)0x64,  /* [6148] */
    (xdc_Char)0x20,  /* [6149] */
    (xdc_Char)0x61,  /* [6150] */
    (xdc_Char)0x74,  /* [6151] */
    (xdc_Char)0x20,  /* [6152] */
    (xdc_Char)0x25,  /* [6153] */
    (xdc_Char)0x24,  /* [6154] */
    (xdc_Char)0x46,  /* [6155] */
    (xdc_Char)0x2e,  /* [6156] */
    (xdc_Char)0x0,  /* [6157] */
    (xdc_Char)0x45,  /* [6158] */
    (xdc_Char)0x52,  /* [6159] */
    (xdc_Char)0x52,  /* [6160] */
    (xdc_Char)0x4f,  /* [6161] */
    (xdc_Char)0x52,  /* [6162] */
    (xdc_Char)0x3a,  /* [6163] */
    (xdc_Char)0x20,  /* [6164] */
    (xdc_Char)0x4d,  /* [6165] */
    (xdc_Char)0x6f,  /* [6166] */
    (xdc_Char)0x64,  /* [6167] */
    (xdc_Char)0x75,  /* [6168] */
    (xdc_Char)0x6c,  /* [6169] */
    (xdc_Char)0x65,  /* [6170] */
    (xdc_Char)0x20,  /* [6171] */
    (xdc_Char)0x6e,  /* [6172] */
    (xdc_Char)0x6f,  /* [6173] */
    (xdc_Char)0x74,  /* [6174] */
    (xdc_Char)0x20,  /* [6175] */
    (xdc_Char)0x66,  /* [6176] */
    (xdc_Char)0x6f,  /* [6177] */
    (xdc_Char)0x75,  /* [6178] */
    (xdc_Char)0x6e,  /* [6179] */
    (xdc_Char)0x64,  /* [6180] */
    (xdc_Char)0x20,  /* [6181] */
    (xdc_Char)0x61,  /* [6182] */
    (xdc_Char)0x74,  /* [6183] */
    (xdc_Char)0x20,  /* [6184] */
    (xdc_Char)0x25,  /* [6185] */
    (xdc_Char)0x24,  /* [6186] */
    (xdc_Char)0x46,  /* [6187] */
    (xdc_Char)0x2e,  /* [6188] */
    (xdc_Char)0x20,  /* [6189] */
    (xdc_Char)0x5b,  /* [6190] */
    (xdc_Char)0x4d,  /* [6191] */
    (xdc_Char)0x4f,  /* [6192] */
    (xdc_Char)0x44,  /* [6193] */
    (xdc_Char)0x55,  /* [6194] */
    (xdc_Char)0x4c,  /* [6195] */
    (xdc_Char)0x45,  /* [6196] */
    (xdc_Char)0x5f,  /* [6197] */
    (xdc_Char)0x49,  /* [6198] */
    (xdc_Char)0x44,  /* [6199] */
    (xdc_Char)0x5d,  /* [6200] */
    (xdc_Char)0x30,  /* [6201] */
    (xdc_Char)0x78,  /* [6202] */
    (xdc_Char)0x25,  /* [6203] */
    (xdc_Char)0x78,  /* [6204] */
    (xdc_Char)0x2e,  /* [6205] */
    (xdc_Char)0x0,  /* [6206] */
    (xdc_Char)0x45,  /* [6207] */
    (xdc_Char)0x52,  /* [6208] */
    (xdc_Char)0x52,  /* [6209] */
    (xdc_Char)0x4f,  /* [6210] */
    (xdc_Char)0x52,  /* [6211] */
    (xdc_Char)0x3a,  /* [6212] */
    (xdc_Char)0x20,  /* [6213] */
    (xdc_Char)0x46,  /* [6214] */
    (xdc_Char)0x6c,  /* [6215] */
    (xdc_Char)0x6f,  /* [6216] */
    (xdc_Char)0x61,  /* [6217] */
    (xdc_Char)0x74,  /* [6218] */
    (xdc_Char)0x69,  /* [6219] */
    (xdc_Char)0x6e,  /* [6220] */
    (xdc_Char)0x67,  /* [6221] */
    (xdc_Char)0x20,  /* [6222] */
    (xdc_Char)0x50,  /* [6223] */
    (xdc_Char)0x6f,  /* [6224] */
    (xdc_Char)0x69,  /* [6225] */
    (xdc_Char)0x6e,  /* [6226] */
    (xdc_Char)0x74,  /* [6227] */
    (xdc_Char)0x20,  /* [6228] */
    (xdc_Char)0x45,  /* [6229] */
    (xdc_Char)0x72,  /* [6230] */
    (xdc_Char)0x72,  /* [6231] */
    (xdc_Char)0x6f,  /* [6232] */
    (xdc_Char)0x72,  /* [6233] */
    (xdc_Char)0x20,  /* [6234] */
    (xdc_Char)0x61,  /* [6235] */
    (xdc_Char)0x74,  /* [6236] */
    (xdc_Char)0x20,  /* [6237] */
    (xdc_Char)0x25,  /* [6238] */
    (xdc_Char)0x24,  /* [6239] */
    (xdc_Char)0x46,  /* [6240] */
    (xdc_Char)0x2e,  /* [6241] */
    (xdc_Char)0x0,  /* [6242] */
    (xdc_Char)0x45,  /* [6243] */
    (xdc_Char)0x52,  /* [6244] */
    (xdc_Char)0x52,  /* [6245] */
    (xdc_Char)0x4f,  /* [6246] */
    (xdc_Char)0x52,  /* [6247] */
    (xdc_Char)0x3a,  /* [6248] */
    (xdc_Char)0x20,  /* [6249] */
    (xdc_Char)0x49,  /* [6250] */
    (xdc_Char)0x6e,  /* [6251] */
    (xdc_Char)0x76,  /* [6252] */
    (xdc_Char)0x61,  /* [6253] */
    (xdc_Char)0x6c,  /* [6254] */
    (xdc_Char)0x69,  /* [6255] */
    (xdc_Char)0x64,  /* [6256] */
    (xdc_Char)0x20,  /* [6257] */
    (xdc_Char)0x50,  /* [6258] */
    (xdc_Char)0x61,  /* [6259] */
    (xdc_Char)0x72,  /* [6260] */
    (xdc_Char)0x61,  /* [6261] */
    (xdc_Char)0x6d,  /* [6262] */
    (xdc_Char)0x65,  /* [6263] */
    (xdc_Char)0x74,  /* [6264] */
    (xdc_Char)0x65,  /* [6265] */
    (xdc_Char)0x72,  /* [6266] */
    (xdc_Char)0x20,  /* [6267] */
    (xdc_Char)0x61,  /* [6268] */
    (xdc_Char)0x74,  /* [6269] */
    (xdc_Char)0x20,  /* [6270] */
    (xdc_Char)0x25,  /* [6271] */
    (xdc_Char)0x24,  /* [6272] */
    (xdc_Char)0x46,  /* [6273] */
    (xdc_Char)0x2e,  /* [6274] */
    (xdc_Char)0x20,  /* [6275] */
    (xdc_Char)0x5b,  /* [6276] */
    (xdc_Char)0x50,  /* [6277] */
    (xdc_Char)0x61,  /* [6278] */
    (xdc_Char)0x72,  /* [6279] */
    (xdc_Char)0x61,  /* [6280] */
    (xdc_Char)0x6d,  /* [6281] */
    (xdc_Char)0x4e,  /* [6282] */
    (xdc_Char)0x75,  /* [6283] */
    (xdc_Char)0x6d,  /* [6284] */
    (xdc_Char)0x5d,  /* [6285] */
    (xdc_Char)0x25,  /* [6286] */
    (xdc_Char)0x64,  /* [6287] */
    (xdc_Char)0x20,  /* [6288] */
    (xdc_Char)0x5b,  /* [6289] */
    (xdc_Char)0x50,  /* [6290] */
    (xdc_Char)0x61,  /* [6291] */
    (xdc_Char)0x72,  /* [6292] */
    (xdc_Char)0x61,  /* [6293] */
    (xdc_Char)0x6d,  /* [6294] */
    (xdc_Char)0x56,  /* [6295] */
    (xdc_Char)0x61,  /* [6296] */
    (xdc_Char)0x6c,  /* [6297] */
    (xdc_Char)0x75,  /* [6298] */
    (xdc_Char)0x65,  /* [6299] */
    (xdc_Char)0x5d,  /* [6300] */
    (xdc_Char)0x30,  /* [6301] */
    (xdc_Char)0x78,  /* [6302] */
    (xdc_Char)0x25,  /* [6303] */
    (xdc_Char)0x78,  /* [6304] */
    (xdc_Char)0x0,  /* [6305] */
    (xdc_Char)0x57,  /* [6306] */
    (xdc_Char)0x41,  /* [6307] */
    (xdc_Char)0x52,  /* [6308] */
    (xdc_Char)0x4e,  /* [6309] */
    (xdc_Char)0x49,  /* [6310] */
    (xdc_Char)0x4e,  /* [6311] */
    (xdc_Char)0x47,  /* [6312] */
    (xdc_Char)0x3a,  /* [6313] */
    (xdc_Char)0x20,  /* [6314] */
    (xdc_Char)0x45,  /* [6315] */
    (xdc_Char)0x76,  /* [6316] */
    (xdc_Char)0x65,  /* [6317] */
    (xdc_Char)0x6e,  /* [6318] */
    (xdc_Char)0x74,  /* [6319] */
    (xdc_Char)0x43,  /* [6320] */
    (xdc_Char)0x6f,  /* [6321] */
    (xdc_Char)0x64,  /* [6322] */
    (xdc_Char)0x65,  /* [6323] */
    (xdc_Char)0x3a,  /* [6324] */
    (xdc_Char)0x30,  /* [6325] */
    (xdc_Char)0x78,  /* [6326] */
    (xdc_Char)0x25,  /* [6327] */
    (xdc_Char)0x78,  /* [6328] */
    (xdc_Char)0x0,  /* [6329] */
    (xdc_Char)0x57,  /* [6330] */
    (xdc_Char)0x41,  /* [6331] */
    (xdc_Char)0x52,  /* [6332] */
    (xdc_Char)0x4e,  /* [6333] */
    (xdc_Char)0x49,  /* [6334] */
    (xdc_Char)0x4e,  /* [6335] */
    (xdc_Char)0x47,  /* [6336] */
    (xdc_Char)0x3a,  /* [6337] */
    (xdc_Char)0x20,  /* [6338] */
    (xdc_Char)0x45,  /* [6339] */
    (xdc_Char)0x76,  /* [6340] */
    (xdc_Char)0x65,  /* [6341] */
    (xdc_Char)0x6e,  /* [6342] */
    (xdc_Char)0x74,  /* [6343] */
    (xdc_Char)0x43,  /* [6344] */
    (xdc_Char)0x6f,  /* [6345] */
    (xdc_Char)0x64,  /* [6346] */
    (xdc_Char)0x65,  /* [6347] */
    (xdc_Char)0x3a,  /* [6348] */
    (xdc_Char)0x30,  /* [6349] */
    (xdc_Char)0x78,  /* [6350] */
    (xdc_Char)0x25,  /* [6351] */
    (xdc_Char)0x78,  /* [6352] */
    (xdc_Char)0x2e,  /* [6353] */
    (xdc_Char)0x20,  /* [6354] */
    (xdc_Char)0x25,  /* [6355] */
    (xdc_Char)0x24,  /* [6356] */
    (xdc_Char)0x53,  /* [6357] */
    (xdc_Char)0x0,  /* [6358] */
    (xdc_Char)0x49,  /* [6359] */
    (xdc_Char)0x4e,  /* [6360] */
    (xdc_Char)0x46,  /* [6361] */
    (xdc_Char)0x4f,  /* [6362] */
    (xdc_Char)0x3a,  /* [6363] */
    (xdc_Char)0x20,  /* [6364] */
    (xdc_Char)0x45,  /* [6365] */
    (xdc_Char)0x76,  /* [6366] */
    (xdc_Char)0x65,  /* [6367] */
    (xdc_Char)0x6e,  /* [6368] */
    (xdc_Char)0x74,  /* [6369] */
    (xdc_Char)0x43,  /* [6370] */
    (xdc_Char)0x6f,  /* [6371] */
    (xdc_Char)0x64,  /* [6372] */
    (xdc_Char)0x65,  /* [6373] */
    (xdc_Char)0x3a,  /* [6374] */
    (xdc_Char)0x20,  /* [6375] */
    (xdc_Char)0x30,  /* [6376] */
    (xdc_Char)0x78,  /* [6377] */
    (xdc_Char)0x25,  /* [6378] */
    (xdc_Char)0x78,  /* [6379] */
    (xdc_Char)0x0,  /* [6380] */
    (xdc_Char)0x49,  /* [6381] */
    (xdc_Char)0x4e,  /* [6382] */
    (xdc_Char)0x46,  /* [6383] */
    (xdc_Char)0x4f,  /* [6384] */
    (xdc_Char)0x3a,  /* [6385] */
    (xdc_Char)0x20,  /* [6386] */
    (xdc_Char)0x45,  /* [6387] */
    (xdc_Char)0x76,  /* [6388] */
    (xdc_Char)0x65,  /* [6389] */
    (xdc_Char)0x6e,  /* [6390] */
    (xdc_Char)0x74,  /* [6391] */
    (xdc_Char)0x43,  /* [6392] */
    (xdc_Char)0x6f,  /* [6393] */
    (xdc_Char)0x64,  /* [6394] */
    (xdc_Char)0x65,  /* [6395] */
    (xdc_Char)0x3a,  /* [6396] */
    (xdc_Char)0x30,  /* [6397] */
    (xdc_Char)0x78,  /* [6398] */
    (xdc_Char)0x25,  /* [6399] */
    (xdc_Char)0x78,  /* [6400] */
    (xdc_Char)0x2e,  /* [6401] */
    (xdc_Char)0x20,  /* [6402] */
    (xdc_Char)0x20,  /* [6403] */
    (xdc_Char)0x25,  /* [6404] */
    (xdc_Char)0x24,  /* [6405] */
    (xdc_Char)0x53,  /* [6406] */
    (xdc_Char)0x0,  /* [6407] */
    (xdc_Char)0x44,  /* [6408] */
    (xdc_Char)0x45,  /* [6409] */
    (xdc_Char)0x54,  /* [6410] */
    (xdc_Char)0x41,  /* [6411] */
    (xdc_Char)0x49,  /* [6412] */
    (xdc_Char)0x4c,  /* [6413] */
    (xdc_Char)0x3a,  /* [6414] */
    (xdc_Char)0x20,  /* [6415] */
    (xdc_Char)0x45,  /* [6416] */
    (xdc_Char)0x76,  /* [6417] */
    (xdc_Char)0x65,  /* [6418] */
    (xdc_Char)0x6e,  /* [6419] */
    (xdc_Char)0x74,  /* [6420] */
    (xdc_Char)0x43,  /* [6421] */
    (xdc_Char)0x6f,  /* [6422] */
    (xdc_Char)0x64,  /* [6423] */
    (xdc_Char)0x65,  /* [6424] */
    (xdc_Char)0x3a,  /* [6425] */
    (xdc_Char)0x30,  /* [6426] */
    (xdc_Char)0x78,  /* [6427] */
    (xdc_Char)0x25,  /* [6428] */
    (xdc_Char)0x78,  /* [6429] */
    (xdc_Char)0x0,  /* [6430] */
    (xdc_Char)0x44,  /* [6431] */
    (xdc_Char)0x45,  /* [6432] */
    (xdc_Char)0x54,  /* [6433] */
    (xdc_Char)0x41,  /* [6434] */
    (xdc_Char)0x49,  /* [6435] */
    (xdc_Char)0x4c,  /* [6436] */
    (xdc_Char)0x3a,  /* [6437] */
    (xdc_Char)0x20,  /* [6438] */
    (xdc_Char)0x45,  /* [6439] */
    (xdc_Char)0x76,  /* [6440] */
    (xdc_Char)0x65,  /* [6441] */
    (xdc_Char)0x6e,  /* [6442] */
    (xdc_Char)0x74,  /* [6443] */
    (xdc_Char)0x43,  /* [6444] */
    (xdc_Char)0x6f,  /* [6445] */
    (xdc_Char)0x64,  /* [6446] */
    (xdc_Char)0x65,  /* [6447] */
    (xdc_Char)0x3a,  /* [6448] */
    (xdc_Char)0x30,  /* [6449] */
    (xdc_Char)0x78,  /* [6450] */
    (xdc_Char)0x25,  /* [6451] */
    (xdc_Char)0x78,  /* [6452] */
    (xdc_Char)0x2e,  /* [6453] */
    (xdc_Char)0x20,  /* [6454] */
    (xdc_Char)0x20,  /* [6455] */
    (xdc_Char)0x25,  /* [6456] */
    (xdc_Char)0x24,  /* [6457] */
    (xdc_Char)0x53,  /* [6458] */
    (xdc_Char)0x0,  /* [6459] */
    (xdc_Char)0x56,  /* [6460] */
    (xdc_Char)0x41,  /* [6461] */
    (xdc_Char)0x4c,  /* [6462] */
    (xdc_Char)0x55,  /* [6463] */
    (xdc_Char)0x45,  /* [6464] */
    (xdc_Char)0x3d,  /* [6465] */
    (xdc_Char)0x25,  /* [6466] */
    (xdc_Char)0x64,  /* [6467] */
    (xdc_Char)0x20,  /* [6468] */
    (xdc_Char)0x28,  /* [6469] */
    (xdc_Char)0x41,  /* [6470] */
    (xdc_Char)0x75,  /* [6471] */
    (xdc_Char)0x78,  /* [6472] */
    (xdc_Char)0x44,  /* [6473] */
    (xdc_Char)0x61,  /* [6474] */
    (xdc_Char)0x74,  /* [6475] */
    (xdc_Char)0x61,  /* [6476] */
    (xdc_Char)0x3d,  /* [6477] */
    (xdc_Char)0x25,  /* [6478] */
    (xdc_Char)0x64,  /* [6479] */
    (xdc_Char)0x2c,  /* [6480] */
    (xdc_Char)0x20,  /* [6481] */
    (xdc_Char)0x25,  /* [6482] */
    (xdc_Char)0x64,  /* [6483] */
    (xdc_Char)0x29,  /* [6484] */
    (xdc_Char)0x20,  /* [6485] */
    (xdc_Char)0x4b,  /* [6486] */
    (xdc_Char)0x65,  /* [6487] */
    (xdc_Char)0x79,  /* [6488] */
    (xdc_Char)0x3a,  /* [6489] */
    (xdc_Char)0x25,  /* [6490] */
    (xdc_Char)0x24,  /* [6491] */
    (xdc_Char)0x53,  /* [6492] */
    (xdc_Char)0x0,  /* [6493] */
    (xdc_Char)0x4c,  /* [6494] */
    (xdc_Char)0x57,  /* [6495] */
    (xdc_Char)0x5f,  /* [6496] */
    (xdc_Char)0x64,  /* [6497] */
    (xdc_Char)0x65,  /* [6498] */
    (xdc_Char)0x6c,  /* [6499] */
    (xdc_Char)0x61,  /* [6500] */
    (xdc_Char)0x79,  /* [6501] */
    (xdc_Char)0x65,  /* [6502] */
    (xdc_Char)0x64,  /* [6503] */
    (xdc_Char)0x3a,  /* [6504] */
    (xdc_Char)0x20,  /* [6505] */
    (xdc_Char)0x64,  /* [6506] */
    (xdc_Char)0x65,  /* [6507] */
    (xdc_Char)0x6c,  /* [6508] */
    (xdc_Char)0x61,  /* [6509] */
    (xdc_Char)0x79,  /* [6510] */
    (xdc_Char)0x3a,  /* [6511] */
    (xdc_Char)0x20,  /* [6512] */
    (xdc_Char)0x25,  /* [6513] */
    (xdc_Char)0x64,  /* [6514] */
    (xdc_Char)0x0,  /* [6515] */
    (xdc_Char)0x4c,  /* [6516] */
    (xdc_Char)0x4d,  /* [6517] */
    (xdc_Char)0x5f,  /* [6518] */
    (xdc_Char)0x74,  /* [6519] */
    (xdc_Char)0x69,  /* [6520] */
    (xdc_Char)0x63,  /* [6521] */
    (xdc_Char)0x6b,  /* [6522] */
    (xdc_Char)0x3a,  /* [6523] */
    (xdc_Char)0x20,  /* [6524] */
    (xdc_Char)0x74,  /* [6525] */
    (xdc_Char)0x69,  /* [6526] */
    (xdc_Char)0x63,  /* [6527] */
    (xdc_Char)0x6b,  /* [6528] */
    (xdc_Char)0x3a,  /* [6529] */
    (xdc_Char)0x20,  /* [6530] */
    (xdc_Char)0x25,  /* [6531] */
    (xdc_Char)0x64,  /* [6532] */
    (xdc_Char)0x0,  /* [6533] */
    (xdc_Char)0x4c,  /* [6534] */
    (xdc_Char)0x4d,  /* [6535] */
    (xdc_Char)0x5f,  /* [6536] */
    (xdc_Char)0x62,  /* [6537] */
    (xdc_Char)0x65,  /* [6538] */
    (xdc_Char)0x67,  /* [6539] */
    (xdc_Char)0x69,  /* [6540] */
    (xdc_Char)0x6e,  /* [6541] */
    (xdc_Char)0x3a,  /* [6542] */
    (xdc_Char)0x20,  /* [6543] */
    (xdc_Char)0x63,  /* [6544] */
    (xdc_Char)0x6c,  /* [6545] */
    (xdc_Char)0x6b,  /* [6546] */
    (xdc_Char)0x3a,  /* [6547] */
    (xdc_Char)0x20,  /* [6548] */
    (xdc_Char)0x30,  /* [6549] */
    (xdc_Char)0x78,  /* [6550] */
    (xdc_Char)0x25,  /* [6551] */
    (xdc_Char)0x78,  /* [6552] */
    (xdc_Char)0x2c,  /* [6553] */
    (xdc_Char)0x20,  /* [6554] */
    (xdc_Char)0x66,  /* [6555] */
    (xdc_Char)0x75,  /* [6556] */
    (xdc_Char)0x6e,  /* [6557] */
    (xdc_Char)0x63,  /* [6558] */
    (xdc_Char)0x3a,  /* [6559] */
    (xdc_Char)0x20,  /* [6560] */
    (xdc_Char)0x30,  /* [6561] */
    (xdc_Char)0x78,  /* [6562] */
    (xdc_Char)0x25,  /* [6563] */
    (xdc_Char)0x78,  /* [6564] */
    (xdc_Char)0x0,  /* [6565] */
    (xdc_Char)0x4c,  /* [6566] */
    (xdc_Char)0x4d,  /* [6567] */
    (xdc_Char)0x5f,  /* [6568] */
    (xdc_Char)0x70,  /* [6569] */
    (xdc_Char)0x6f,  /* [6570] */
    (xdc_Char)0x73,  /* [6571] */
    (xdc_Char)0x74,  /* [6572] */
    (xdc_Char)0x3a,  /* [6573] */
    (xdc_Char)0x20,  /* [6574] */
    (xdc_Char)0x65,  /* [6575] */
    (xdc_Char)0x76,  /* [6576] */
    (xdc_Char)0x65,  /* [6577] */
    (xdc_Char)0x6e,  /* [6578] */
    (xdc_Char)0x74,  /* [6579] */
    (xdc_Char)0x3a,  /* [6580] */
    (xdc_Char)0x20,  /* [6581] */
    (xdc_Char)0x30,  /* [6582] */
    (xdc_Char)0x78,  /* [6583] */
    (xdc_Char)0x25,  /* [6584] */
    (xdc_Char)0x78,  /* [6585] */
    (xdc_Char)0x2c,  /* [6586] */
    (xdc_Char)0x20,  /* [6587] */
    (xdc_Char)0x63,  /* [6588] */
    (xdc_Char)0x75,  /* [6589] */
    (xdc_Char)0x72,  /* [6590] */
    (xdc_Char)0x72,  /* [6591] */
    (xdc_Char)0x45,  /* [6592] */
    (xdc_Char)0x76,  /* [6593] */
    (xdc_Char)0x65,  /* [6594] */
    (xdc_Char)0x6e,  /* [6595] */
    (xdc_Char)0x74,  /* [6596] */
    (xdc_Char)0x73,  /* [6597] */
    (xdc_Char)0x3a,  /* [6598] */
    (xdc_Char)0x20,  /* [6599] */
    (xdc_Char)0x30,  /* [6600] */
    (xdc_Char)0x78,  /* [6601] */
    (xdc_Char)0x25,  /* [6602] */
    (xdc_Char)0x78,  /* [6603] */
    (xdc_Char)0x2c,  /* [6604] */
    (xdc_Char)0x20,  /* [6605] */
    (xdc_Char)0x65,  /* [6606] */
    (xdc_Char)0x76,  /* [6607] */
    (xdc_Char)0x65,  /* [6608] */
    (xdc_Char)0x6e,  /* [6609] */
    (xdc_Char)0x74,  /* [6610] */
    (xdc_Char)0x49,  /* [6611] */
    (xdc_Char)0x64,  /* [6612] */
    (xdc_Char)0x3a,  /* [6613] */
    (xdc_Char)0x20,  /* [6614] */
    (xdc_Char)0x30,  /* [6615] */
    (xdc_Char)0x78,  /* [6616] */
    (xdc_Char)0x25,  /* [6617] */
    (xdc_Char)0x78,  /* [6618] */
    (xdc_Char)0x0,  /* [6619] */
    (xdc_Char)0x4c,  /* [6620] */
    (xdc_Char)0x4d,  /* [6621] */
    (xdc_Char)0x5f,  /* [6622] */
    (xdc_Char)0x70,  /* [6623] */
    (xdc_Char)0x65,  /* [6624] */
    (xdc_Char)0x6e,  /* [6625] */
    (xdc_Char)0x64,  /* [6626] */
    (xdc_Char)0x3a,  /* [6627] */
    (xdc_Char)0x20,  /* [6628] */
    (xdc_Char)0x65,  /* [6629] */
    (xdc_Char)0x76,  /* [6630] */
    (xdc_Char)0x65,  /* [6631] */
    (xdc_Char)0x6e,  /* [6632] */
    (xdc_Char)0x74,  /* [6633] */
    (xdc_Char)0x3a,  /* [6634] */
    (xdc_Char)0x20,  /* [6635] */
    (xdc_Char)0x30,  /* [6636] */
    (xdc_Char)0x78,  /* [6637] */
    (xdc_Char)0x25,  /* [6638] */
    (xdc_Char)0x78,  /* [6639] */
    (xdc_Char)0x2c,  /* [6640] */
    (xdc_Char)0x20,  /* [6641] */
    (xdc_Char)0x63,  /* [6642] */
    (xdc_Char)0x75,  /* [6643] */
    (xdc_Char)0x72,  /* [6644] */
    (xdc_Char)0x72,  /* [6645] */
    (xdc_Char)0x45,  /* [6646] */
    (xdc_Char)0x76,  /* [6647] */
    (xdc_Char)0x65,  /* [6648] */
    (xdc_Char)0x6e,  /* [6649] */
    (xdc_Char)0x74,  /* [6650] */
    (xdc_Char)0x73,  /* [6651] */
    (xdc_Char)0x3a,  /* [6652] */
    (xdc_Char)0x20,  /* [6653] */
    (xdc_Char)0x30,  /* [6654] */
    (xdc_Char)0x78,  /* [6655] */
    (xdc_Char)0x25,  /* [6656] */
    (xdc_Char)0x78,  /* [6657] */
    (xdc_Char)0x2c,  /* [6658] */
    (xdc_Char)0x20,  /* [6659] */
    (xdc_Char)0x61,  /* [6660] */
    (xdc_Char)0x6e,  /* [6661] */
    (xdc_Char)0x64,  /* [6662] */
    (xdc_Char)0x4d,  /* [6663] */
    (xdc_Char)0x61,  /* [6664] */
    (xdc_Char)0x73,  /* [6665] */
    (xdc_Char)0x6b,  /* [6666] */
    (xdc_Char)0x3a,  /* [6667] */
    (xdc_Char)0x20,  /* [6668] */
    (xdc_Char)0x30,  /* [6669] */
    (xdc_Char)0x78,  /* [6670] */
    (xdc_Char)0x25,  /* [6671] */
    (xdc_Char)0x78,  /* [6672] */
    (xdc_Char)0x2c,  /* [6673] */
    (xdc_Char)0x20,  /* [6674] */
    (xdc_Char)0x6f,  /* [6675] */
    (xdc_Char)0x72,  /* [6676] */
    (xdc_Char)0x4d,  /* [6677] */
    (xdc_Char)0x61,  /* [6678] */
    (xdc_Char)0x73,  /* [6679] */
    (xdc_Char)0x6b,  /* [6680] */
    (xdc_Char)0x3a,  /* [6681] */
    (xdc_Char)0x20,  /* [6682] */
    (xdc_Char)0x30,  /* [6683] */
    (xdc_Char)0x78,  /* [6684] */
    (xdc_Char)0x25,  /* [6685] */
    (xdc_Char)0x78,  /* [6686] */
    (xdc_Char)0x2c,  /* [6687] */
    (xdc_Char)0x20,  /* [6688] */
    (xdc_Char)0x74,  /* [6689] */
    (xdc_Char)0x69,  /* [6690] */
    (xdc_Char)0x6d,  /* [6691] */
    (xdc_Char)0x65,  /* [6692] */
    (xdc_Char)0x6f,  /* [6693] */
    (xdc_Char)0x75,  /* [6694] */
    (xdc_Char)0x74,  /* [6695] */
    (xdc_Char)0x3a,  /* [6696] */
    (xdc_Char)0x20,  /* [6697] */
    (xdc_Char)0x25,  /* [6698] */
    (xdc_Char)0x64,  /* [6699] */
    (xdc_Char)0x0,  /* [6700] */
    (xdc_Char)0x4c,  /* [6701] */
    (xdc_Char)0x4d,  /* [6702] */
    (xdc_Char)0x5f,  /* [6703] */
    (xdc_Char)0x70,  /* [6704] */
    (xdc_Char)0x6f,  /* [6705] */
    (xdc_Char)0x73,  /* [6706] */
    (xdc_Char)0x74,  /* [6707] */
    (xdc_Char)0x3a,  /* [6708] */
    (xdc_Char)0x20,  /* [6709] */
    (xdc_Char)0x73,  /* [6710] */
    (xdc_Char)0x65,  /* [6711] */
    (xdc_Char)0x6d,  /* [6712] */
    (xdc_Char)0x3a,  /* [6713] */
    (xdc_Char)0x20,  /* [6714] */
    (xdc_Char)0x30,  /* [6715] */
    (xdc_Char)0x78,  /* [6716] */
    (xdc_Char)0x25,  /* [6717] */
    (xdc_Char)0x78,  /* [6718] */
    (xdc_Char)0x2c,  /* [6719] */
    (xdc_Char)0x20,  /* [6720] */
    (xdc_Char)0x63,  /* [6721] */
    (xdc_Char)0x6f,  /* [6722] */
    (xdc_Char)0x75,  /* [6723] */
    (xdc_Char)0x6e,  /* [6724] */
    (xdc_Char)0x74,  /* [6725] */
    (xdc_Char)0x3a,  /* [6726] */
    (xdc_Char)0x20,  /* [6727] */
    (xdc_Char)0x25,  /* [6728] */
    (xdc_Char)0x64,  /* [6729] */
    (xdc_Char)0x0,  /* [6730] */
    (xdc_Char)0x4c,  /* [6731] */
    (xdc_Char)0x4d,  /* [6732] */
    (xdc_Char)0x5f,  /* [6733] */
    (xdc_Char)0x70,  /* [6734] */
    (xdc_Char)0x65,  /* [6735] */
    (xdc_Char)0x6e,  /* [6736] */
    (xdc_Char)0x64,  /* [6737] */
    (xdc_Char)0x3a,  /* [6738] */
    (xdc_Char)0x20,  /* [6739] */
    (xdc_Char)0x73,  /* [6740] */
    (xdc_Char)0x65,  /* [6741] */
    (xdc_Char)0x6d,  /* [6742] */
    (xdc_Char)0x3a,  /* [6743] */
    (xdc_Char)0x20,  /* [6744] */
    (xdc_Char)0x30,  /* [6745] */
    (xdc_Char)0x78,  /* [6746] */
    (xdc_Char)0x25,  /* [6747] */
    (xdc_Char)0x78,  /* [6748] */
    (xdc_Char)0x2c,  /* [6749] */
    (xdc_Char)0x20,  /* [6750] */
    (xdc_Char)0x63,  /* [6751] */
    (xdc_Char)0x6f,  /* [6752] */
    (xdc_Char)0x75,  /* [6753] */
    (xdc_Char)0x6e,  /* [6754] */
    (xdc_Char)0x74,  /* [6755] */
    (xdc_Char)0x3a,  /* [6756] */
    (xdc_Char)0x20,  /* [6757] */
    (xdc_Char)0x25,  /* [6758] */
    (xdc_Char)0x64,  /* [6759] */
    (xdc_Char)0x2c,  /* [6760] */
    (xdc_Char)0x20,  /* [6761] */
    (xdc_Char)0x74,  /* [6762] */
    (xdc_Char)0x69,  /* [6763] */
    (xdc_Char)0x6d,  /* [6764] */
    (xdc_Char)0x65,  /* [6765] */
    (xdc_Char)0x6f,  /* [6766] */
    (xdc_Char)0x75,  /* [6767] */
    (xdc_Char)0x74,  /* [6768] */
    (xdc_Char)0x3a,  /* [6769] */
    (xdc_Char)0x20,  /* [6770] */
    (xdc_Char)0x25,  /* [6771] */
    (xdc_Char)0x64,  /* [6772] */
    (xdc_Char)0x0,  /* [6773] */
    (xdc_Char)0x4c,  /* [6774] */
    (xdc_Char)0x4d,  /* [6775] */
    (xdc_Char)0x5f,  /* [6776] */
    (xdc_Char)0x62,  /* [6777] */
    (xdc_Char)0x65,  /* [6778] */
    (xdc_Char)0x67,  /* [6779] */
    (xdc_Char)0x69,  /* [6780] */
    (xdc_Char)0x6e,  /* [6781] */
    (xdc_Char)0x3a,  /* [6782] */
    (xdc_Char)0x20,  /* [6783] */
    (xdc_Char)0x73,  /* [6784] */
    (xdc_Char)0x77,  /* [6785] */
    (xdc_Char)0x69,  /* [6786] */
    (xdc_Char)0x3a,  /* [6787] */
    (xdc_Char)0x20,  /* [6788] */
    (xdc_Char)0x30,  /* [6789] */
    (xdc_Char)0x78,  /* [6790] */
    (xdc_Char)0x25,  /* [6791] */
    (xdc_Char)0x78,  /* [6792] */
    (xdc_Char)0x2c,  /* [6793] */
    (xdc_Char)0x20,  /* [6794] */
    (xdc_Char)0x66,  /* [6795] */
    (xdc_Char)0x75,  /* [6796] */
    (xdc_Char)0x6e,  /* [6797] */
    (xdc_Char)0x63,  /* [6798] */
    (xdc_Char)0x3a,  /* [6799] */
    (xdc_Char)0x20,  /* [6800] */
    (xdc_Char)0x30,  /* [6801] */
    (xdc_Char)0x78,  /* [6802] */
    (xdc_Char)0x25,  /* [6803] */
    (xdc_Char)0x78,  /* [6804] */
    (xdc_Char)0x2c,  /* [6805] */
    (xdc_Char)0x20,  /* [6806] */
    (xdc_Char)0x70,  /* [6807] */
    (xdc_Char)0x72,  /* [6808] */
    (xdc_Char)0x65,  /* [6809] */
    (xdc_Char)0x54,  /* [6810] */
    (xdc_Char)0x68,  /* [6811] */
    (xdc_Char)0x72,  /* [6812] */
    (xdc_Char)0x65,  /* [6813] */
    (xdc_Char)0x61,  /* [6814] */
    (xdc_Char)0x64,  /* [6815] */
    (xdc_Char)0x3a,  /* [6816] */
    (xdc_Char)0x20,  /* [6817] */
    (xdc_Char)0x25,  /* [6818] */
    (xdc_Char)0x64,  /* [6819] */
    (xdc_Char)0x0,  /* [6820] */
    (xdc_Char)0x4c,  /* [6821] */
    (xdc_Char)0x44,  /* [6822] */
    (xdc_Char)0x5f,  /* [6823] */
    (xdc_Char)0x65,  /* [6824] */
    (xdc_Char)0x6e,  /* [6825] */
    (xdc_Char)0x64,  /* [6826] */
    (xdc_Char)0x3a,  /* [6827] */
    (xdc_Char)0x20,  /* [6828] */
    (xdc_Char)0x73,  /* [6829] */
    (xdc_Char)0x77,  /* [6830] */
    (xdc_Char)0x69,  /* [6831] */
    (xdc_Char)0x3a,  /* [6832] */
    (xdc_Char)0x20,  /* [6833] */
    (xdc_Char)0x30,  /* [6834] */
    (xdc_Char)0x78,  /* [6835] */
    (xdc_Char)0x25,  /* [6836] */
    (xdc_Char)0x78,  /* [6837] */
    (xdc_Char)0x0,  /* [6838] */
    (xdc_Char)0x4c,  /* [6839] */
    (xdc_Char)0x4d,  /* [6840] */
    (xdc_Char)0x5f,  /* [6841] */
    (xdc_Char)0x70,  /* [6842] */
    (xdc_Char)0x6f,  /* [6843] */
    (xdc_Char)0x73,  /* [6844] */
    (xdc_Char)0x74,  /* [6845] */
    (xdc_Char)0x3a,  /* [6846] */
    (xdc_Char)0x20,  /* [6847] */
    (xdc_Char)0x73,  /* [6848] */
    (xdc_Char)0x77,  /* [6849] */
    (xdc_Char)0x69,  /* [6850] */
    (xdc_Char)0x3a,  /* [6851] */
    (xdc_Char)0x20,  /* [6852] */
    (xdc_Char)0x30,  /* [6853] */
    (xdc_Char)0x78,  /* [6854] */
    (xdc_Char)0x25,  /* [6855] */
    (xdc_Char)0x78,  /* [6856] */
    (xdc_Char)0x2c,  /* [6857] */
    (xdc_Char)0x20,  /* [6858] */
    (xdc_Char)0x66,  /* [6859] */
    (xdc_Char)0x75,  /* [6860] */
    (xdc_Char)0x6e,  /* [6861] */
    (xdc_Char)0x63,  /* [6862] */
    (xdc_Char)0x3a,  /* [6863] */
    (xdc_Char)0x20,  /* [6864] */
    (xdc_Char)0x30,  /* [6865] */
    (xdc_Char)0x78,  /* [6866] */
    (xdc_Char)0x25,  /* [6867] */
    (xdc_Char)0x78,  /* [6868] */
    (xdc_Char)0x2c,  /* [6869] */
    (xdc_Char)0x20,  /* [6870] */
    (xdc_Char)0x70,  /* [6871] */
    (xdc_Char)0x72,  /* [6872] */
    (xdc_Char)0x69,  /* [6873] */
    (xdc_Char)0x3a,  /* [6874] */
    (xdc_Char)0x20,  /* [6875] */
    (xdc_Char)0x25,  /* [6876] */
    (xdc_Char)0x64,  /* [6877] */
    (xdc_Char)0x0,  /* [6878] */
    (xdc_Char)0x4c,  /* [6879] */
    (xdc_Char)0x4d,  /* [6880] */
    (xdc_Char)0x5f,  /* [6881] */
    (xdc_Char)0x73,  /* [6882] */
    (xdc_Char)0x77,  /* [6883] */
    (xdc_Char)0x69,  /* [6884] */
    (xdc_Char)0x74,  /* [6885] */
    (xdc_Char)0x63,  /* [6886] */
    (xdc_Char)0x68,  /* [6887] */
    (xdc_Char)0x3a,  /* [6888] */
    (xdc_Char)0x20,  /* [6889] */
    (xdc_Char)0x6f,  /* [6890] */
    (xdc_Char)0x6c,  /* [6891] */
    (xdc_Char)0x64,  /* [6892] */
    (xdc_Char)0x74,  /* [6893] */
    (xdc_Char)0x73,  /* [6894] */
    (xdc_Char)0x6b,  /* [6895] */
    (xdc_Char)0x3a,  /* [6896] */
    (xdc_Char)0x20,  /* [6897] */
    (xdc_Char)0x30,  /* [6898] */
    (xdc_Char)0x78,  /* [6899] */
    (xdc_Char)0x25,  /* [6900] */
    (xdc_Char)0x78,  /* [6901] */
    (xdc_Char)0x2c,  /* [6902] */
    (xdc_Char)0x20,  /* [6903] */
    (xdc_Char)0x6f,  /* [6904] */
    (xdc_Char)0x6c,  /* [6905] */
    (xdc_Char)0x64,  /* [6906] */
    (xdc_Char)0x66,  /* [6907] */
    (xdc_Char)0x75,  /* [6908] */
    (xdc_Char)0x6e,  /* [6909] */
    (xdc_Char)0x63,  /* [6910] */
    (xdc_Char)0x3a,  /* [6911] */
    (xdc_Char)0x20,  /* [6912] */
    (xdc_Char)0x30,  /* [6913] */
    (xdc_Char)0x78,  /* [6914] */
    (xdc_Char)0x25,  /* [6915] */
    (xdc_Char)0x78,  /* [6916] */
    (xdc_Char)0x2c,  /* [6917] */
    (xdc_Char)0x20,  /* [6918] */
    (xdc_Char)0x6e,  /* [6919] */
    (xdc_Char)0x65,  /* [6920] */
    (xdc_Char)0x77,  /* [6921] */
    (xdc_Char)0x74,  /* [6922] */
    (xdc_Char)0x73,  /* [6923] */
    (xdc_Char)0x6b,  /* [6924] */
    (xdc_Char)0x3a,  /* [6925] */
    (xdc_Char)0x20,  /* [6926] */
    (xdc_Char)0x30,  /* [6927] */
    (xdc_Char)0x78,  /* [6928] */
    (xdc_Char)0x25,  /* [6929] */
    (xdc_Char)0x78,  /* [6930] */
    (xdc_Char)0x2c,  /* [6931] */
    (xdc_Char)0x20,  /* [6932] */
    (xdc_Char)0x6e,  /* [6933] */
    (xdc_Char)0x65,  /* [6934] */
    (xdc_Char)0x77,  /* [6935] */
    (xdc_Char)0x66,  /* [6936] */
    (xdc_Char)0x75,  /* [6937] */
    (xdc_Char)0x6e,  /* [6938] */
    (xdc_Char)0x63,  /* [6939] */
    (xdc_Char)0x3a,  /* [6940] */
    (xdc_Char)0x20,  /* [6941] */
    (xdc_Char)0x30,  /* [6942] */
    (xdc_Char)0x78,  /* [6943] */
    (xdc_Char)0x25,  /* [6944] */
    (xdc_Char)0x78,  /* [6945] */
    (xdc_Char)0x0,  /* [6946] */
    (xdc_Char)0x4c,  /* [6947] */
    (xdc_Char)0x4d,  /* [6948] */
    (xdc_Char)0x5f,  /* [6949] */
    (xdc_Char)0x73,  /* [6950] */
    (xdc_Char)0x6c,  /* [6951] */
    (xdc_Char)0x65,  /* [6952] */
    (xdc_Char)0x65,  /* [6953] */
    (xdc_Char)0x70,  /* [6954] */
    (xdc_Char)0x3a,  /* [6955] */
    (xdc_Char)0x20,  /* [6956] */
    (xdc_Char)0x74,  /* [6957] */
    (xdc_Char)0x73,  /* [6958] */
    (xdc_Char)0x6b,  /* [6959] */
    (xdc_Char)0x3a,  /* [6960] */
    (xdc_Char)0x20,  /* [6961] */
    (xdc_Char)0x30,  /* [6962] */
    (xdc_Char)0x78,  /* [6963] */
    (xdc_Char)0x25,  /* [6964] */
    (xdc_Char)0x78,  /* [6965] */
    (xdc_Char)0x2c,  /* [6966] */
    (xdc_Char)0x20,  /* [6967] */
    (xdc_Char)0x66,  /* [6968] */
    (xdc_Char)0x75,  /* [6969] */
    (xdc_Char)0x6e,  /* [6970] */
    (xdc_Char)0x63,  /* [6971] */
    (xdc_Char)0x3a,  /* [6972] */
    (xdc_Char)0x20,  /* [6973] */
    (xdc_Char)0x30,  /* [6974] */
    (xdc_Char)0x78,  /* [6975] */
    (xdc_Char)0x25,  /* [6976] */
    (xdc_Char)0x78,  /* [6977] */
    (xdc_Char)0x2c,  /* [6978] */
    (xdc_Char)0x20,  /* [6979] */
    (xdc_Char)0x74,  /* [6980] */
    (xdc_Char)0x69,  /* [6981] */
    (xdc_Char)0x6d,  /* [6982] */
    (xdc_Char)0x65,  /* [6983] */
    (xdc_Char)0x6f,  /* [6984] */
    (xdc_Char)0x75,  /* [6985] */
    (xdc_Char)0x74,  /* [6986] */
    (xdc_Char)0x3a,  /* [6987] */
    (xdc_Char)0x20,  /* [6988] */
    (xdc_Char)0x25,  /* [6989] */
    (xdc_Char)0x64,  /* [6990] */
    (xdc_Char)0x0,  /* [6991] */
    (xdc_Char)0x4c,  /* [6992] */
    (xdc_Char)0x44,  /* [6993] */
    (xdc_Char)0x5f,  /* [6994] */
    (xdc_Char)0x72,  /* [6995] */
    (xdc_Char)0x65,  /* [6996] */
    (xdc_Char)0x61,  /* [6997] */
    (xdc_Char)0x64,  /* [6998] */
    (xdc_Char)0x79,  /* [6999] */
    (xdc_Char)0x3a,  /* [7000] */
    (xdc_Char)0x20,  /* [7001] */
    (xdc_Char)0x74,  /* [7002] */
    (xdc_Char)0x73,  /* [7003] */
    (xdc_Char)0x6b,  /* [7004] */
    (xdc_Char)0x3a,  /* [7005] */
    (xdc_Char)0x20,  /* [7006] */
    (xdc_Char)0x30,  /* [7007] */
    (xdc_Char)0x78,  /* [7008] */
    (xdc_Char)0x25,  /* [7009] */
    (xdc_Char)0x78,  /* [7010] */
    (xdc_Char)0x2c,  /* [7011] */
    (xdc_Char)0x20,  /* [7012] */
    (xdc_Char)0x66,  /* [7013] */
    (xdc_Char)0x75,  /* [7014] */
    (xdc_Char)0x6e,  /* [7015] */
    (xdc_Char)0x63,  /* [7016] */
    (xdc_Char)0x3a,  /* [7017] */
    (xdc_Char)0x20,  /* [7018] */
    (xdc_Char)0x30,  /* [7019] */
    (xdc_Char)0x78,  /* [7020] */
    (xdc_Char)0x25,  /* [7021] */
    (xdc_Char)0x78,  /* [7022] */
    (xdc_Char)0x2c,  /* [7023] */
    (xdc_Char)0x20,  /* [7024] */
    (xdc_Char)0x70,  /* [7025] */
    (xdc_Char)0x72,  /* [7026] */
    (xdc_Char)0x69,  /* [7027] */
    (xdc_Char)0x3a,  /* [7028] */
    (xdc_Char)0x20,  /* [7029] */
    (xdc_Char)0x25,  /* [7030] */
    (xdc_Char)0x64,  /* [7031] */
    (xdc_Char)0x0,  /* [7032] */
    (xdc_Char)0x4c,  /* [7033] */
    (xdc_Char)0x44,  /* [7034] */
    (xdc_Char)0x5f,  /* [7035] */
    (xdc_Char)0x62,  /* [7036] */
    (xdc_Char)0x6c,  /* [7037] */
    (xdc_Char)0x6f,  /* [7038] */
    (xdc_Char)0x63,  /* [7039] */
    (xdc_Char)0x6b,  /* [7040] */
    (xdc_Char)0x3a,  /* [7041] */
    (xdc_Char)0x20,  /* [7042] */
    (xdc_Char)0x74,  /* [7043] */
    (xdc_Char)0x73,  /* [7044] */
    (xdc_Char)0x6b,  /* [7045] */
    (xdc_Char)0x3a,  /* [7046] */
    (xdc_Char)0x20,  /* [7047] */
    (xdc_Char)0x30,  /* [7048] */
    (xdc_Char)0x78,  /* [7049] */
    (xdc_Char)0x25,  /* [7050] */
    (xdc_Char)0x78,  /* [7051] */
    (xdc_Char)0x2c,  /* [7052] */
    (xdc_Char)0x20,  /* [7053] */
    (xdc_Char)0x66,  /* [7054] */
    (xdc_Char)0x75,  /* [7055] */
    (xdc_Char)0x6e,  /* [7056] */
    (xdc_Char)0x63,  /* [7057] */
    (xdc_Char)0x3a,  /* [7058] */
    (xdc_Char)0x20,  /* [7059] */
    (xdc_Char)0x30,  /* [7060] */
    (xdc_Char)0x78,  /* [7061] */
    (xdc_Char)0x25,  /* [7062] */
    (xdc_Char)0x78,  /* [7063] */
    (xdc_Char)0x0,  /* [7064] */
    (xdc_Char)0x4c,  /* [7065] */
    (xdc_Char)0x4d,  /* [7066] */
    (xdc_Char)0x5f,  /* [7067] */
    (xdc_Char)0x79,  /* [7068] */
    (xdc_Char)0x69,  /* [7069] */
    (xdc_Char)0x65,  /* [7070] */
    (xdc_Char)0x6c,  /* [7071] */
    (xdc_Char)0x64,  /* [7072] */
    (xdc_Char)0x3a,  /* [7073] */
    (xdc_Char)0x20,  /* [7074] */
    (xdc_Char)0x74,  /* [7075] */
    (xdc_Char)0x73,  /* [7076] */
    (xdc_Char)0x6b,  /* [7077] */
    (xdc_Char)0x3a,  /* [7078] */
    (xdc_Char)0x20,  /* [7079] */
    (xdc_Char)0x30,  /* [7080] */
    (xdc_Char)0x78,  /* [7081] */
    (xdc_Char)0x25,  /* [7082] */
    (xdc_Char)0x78,  /* [7083] */
    (xdc_Char)0x2c,  /* [7084] */
    (xdc_Char)0x20,  /* [7085] */
    (xdc_Char)0x66,  /* [7086] */
    (xdc_Char)0x75,  /* [7087] */
    (xdc_Char)0x6e,  /* [7088] */
    (xdc_Char)0x63,  /* [7089] */
    (xdc_Char)0x3a,  /* [7090] */
    (xdc_Char)0x20,  /* [7091] */
    (xdc_Char)0x30,  /* [7092] */
    (xdc_Char)0x78,  /* [7093] */
    (xdc_Char)0x25,  /* [7094] */
    (xdc_Char)0x78,  /* [7095] */
    (xdc_Char)0x2c,  /* [7096] */
    (xdc_Char)0x20,  /* [7097] */
    (xdc_Char)0x63,  /* [7098] */
    (xdc_Char)0x75,  /* [7099] */
    (xdc_Char)0x72,  /* [7100] */
    (xdc_Char)0x72,  /* [7101] */
    (xdc_Char)0x54,  /* [7102] */
    (xdc_Char)0x68,  /* [7103] */
    (xdc_Char)0x72,  /* [7104] */
    (xdc_Char)0x65,  /* [7105] */
    (xdc_Char)0x61,  /* [7106] */
    (xdc_Char)0x64,  /* [7107] */
    (xdc_Char)0x3a,  /* [7108] */
    (xdc_Char)0x20,  /* [7109] */
    (xdc_Char)0x25,  /* [7110] */
    (xdc_Char)0x64,  /* [7111] */
    (xdc_Char)0x0,  /* [7112] */
    (xdc_Char)0x4c,  /* [7113] */
    (xdc_Char)0x4d,  /* [7114] */
    (xdc_Char)0x5f,  /* [7115] */
    (xdc_Char)0x73,  /* [7116] */
    (xdc_Char)0x65,  /* [7117] */
    (xdc_Char)0x74,  /* [7118] */
    (xdc_Char)0x50,  /* [7119] */
    (xdc_Char)0x72,  /* [7120] */
    (xdc_Char)0x69,  /* [7121] */
    (xdc_Char)0x3a,  /* [7122] */
    (xdc_Char)0x20,  /* [7123] */
    (xdc_Char)0x74,  /* [7124] */
    (xdc_Char)0x73,  /* [7125] */
    (xdc_Char)0x6b,  /* [7126] */
    (xdc_Char)0x3a,  /* [7127] */
    (xdc_Char)0x20,  /* [7128] */
    (xdc_Char)0x30,  /* [7129] */
    (xdc_Char)0x78,  /* [7130] */
    (xdc_Char)0x25,  /* [7131] */
    (xdc_Char)0x78,  /* [7132] */
    (xdc_Char)0x2c,  /* [7133] */
    (xdc_Char)0x20,  /* [7134] */
    (xdc_Char)0x66,  /* [7135] */
    (xdc_Char)0x75,  /* [7136] */
    (xdc_Char)0x6e,  /* [7137] */
    (xdc_Char)0x63,  /* [7138] */
    (xdc_Char)0x3a,  /* [7139] */
    (xdc_Char)0x20,  /* [7140] */
    (xdc_Char)0x30,  /* [7141] */
    (xdc_Char)0x78,  /* [7142] */
    (xdc_Char)0x25,  /* [7143] */
    (xdc_Char)0x78,  /* [7144] */
    (xdc_Char)0x2c,  /* [7145] */
    (xdc_Char)0x20,  /* [7146] */
    (xdc_Char)0x6f,  /* [7147] */
    (xdc_Char)0x6c,  /* [7148] */
    (xdc_Char)0x64,  /* [7149] */
    (xdc_Char)0x50,  /* [7150] */
    (xdc_Char)0x72,  /* [7151] */
    (xdc_Char)0x69,  /* [7152] */
    (xdc_Char)0x3a,  /* [7153] */
    (xdc_Char)0x20,  /* [7154] */
    (xdc_Char)0x25,  /* [7155] */
    (xdc_Char)0x64,  /* [7156] */
    (xdc_Char)0x2c,  /* [7157] */
    (xdc_Char)0x20,  /* [7158] */
    (xdc_Char)0x6e,  /* [7159] */
    (xdc_Char)0x65,  /* [7160] */
    (xdc_Char)0x77,  /* [7161] */
    (xdc_Char)0x50,  /* [7162] */
    (xdc_Char)0x72,  /* [7163] */
    (xdc_Char)0x69,  /* [7164] */
    (xdc_Char)0x20,  /* [7165] */
    (xdc_Char)0x25,  /* [7166] */
    (xdc_Char)0x64,  /* [7167] */
    (xdc_Char)0x0,  /* [7168] */
    (xdc_Char)0x4c,  /* [7169] */
    (xdc_Char)0x44,  /* [7170] */
    (xdc_Char)0x5f,  /* [7171] */
    (xdc_Char)0x65,  /* [7172] */
    (xdc_Char)0x78,  /* [7173] */
    (xdc_Char)0x69,  /* [7174] */
    (xdc_Char)0x74,  /* [7175] */
    (xdc_Char)0x3a,  /* [7176] */
    (xdc_Char)0x20,  /* [7177] */
    (xdc_Char)0x74,  /* [7178] */
    (xdc_Char)0x73,  /* [7179] */
    (xdc_Char)0x6b,  /* [7180] */
    (xdc_Char)0x3a,  /* [7181] */
    (xdc_Char)0x20,  /* [7182] */
    (xdc_Char)0x30,  /* [7183] */
    (xdc_Char)0x78,  /* [7184] */
    (xdc_Char)0x25,  /* [7185] */
    (xdc_Char)0x78,  /* [7186] */
    (xdc_Char)0x2c,  /* [7187] */
    (xdc_Char)0x20,  /* [7188] */
    (xdc_Char)0x66,  /* [7189] */
    (xdc_Char)0x75,  /* [7190] */
    (xdc_Char)0x6e,  /* [7191] */
    (xdc_Char)0x63,  /* [7192] */
    (xdc_Char)0x3a,  /* [7193] */
    (xdc_Char)0x20,  /* [7194] */
    (xdc_Char)0x30,  /* [7195] */
    (xdc_Char)0x78,  /* [7196] */
    (xdc_Char)0x25,  /* [7197] */
    (xdc_Char)0x78,  /* [7198] */
    (xdc_Char)0x0,  /* [7199] */
    (xdc_Char)0x4c,  /* [7200] */
    (xdc_Char)0x4d,  /* [7201] */
    (xdc_Char)0x5f,  /* [7202] */
    (xdc_Char)0x73,  /* [7203] */
    (xdc_Char)0x65,  /* [7204] */
    (xdc_Char)0x74,  /* [7205] */
    (xdc_Char)0x41,  /* [7206] */
    (xdc_Char)0x66,  /* [7207] */
    (xdc_Char)0x66,  /* [7208] */
    (xdc_Char)0x69,  /* [7209] */
    (xdc_Char)0x6e,  /* [7210] */
    (xdc_Char)0x69,  /* [7211] */
    (xdc_Char)0x74,  /* [7212] */
    (xdc_Char)0x79,  /* [7213] */
    (xdc_Char)0x3a,  /* [7214] */
    (xdc_Char)0x20,  /* [7215] */
    (xdc_Char)0x74,  /* [7216] */
    (xdc_Char)0x73,  /* [7217] */
    (xdc_Char)0x6b,  /* [7218] */
    (xdc_Char)0x3a,  /* [7219] */
    (xdc_Char)0x20,  /* [7220] */
    (xdc_Char)0x30,  /* [7221] */
    (xdc_Char)0x78,  /* [7222] */
    (xdc_Char)0x25,  /* [7223] */
    (xdc_Char)0x78,  /* [7224] */
    (xdc_Char)0x2c,  /* [7225] */
    (xdc_Char)0x20,  /* [7226] */
    (xdc_Char)0x66,  /* [7227] */
    (xdc_Char)0x75,  /* [7228] */
    (xdc_Char)0x6e,  /* [7229] */
    (xdc_Char)0x63,  /* [7230] */
    (xdc_Char)0x3a,  /* [7231] */
    (xdc_Char)0x20,  /* [7232] */
    (xdc_Char)0x30,  /* [7233] */
    (xdc_Char)0x78,  /* [7234] */
    (xdc_Char)0x25,  /* [7235] */
    (xdc_Char)0x78,  /* [7236] */
    (xdc_Char)0x2c,  /* [7237] */
    (xdc_Char)0x20,  /* [7238] */
    (xdc_Char)0x6f,  /* [7239] */
    (xdc_Char)0x6c,  /* [7240] */
    (xdc_Char)0x64,  /* [7241] */
    (xdc_Char)0x43,  /* [7242] */
    (xdc_Char)0x6f,  /* [7243] */
    (xdc_Char)0x72,  /* [7244] */
    (xdc_Char)0x65,  /* [7245] */
    (xdc_Char)0x3a,  /* [7246] */
    (xdc_Char)0x20,  /* [7247] */
    (xdc_Char)0x25,  /* [7248] */
    (xdc_Char)0x64,  /* [7249] */
    (xdc_Char)0x2c,  /* [7250] */
    (xdc_Char)0x20,  /* [7251] */
    (xdc_Char)0x6f,  /* [7252] */
    (xdc_Char)0x6c,  /* [7253] */
    (xdc_Char)0x64,  /* [7254] */
    (xdc_Char)0x41,  /* [7255] */
    (xdc_Char)0x66,  /* [7256] */
    (xdc_Char)0x66,  /* [7257] */
    (xdc_Char)0x69,  /* [7258] */
    (xdc_Char)0x6e,  /* [7259] */
    (xdc_Char)0x69,  /* [7260] */
    (xdc_Char)0x74,  /* [7261] */
    (xdc_Char)0x79,  /* [7262] */
    (xdc_Char)0x20,  /* [7263] */
    (xdc_Char)0x25,  /* [7264] */
    (xdc_Char)0x64,  /* [7265] */
    (xdc_Char)0x2c,  /* [7266] */
    (xdc_Char)0x20,  /* [7267] */
    (xdc_Char)0x6e,  /* [7268] */
    (xdc_Char)0x65,  /* [7269] */
    (xdc_Char)0x77,  /* [7270] */
    (xdc_Char)0x41,  /* [7271] */
    (xdc_Char)0x66,  /* [7272] */
    (xdc_Char)0x66,  /* [7273] */
    (xdc_Char)0x69,  /* [7274] */
    (xdc_Char)0x6e,  /* [7275] */
    (xdc_Char)0x69,  /* [7276] */
    (xdc_Char)0x74,  /* [7277] */
    (xdc_Char)0x79,  /* [7278] */
    (xdc_Char)0x20,  /* [7279] */
    (xdc_Char)0x25,  /* [7280] */
    (xdc_Char)0x64,  /* [7281] */
    (xdc_Char)0x0,  /* [7282] */
    (xdc_Char)0x4c,  /* [7283] */
    (xdc_Char)0x44,  /* [7284] */
    (xdc_Char)0x5f,  /* [7285] */
    (xdc_Char)0x73,  /* [7286] */
    (xdc_Char)0x63,  /* [7287] */
    (xdc_Char)0x68,  /* [7288] */
    (xdc_Char)0x65,  /* [7289] */
    (xdc_Char)0x64,  /* [7290] */
    (xdc_Char)0x75,  /* [7291] */
    (xdc_Char)0x6c,  /* [7292] */
    (xdc_Char)0x65,  /* [7293] */
    (xdc_Char)0x3a,  /* [7294] */
    (xdc_Char)0x20,  /* [7295] */
    (xdc_Char)0x63,  /* [7296] */
    (xdc_Char)0x6f,  /* [7297] */
    (xdc_Char)0x72,  /* [7298] */
    (xdc_Char)0x65,  /* [7299] */
    (xdc_Char)0x49,  /* [7300] */
    (xdc_Char)0x64,  /* [7301] */
    (xdc_Char)0x3a,  /* [7302] */
    (xdc_Char)0x20,  /* [7303] */
    (xdc_Char)0x25,  /* [7304] */
    (xdc_Char)0x64,  /* [7305] */
    (xdc_Char)0x2c,  /* [7306] */
    (xdc_Char)0x20,  /* [7307] */
    (xdc_Char)0x77,  /* [7308] */
    (xdc_Char)0x6f,  /* [7309] */
    (xdc_Char)0x72,  /* [7310] */
    (xdc_Char)0x6b,  /* [7311] */
    (xdc_Char)0x46,  /* [7312] */
    (xdc_Char)0x6c,  /* [7313] */
    (xdc_Char)0x61,  /* [7314] */
    (xdc_Char)0x67,  /* [7315] */
    (xdc_Char)0x3a,  /* [7316] */
    (xdc_Char)0x20,  /* [7317] */
    (xdc_Char)0x25,  /* [7318] */
    (xdc_Char)0x64,  /* [7319] */
    (xdc_Char)0x2c,  /* [7320] */
    (xdc_Char)0x20,  /* [7321] */
    (xdc_Char)0x63,  /* [7322] */
    (xdc_Char)0x75,  /* [7323] */
    (xdc_Char)0x72,  /* [7324] */
    (xdc_Char)0x53,  /* [7325] */
    (xdc_Char)0x65,  /* [7326] */
    (xdc_Char)0x74,  /* [7327] */
    (xdc_Char)0x4c,  /* [7328] */
    (xdc_Char)0x6f,  /* [7329] */
    (xdc_Char)0x63,  /* [7330] */
    (xdc_Char)0x61,  /* [7331] */
    (xdc_Char)0x6c,  /* [7332] */
    (xdc_Char)0x3a,  /* [7333] */
    (xdc_Char)0x20,  /* [7334] */
    (xdc_Char)0x25,  /* [7335] */
    (xdc_Char)0x64,  /* [7336] */
    (xdc_Char)0x2c,  /* [7337] */
    (xdc_Char)0x20,  /* [7338] */
    (xdc_Char)0x63,  /* [7339] */
    (xdc_Char)0x75,  /* [7340] */
    (xdc_Char)0x72,  /* [7341] */
    (xdc_Char)0x53,  /* [7342] */
    (xdc_Char)0x65,  /* [7343] */
    (xdc_Char)0x74,  /* [7344] */
    (xdc_Char)0x58,  /* [7345] */
    (xdc_Char)0x3a,  /* [7346] */
    (xdc_Char)0x20,  /* [7347] */
    (xdc_Char)0x25,  /* [7348] */
    (xdc_Char)0x64,  /* [7349] */
    (xdc_Char)0x2c,  /* [7350] */
    (xdc_Char)0x20,  /* [7351] */
    (xdc_Char)0x63,  /* [7352] */
    (xdc_Char)0x75,  /* [7353] */
    (xdc_Char)0x72,  /* [7354] */
    (xdc_Char)0x4d,  /* [7355] */
    (xdc_Char)0x61,  /* [7356] */
    (xdc_Char)0x73,  /* [7357] */
    (xdc_Char)0x6b,  /* [7358] */
    (xdc_Char)0x4c,  /* [7359] */
    (xdc_Char)0x6f,  /* [7360] */
    (xdc_Char)0x63,  /* [7361] */
    (xdc_Char)0x61,  /* [7362] */
    (xdc_Char)0x6c,  /* [7363] */
    (xdc_Char)0x3a,  /* [7364] */
    (xdc_Char)0x20,  /* [7365] */
    (xdc_Char)0x25,  /* [7366] */
    (xdc_Char)0x64,  /* [7367] */
    (xdc_Char)0x0,  /* [7368] */
    (xdc_Char)0x4c,  /* [7369] */
    (xdc_Char)0x44,  /* [7370] */
    (xdc_Char)0x5f,  /* [7371] */
    (xdc_Char)0x6e,  /* [7372] */
    (xdc_Char)0x6f,  /* [7373] */
    (xdc_Char)0x57,  /* [7374] */
    (xdc_Char)0x6f,  /* [7375] */
    (xdc_Char)0x72,  /* [7376] */
    (xdc_Char)0x6b,  /* [7377] */
    (xdc_Char)0x3a,  /* [7378] */
    (xdc_Char)0x20,  /* [7379] */
    (xdc_Char)0x63,  /* [7380] */
    (xdc_Char)0x6f,  /* [7381] */
    (xdc_Char)0x72,  /* [7382] */
    (xdc_Char)0x65,  /* [7383] */
    (xdc_Char)0x49,  /* [7384] */
    (xdc_Char)0x64,  /* [7385] */
    (xdc_Char)0x3a,  /* [7386] */
    (xdc_Char)0x20,  /* [7387] */
    (xdc_Char)0x25,  /* [7388] */
    (xdc_Char)0x64,  /* [7389] */
    (xdc_Char)0x2c,  /* [7390] */
    (xdc_Char)0x20,  /* [7391] */
    (xdc_Char)0x63,  /* [7392] */
    (xdc_Char)0x75,  /* [7393] */
    (xdc_Char)0x72,  /* [7394] */
    (xdc_Char)0x53,  /* [7395] */
    (xdc_Char)0x65,  /* [7396] */
    (xdc_Char)0x74,  /* [7397] */
    (xdc_Char)0x4c,  /* [7398] */
    (xdc_Char)0x6f,  /* [7399] */
    (xdc_Char)0x63,  /* [7400] */
    (xdc_Char)0x61,  /* [7401] */
    (xdc_Char)0x6c,  /* [7402] */
    (xdc_Char)0x3a,  /* [7403] */
    (xdc_Char)0x20,  /* [7404] */
    (xdc_Char)0x25,  /* [7405] */
    (xdc_Char)0x64,  /* [7406] */
    (xdc_Char)0x2c,  /* [7407] */
    (xdc_Char)0x20,  /* [7408] */
    (xdc_Char)0x63,  /* [7409] */
    (xdc_Char)0x75,  /* [7410] */
    (xdc_Char)0x72,  /* [7411] */
    (xdc_Char)0x53,  /* [7412] */
    (xdc_Char)0x65,  /* [7413] */
    (xdc_Char)0x74,  /* [7414] */
    (xdc_Char)0x58,  /* [7415] */
    (xdc_Char)0x3a,  /* [7416] */
    (xdc_Char)0x20,  /* [7417] */
    (xdc_Char)0x25,  /* [7418] */
    (xdc_Char)0x64,  /* [7419] */
    (xdc_Char)0x2c,  /* [7420] */
    (xdc_Char)0x20,  /* [7421] */
    (xdc_Char)0x63,  /* [7422] */
    (xdc_Char)0x75,  /* [7423] */
    (xdc_Char)0x72,  /* [7424] */
    (xdc_Char)0x4d,  /* [7425] */
    (xdc_Char)0x61,  /* [7426] */
    (xdc_Char)0x73,  /* [7427] */
    (xdc_Char)0x6b,  /* [7428] */
    (xdc_Char)0x4c,  /* [7429] */
    (xdc_Char)0x6f,  /* [7430] */
    (xdc_Char)0x63,  /* [7431] */
    (xdc_Char)0x61,  /* [7432] */
    (xdc_Char)0x6c,  /* [7433] */
    (xdc_Char)0x3a,  /* [7434] */
    (xdc_Char)0x20,  /* [7435] */
    (xdc_Char)0x25,  /* [7436] */
    (xdc_Char)0x64,  /* [7437] */
    (xdc_Char)0x0,  /* [7438] */
    (xdc_Char)0x4c,  /* [7439] */
    (xdc_Char)0x4d,  /* [7440] */
    (xdc_Char)0x5f,  /* [7441] */
    (xdc_Char)0x62,  /* [7442] */
    (xdc_Char)0x65,  /* [7443] */
    (xdc_Char)0x67,  /* [7444] */
    (xdc_Char)0x69,  /* [7445] */
    (xdc_Char)0x6e,  /* [7446] */
    (xdc_Char)0x3a,  /* [7447] */
    (xdc_Char)0x20,  /* [7448] */
    (xdc_Char)0x68,  /* [7449] */
    (xdc_Char)0x77,  /* [7450] */
    (xdc_Char)0x69,  /* [7451] */
    (xdc_Char)0x3a,  /* [7452] */
    (xdc_Char)0x20,  /* [7453] */
    (xdc_Char)0x30,  /* [7454] */
    (xdc_Char)0x78,  /* [7455] */
    (xdc_Char)0x25,  /* [7456] */
    (xdc_Char)0x78,  /* [7457] */
    (xdc_Char)0x2c,  /* [7458] */
    (xdc_Char)0x20,  /* [7459] */
    (xdc_Char)0x66,  /* [7460] */
    (xdc_Char)0x75,  /* [7461] */
    (xdc_Char)0x6e,  /* [7462] */
    (xdc_Char)0x63,  /* [7463] */
    (xdc_Char)0x3a,  /* [7464] */
    (xdc_Char)0x20,  /* [7465] */
    (xdc_Char)0x30,  /* [7466] */
    (xdc_Char)0x78,  /* [7467] */
    (xdc_Char)0x25,  /* [7468] */
    (xdc_Char)0x78,  /* [7469] */
    (xdc_Char)0x2c,  /* [7470] */
    (xdc_Char)0x20,  /* [7471] */
    (xdc_Char)0x70,  /* [7472] */
    (xdc_Char)0x72,  /* [7473] */
    (xdc_Char)0x65,  /* [7474] */
    (xdc_Char)0x54,  /* [7475] */
    (xdc_Char)0x68,  /* [7476] */
    (xdc_Char)0x72,  /* [7477] */
    (xdc_Char)0x65,  /* [7478] */
    (xdc_Char)0x61,  /* [7479] */
    (xdc_Char)0x64,  /* [7480] */
    (xdc_Char)0x3a,  /* [7481] */
    (xdc_Char)0x20,  /* [7482] */
    (xdc_Char)0x25,  /* [7483] */
    (xdc_Char)0x64,  /* [7484] */
    (xdc_Char)0x2c,  /* [7485] */
    (xdc_Char)0x20,  /* [7486] */
    (xdc_Char)0x69,  /* [7487] */
    (xdc_Char)0x6e,  /* [7488] */
    (xdc_Char)0x74,  /* [7489] */
    (xdc_Char)0x4e,  /* [7490] */
    (xdc_Char)0x75,  /* [7491] */
    (xdc_Char)0x6d,  /* [7492] */
    (xdc_Char)0x3a,  /* [7493] */
    (xdc_Char)0x20,  /* [7494] */
    (xdc_Char)0x25,  /* [7495] */
    (xdc_Char)0x64,  /* [7496] */
    (xdc_Char)0x2c,  /* [7497] */
    (xdc_Char)0x20,  /* [7498] */
    (xdc_Char)0x69,  /* [7499] */
    (xdc_Char)0x72,  /* [7500] */
    (xdc_Char)0x70,  /* [7501] */
    (xdc_Char)0x3a,  /* [7502] */
    (xdc_Char)0x20,  /* [7503] */
    (xdc_Char)0x30,  /* [7504] */
    (xdc_Char)0x78,  /* [7505] */
    (xdc_Char)0x25,  /* [7506] */
    (xdc_Char)0x78,  /* [7507] */
    (xdc_Char)0x0,  /* [7508] */
    (xdc_Char)0x4c,  /* [7509] */
    (xdc_Char)0x44,  /* [7510] */
    (xdc_Char)0x5f,  /* [7511] */
    (xdc_Char)0x65,  /* [7512] */
    (xdc_Char)0x6e,  /* [7513] */
    (xdc_Char)0x64,  /* [7514] */
    (xdc_Char)0x3a,  /* [7515] */
    (xdc_Char)0x20,  /* [7516] */
    (xdc_Char)0x68,  /* [7517] */
    (xdc_Char)0x77,  /* [7518] */
    (xdc_Char)0x69,  /* [7519] */
    (xdc_Char)0x3a,  /* [7520] */
    (xdc_Char)0x20,  /* [7521] */
    (xdc_Char)0x30,  /* [7522] */
    (xdc_Char)0x78,  /* [7523] */
    (xdc_Char)0x25,  /* [7524] */
    (xdc_Char)0x78,  /* [7525] */
    (xdc_Char)0x0,  /* [7526] */
    (xdc_Char)0x4c,  /* [7527] */
    (xdc_Char)0x53,  /* [7528] */
    (xdc_Char)0x5f,  /* [7529] */
    (xdc_Char)0x63,  /* [7530] */
    (xdc_Char)0x70,  /* [7531] */
    (xdc_Char)0x75,  /* [7532] */
    (xdc_Char)0x4c,  /* [7533] */
    (xdc_Char)0x6f,  /* [7534] */
    (xdc_Char)0x61,  /* [7535] */
    (xdc_Char)0x64,  /* [7536] */
    (xdc_Char)0x3a,  /* [7537] */
    (xdc_Char)0x20,  /* [7538] */
    (xdc_Char)0x25,  /* [7539] */
    (xdc_Char)0x64,  /* [7540] */
    (xdc_Char)0x25,  /* [7541] */
    (xdc_Char)0x25,  /* [7542] */
    (xdc_Char)0x0,  /* [7543] */
    (xdc_Char)0x4c,  /* [7544] */
    (xdc_Char)0x53,  /* [7545] */
    (xdc_Char)0x5f,  /* [7546] */
    (xdc_Char)0x68,  /* [7547] */
    (xdc_Char)0x77,  /* [7548] */
    (xdc_Char)0x69,  /* [7549] */
    (xdc_Char)0x4c,  /* [7550] */
    (xdc_Char)0x6f,  /* [7551] */
    (xdc_Char)0x61,  /* [7552] */
    (xdc_Char)0x64,  /* [7553] */
    (xdc_Char)0x3a,  /* [7554] */
    (xdc_Char)0x20,  /* [7555] */
    (xdc_Char)0x25,  /* [7556] */
    (xdc_Char)0x64,  /* [7557] */
    (xdc_Char)0x2c,  /* [7558] */
    (xdc_Char)0x25,  /* [7559] */
    (xdc_Char)0x64,  /* [7560] */
    (xdc_Char)0x0,  /* [7561] */
    (xdc_Char)0x4c,  /* [7562] */
    (xdc_Char)0x53,  /* [7563] */
    (xdc_Char)0x5f,  /* [7564] */
    (xdc_Char)0x73,  /* [7565] */
    (xdc_Char)0x77,  /* [7566] */
    (xdc_Char)0x69,  /* [7567] */
    (xdc_Char)0x4c,  /* [7568] */
    (xdc_Char)0x6f,  /* [7569] */
    (xdc_Char)0x61,  /* [7570] */
    (xdc_Char)0x64,  /* [7571] */
    (xdc_Char)0x3a,  /* [7572] */
    (xdc_Char)0x20,  /* [7573] */
    (xdc_Char)0x25,  /* [7574] */
    (xdc_Char)0x64,  /* [7575] */
    (xdc_Char)0x2c,  /* [7576] */
    (xdc_Char)0x25,  /* [7577] */
    (xdc_Char)0x64,  /* [7578] */
    (xdc_Char)0x0,  /* [7579] */
    (xdc_Char)0x4c,  /* [7580] */
    (xdc_Char)0x53,  /* [7581] */
    (xdc_Char)0x5f,  /* [7582] */
    (xdc_Char)0x74,  /* [7583] */
    (xdc_Char)0x61,  /* [7584] */
    (xdc_Char)0x73,  /* [7585] */
    (xdc_Char)0x6b,  /* [7586] */
    (xdc_Char)0x4c,  /* [7587] */
    (xdc_Char)0x6f,  /* [7588] */
    (xdc_Char)0x61,  /* [7589] */
    (xdc_Char)0x64,  /* [7590] */
    (xdc_Char)0x3a,  /* [7591] */
    (xdc_Char)0x20,  /* [7592] */
    (xdc_Char)0x30,  /* [7593] */
    (xdc_Char)0x78,  /* [7594] */
    (xdc_Char)0x25,  /* [7595] */
    (xdc_Char)0x78,  /* [7596] */
    (xdc_Char)0x2c,  /* [7597] */
    (xdc_Char)0x25,  /* [7598] */
    (xdc_Char)0x64,  /* [7599] */
    (xdc_Char)0x2c,  /* [7600] */
    (xdc_Char)0x25,  /* [7601] */
    (xdc_Char)0x64,  /* [7602] */
    (xdc_Char)0x2c,  /* [7603] */
    (xdc_Char)0x30,  /* [7604] */
    (xdc_Char)0x78,  /* [7605] */
    (xdc_Char)0x25,  /* [7606] */
    (xdc_Char)0x78,  /* [7607] */
    (xdc_Char)0x0,  /* [7608] */
    (xdc_Char)0x4c,  /* [7609] */
    (xdc_Char)0x6f,  /* [7610] */
    (xdc_Char)0x67,  /* [7611] */
    (xdc_Char)0x67,  /* [7612] */
    (xdc_Char)0x65,  /* [7613] */
    (xdc_Char)0x72,  /* [7614] */
    (xdc_Char)0x53,  /* [7615] */
    (xdc_Char)0x74,  /* [7616] */
    (xdc_Char)0x6f,  /* [7617] */
    (xdc_Char)0x70,  /* [7618] */
    (xdc_Char)0x4d,  /* [7619] */
    (xdc_Char)0x6f,  /* [7620] */
    (xdc_Char)0x64,  /* [7621] */
    (xdc_Char)0x65,  /* [7622] */
    (xdc_Char)0x20,  /* [7623] */
    (xdc_Char)0x54,  /* [7624] */
    (xdc_Char)0x65,  /* [7625] */
    (xdc_Char)0x73,  /* [7626] */
    (xdc_Char)0x74,  /* [7627] */
    (xdc_Char)0x0,  /* [7628] */
    (xdc_Char)0x78,  /* [7629] */
    (xdc_Char)0x64,  /* [7630] */
    (xdc_Char)0x63,  /* [7631] */
    (xdc_Char)0x2e,  /* [7632] */
    (xdc_Char)0x0,  /* [7633] */
    (xdc_Char)0x72,  /* [7634] */
    (xdc_Char)0x75,  /* [7635] */
    (xdc_Char)0x6e,  /* [7636] */
    (xdc_Char)0x74,  /* [7637] */
    (xdc_Char)0x69,  /* [7638] */
    (xdc_Char)0x6d,  /* [7639] */
    (xdc_Char)0x65,  /* [7640] */
    (xdc_Char)0x2e,  /* [7641] */
    (xdc_Char)0x0,  /* [7642] */
    (xdc_Char)0x41,  /* [7643] */
    (xdc_Char)0x73,  /* [7644] */
    (xdc_Char)0x73,  /* [7645] */
    (xdc_Char)0x65,  /* [7646] */
    (xdc_Char)0x72,  /* [7647] */
    (xdc_Char)0x74,  /* [7648] */
    (xdc_Char)0x0,  /* [7649] */
    (xdc_Char)0x43,  /* [7650] */
    (xdc_Char)0x6f,  /* [7651] */
    (xdc_Char)0x72,  /* [7652] */
    (xdc_Char)0x65,  /* [7653] */
    (xdc_Char)0x0,  /* [7654] */
    (xdc_Char)0x44,  /* [7655] */
    (xdc_Char)0x65,  /* [7656] */
    (xdc_Char)0x66,  /* [7657] */
    (xdc_Char)0x61,  /* [7658] */
    (xdc_Char)0x75,  /* [7659] */
    (xdc_Char)0x6c,  /* [7660] */
    (xdc_Char)0x74,  /* [7661] */
    (xdc_Char)0x73,  /* [7662] */
    (xdc_Char)0x0,  /* [7663] */
    (xdc_Char)0x44,  /* [7664] */
    (xdc_Char)0x69,  /* [7665] */
    (xdc_Char)0x61,  /* [7666] */
    (xdc_Char)0x67,  /* [7667] */
    (xdc_Char)0x73,  /* [7668] */
    (xdc_Char)0x0,  /* [7669] */
    (xdc_Char)0x45,  /* [7670] */
    (xdc_Char)0x72,  /* [7671] */
    (xdc_Char)0x72,  /* [7672] */
    (xdc_Char)0x6f,  /* [7673] */
    (xdc_Char)0x72,  /* [7674] */
    (xdc_Char)0x0,  /* [7675] */
    (xdc_Char)0x47,  /* [7676] */
    (xdc_Char)0x61,  /* [7677] */
    (xdc_Char)0x74,  /* [7678] */
    (xdc_Char)0x65,  /* [7679] */
    (xdc_Char)0x0,  /* [7680] */
    (xdc_Char)0x4c,  /* [7681] */
    (xdc_Char)0x6f,  /* [7682] */
    (xdc_Char)0x67,  /* [7683] */
    (xdc_Char)0x0,  /* [7684] */
    (xdc_Char)0x4d,  /* [7685] */
    (xdc_Char)0x61,  /* [7686] */
    (xdc_Char)0x69,  /* [7687] */
    (xdc_Char)0x6e,  /* [7688] */
    (xdc_Char)0x0,  /* [7689] */
    (xdc_Char)0x4d,  /* [7690] */
    (xdc_Char)0x65,  /* [7691] */
    (xdc_Char)0x6d,  /* [7692] */
    (xdc_Char)0x6f,  /* [7693] */
    (xdc_Char)0x72,  /* [7694] */
    (xdc_Char)0x79,  /* [7695] */
    (xdc_Char)0x0,  /* [7696] */
    (xdc_Char)0x52,  /* [7697] */
    (xdc_Char)0x65,  /* [7698] */
    (xdc_Char)0x67,  /* [7699] */
    (xdc_Char)0x69,  /* [7700] */
    (xdc_Char)0x73,  /* [7701] */
    (xdc_Char)0x74,  /* [7702] */
    (xdc_Char)0x72,  /* [7703] */
    (xdc_Char)0x79,  /* [7704] */
    (xdc_Char)0x0,  /* [7705] */
    (xdc_Char)0x53,  /* [7706] */
    (xdc_Char)0x74,  /* [7707] */
    (xdc_Char)0x61,  /* [7708] */
    (xdc_Char)0x72,  /* [7709] */
    (xdc_Char)0x74,  /* [7710] */
    (xdc_Char)0x75,  /* [7711] */
    (xdc_Char)0x70,  /* [7712] */
    (xdc_Char)0x0,  /* [7713] */
    (xdc_Char)0x53,  /* [7714] */
    (xdc_Char)0x79,  /* [7715] */
    (xdc_Char)0x73,  /* [7716] */
    (xdc_Char)0x74,  /* [7717] */
    (xdc_Char)0x65,  /* [7718] */
    (xdc_Char)0x6d,  /* [7719] */
    (xdc_Char)0x0,  /* [7720] */
    (xdc_Char)0x53,  /* [7721] */
    (xdc_Char)0x79,  /* [7722] */
    (xdc_Char)0x73,  /* [7723] */
    (xdc_Char)0x4d,  /* [7724] */
    (xdc_Char)0x69,  /* [7725] */
    (xdc_Char)0x6e,  /* [7726] */
    (xdc_Char)0x0,  /* [7727] */
    (xdc_Char)0x54,  /* [7728] */
    (xdc_Char)0x65,  /* [7729] */
    (xdc_Char)0x78,  /* [7730] */
    (xdc_Char)0x74,  /* [7731] */
    (xdc_Char)0x0,  /* [7732] */
    (xdc_Char)0x54,  /* [7733] */
    (xdc_Char)0x69,  /* [7734] */
    (xdc_Char)0x6d,  /* [7735] */
    (xdc_Char)0x65,  /* [7736] */
    (xdc_Char)0x73,  /* [7737] */
    (xdc_Char)0x74,  /* [7738] */
    (xdc_Char)0x61,  /* [7739] */
    (xdc_Char)0x6d,  /* [7740] */
    (xdc_Char)0x70,  /* [7741] */
    (xdc_Char)0x0,  /* [7742] */
    (xdc_Char)0x54,  /* [7743] */
    (xdc_Char)0x69,  /* [7744] */
    (xdc_Char)0x6d,  /* [7745] */
    (xdc_Char)0x65,  /* [7746] */
    (xdc_Char)0x73,  /* [7747] */
    (xdc_Char)0x74,  /* [7748] */
    (xdc_Char)0x61,  /* [7749] */
    (xdc_Char)0x6d,  /* [7750] */
    (xdc_Char)0x70,  /* [7751] */
    (xdc_Char)0x4e,  /* [7752] */
    (xdc_Char)0x75,  /* [7753] */
    (xdc_Char)0x6c,  /* [7754] */
    (xdc_Char)0x6c,  /* [7755] */
    (xdc_Char)0x0,  /* [7756] */
    (xdc_Char)0x54,  /* [7757] */
    (xdc_Char)0x79,  /* [7758] */
    (xdc_Char)0x70,  /* [7759] */
    (xdc_Char)0x65,  /* [7760] */
    (xdc_Char)0x73,  /* [7761] */
    (xdc_Char)0x0,  /* [7762] */
    (xdc_Char)0x74,  /* [7763] */
    (xdc_Char)0x69,  /* [7764] */
    (xdc_Char)0x2e,  /* [7765] */
    (xdc_Char)0x0,  /* [7766] */
    (xdc_Char)0x75,  /* [7767] */
    (xdc_Char)0x69,  /* [7768] */
    (xdc_Char)0x61,  /* [7769] */
    (xdc_Char)0x2e,  /* [7770] */
    (xdc_Char)0x0,  /* [7771] */
    (xdc_Char)0x65,  /* [7772] */
    (xdc_Char)0x76,  /* [7773] */
    (xdc_Char)0x65,  /* [7774] */
    (xdc_Char)0x6e,  /* [7775] */
    (xdc_Char)0x74,  /* [7776] */
    (xdc_Char)0x73,  /* [7777] */
    (xdc_Char)0x2e,  /* [7778] */
    (xdc_Char)0x0,  /* [7779] */
    (xdc_Char)0x44,  /* [7780] */
    (xdc_Char)0x76,  /* [7781] */
    (xdc_Char)0x74,  /* [7782] */
    (xdc_Char)0x54,  /* [7783] */
    (xdc_Char)0x79,  /* [7784] */
    (xdc_Char)0x70,  /* [7785] */
    (xdc_Char)0x65,  /* [7786] */
    (xdc_Char)0x73,  /* [7787] */
    (xdc_Char)0x0,  /* [7788] */
    (xdc_Char)0x55,  /* [7789] */
    (xdc_Char)0x49,  /* [7790] */
    (xdc_Char)0x41,  /* [7791] */
    (xdc_Char)0x45,  /* [7792] */
    (xdc_Char)0x72,  /* [7793] */
    (xdc_Char)0x72,  /* [7794] */
    (xdc_Char)0x0,  /* [7795] */
    (xdc_Char)0x55,  /* [7796] */
    (xdc_Char)0x49,  /* [7797] */
    (xdc_Char)0x41,  /* [7798] */
    (xdc_Char)0x45,  /* [7799] */
    (xdc_Char)0x76,  /* [7800] */
    (xdc_Char)0x74,  /* [7801] */
    (xdc_Char)0x0,  /* [7802] */
    (xdc_Char)0x45,  /* [7803] */
    (xdc_Char)0x76,  /* [7804] */
    (xdc_Char)0x65,  /* [7805] */
    (xdc_Char)0x6e,  /* [7806] */
    (xdc_Char)0x74,  /* [7807] */
    (xdc_Char)0x48,  /* [7808] */
    (xdc_Char)0x64,  /* [7809] */
    (xdc_Char)0x72,  /* [7810] */
    (xdc_Char)0x0,  /* [7811] */
    (xdc_Char)0x51,  /* [7812] */
    (xdc_Char)0x75,  /* [7813] */
    (xdc_Char)0x65,  /* [7814] */
    (xdc_Char)0x75,  /* [7815] */
    (xdc_Char)0x65,  /* [7816] */
    (xdc_Char)0x44,  /* [7817] */
    (xdc_Char)0x65,  /* [7818] */
    (xdc_Char)0x73,  /* [7819] */
    (xdc_Char)0x63,  /* [7820] */
    (xdc_Char)0x72,  /* [7821] */
    (xdc_Char)0x69,  /* [7822] */
    (xdc_Char)0x70,  /* [7823] */
    (xdc_Char)0x74,  /* [7824] */
    (xdc_Char)0x6f,  /* [7825] */
    (xdc_Char)0x72,  /* [7826] */
    (xdc_Char)0x0,  /* [7827] */
    (xdc_Char)0x55,  /* [7828] */
    (xdc_Char)0x49,  /* [7829] */
    (xdc_Char)0x41,  /* [7830] */
    (xdc_Char)0x4d,  /* [7831] */
    (xdc_Char)0x65,  /* [7832] */
    (xdc_Char)0x74,  /* [7833] */
    (xdc_Char)0x61,  /* [7834] */
    (xdc_Char)0x44,  /* [7835] */
    (xdc_Char)0x61,  /* [7836] */
    (xdc_Char)0x74,  /* [7837] */
    (xdc_Char)0x61,  /* [7838] */
    (xdc_Char)0x0,  /* [7839] */
    (xdc_Char)0x73,  /* [7840] */
    (xdc_Char)0x79,  /* [7841] */
    (xdc_Char)0x73,  /* [7842] */
    (xdc_Char)0x62,  /* [7843] */
    (xdc_Char)0x69,  /* [7844] */
    (xdc_Char)0x6f,  /* [7845] */
    (xdc_Char)0x73,  /* [7846] */
    (xdc_Char)0x2e,  /* [7847] */
    (xdc_Char)0x0,  /* [7848] */
    (xdc_Char)0x6b,  /* [7849] */
    (xdc_Char)0x6e,  /* [7850] */
    (xdc_Char)0x6c,  /* [7851] */
    (xdc_Char)0x2e,  /* [7852] */
    (xdc_Char)0x0,  /* [7853] */
    (xdc_Char)0x43,  /* [7854] */
    (xdc_Char)0x6c,  /* [7855] */
    (xdc_Char)0x6f,  /* [7856] */
    (xdc_Char)0x63,  /* [7857] */
    (xdc_Char)0x6b,  /* [7858] */
    (xdc_Char)0x0,  /* [7859] */
    (xdc_Char)0x49,  /* [7860] */
    (xdc_Char)0x64,  /* [7861] */
    (xdc_Char)0x6c,  /* [7862] */
    (xdc_Char)0x65,  /* [7863] */
    (xdc_Char)0x0,  /* [7864] */
    (xdc_Char)0x49,  /* [7865] */
    (xdc_Char)0x6e,  /* [7866] */
    (xdc_Char)0x74,  /* [7867] */
    (xdc_Char)0x72,  /* [7868] */
    (xdc_Char)0x69,  /* [7869] */
    (xdc_Char)0x6e,  /* [7870] */
    (xdc_Char)0x73,  /* [7871] */
    (xdc_Char)0x69,  /* [7872] */
    (xdc_Char)0x63,  /* [7873] */
    (xdc_Char)0x73,  /* [7874] */
    (xdc_Char)0x0,  /* [7875] */
    (xdc_Char)0x45,  /* [7876] */
    (xdc_Char)0x76,  /* [7877] */
    (xdc_Char)0x65,  /* [7878] */
    (xdc_Char)0x6e,  /* [7879] */
    (xdc_Char)0x74,  /* [7880] */
    (xdc_Char)0x0,  /* [7881] */
    (xdc_Char)0x51,  /* [7882] */
    (xdc_Char)0x75,  /* [7883] */
    (xdc_Char)0x65,  /* [7884] */
    (xdc_Char)0x75,  /* [7885] */
    (xdc_Char)0x65,  /* [7886] */
    (xdc_Char)0x0,  /* [7887] */
    (xdc_Char)0x53,  /* [7888] */
    (xdc_Char)0x65,  /* [7889] */
    (xdc_Char)0x6d,  /* [7890] */
    (xdc_Char)0x61,  /* [7891] */
    (xdc_Char)0x70,  /* [7892] */
    (xdc_Char)0x68,  /* [7893] */
    (xdc_Char)0x6f,  /* [7894] */
    (xdc_Char)0x72,  /* [7895] */
    (xdc_Char)0x65,  /* [7896] */
    (xdc_Char)0x0,  /* [7897] */
    (xdc_Char)0x53,  /* [7898] */
    (xdc_Char)0x77,  /* [7899] */
    (xdc_Char)0x69,  /* [7900] */
    (xdc_Char)0x0,  /* [7901] */
    (xdc_Char)0x54,  /* [7902] */
    (xdc_Char)0x61,  /* [7903] */
    (xdc_Char)0x73,  /* [7904] */
    (xdc_Char)0x6b,  /* [7905] */
    (xdc_Char)0x0,  /* [7906] */
    (xdc_Char)0x68,  /* [7907] */
    (xdc_Char)0x61,  /* [7908] */
    (xdc_Char)0x6c,  /* [7909] */
    (xdc_Char)0x2e,  /* [7910] */
    (xdc_Char)0x0,  /* [7911] */
    (xdc_Char)0x48,  /* [7912] */
    (xdc_Char)0x77,  /* [7913] */
    (xdc_Char)0x69,  /* [7914] */
    (xdc_Char)0x0,  /* [7915] */
    (xdc_Char)0x42,  /* [7916] */
    (xdc_Char)0x49,  /* [7917] */
    (xdc_Char)0x4f,  /* [7918] */
    (xdc_Char)0x53,  /* [7919] */
    (xdc_Char)0x0,  /* [7920] */
    (xdc_Char)0x66,  /* [7921] */
    (xdc_Char)0x61,  /* [7922] */
    (xdc_Char)0x6d,  /* [7923] */
    (xdc_Char)0x69,  /* [7924] */
    (xdc_Char)0x6c,  /* [7925] */
    (xdc_Char)0x79,  /* [7926] */
    (xdc_Char)0x2e,  /* [7927] */
    (xdc_Char)0x0,  /* [7928] */
    (xdc_Char)0x61,  /* [7929] */
    (xdc_Char)0x72,  /* [7930] */
    (xdc_Char)0x6d,  /* [7931] */
    (xdc_Char)0x2e,  /* [7932] */
    (xdc_Char)0x0,  /* [7933] */
    (xdc_Char)0x6d,  /* [7934] */
    (xdc_Char)0x73,  /* [7935] */
    (xdc_Char)0x70,  /* [7936] */
    (xdc_Char)0x34,  /* [7937] */
    (xdc_Char)0x33,  /* [7938] */
    (xdc_Char)0x32,  /* [7939] */
    (xdc_Char)0x65,  /* [7940] */
    (xdc_Char)0x34,  /* [7941] */
    (xdc_Char)0x2e,  /* [7942] */
    (xdc_Char)0x0,  /* [7943] */
    (xdc_Char)0x69,  /* [7944] */
    (xdc_Char)0x6e,  /* [7945] */
    (xdc_Char)0x69,  /* [7946] */
    (xdc_Char)0x74,  /* [7947] */
    (xdc_Char)0x2e,  /* [7948] */
    (xdc_Char)0x0,  /* [7949] */
    (xdc_Char)0x42,  /* [7950] */
    (xdc_Char)0x6f,  /* [7951] */
    (xdc_Char)0x6f,  /* [7952] */
    (xdc_Char)0x74,  /* [7953] */
    (xdc_Char)0x0,  /* [7954] */
    (xdc_Char)0x6d,  /* [7955] */
    (xdc_Char)0x33,  /* [7956] */
    (xdc_Char)0x2e,  /* [7957] */
    (xdc_Char)0x0,  /* [7958] */
    (xdc_Char)0x49,  /* [7959] */
    (xdc_Char)0x6e,  /* [7960] */
    (xdc_Char)0x74,  /* [7961] */
    (xdc_Char)0x72,  /* [7962] */
    (xdc_Char)0x69,  /* [7963] */
    (xdc_Char)0x6e,  /* [7964] */
    (xdc_Char)0x73,  /* [7965] */
    (xdc_Char)0x69,  /* [7966] */
    (xdc_Char)0x63,  /* [7967] */
    (xdc_Char)0x73,  /* [7968] */
    (xdc_Char)0x53,  /* [7969] */
    (xdc_Char)0x75,  /* [7970] */
    (xdc_Char)0x70,  /* [7971] */
    (xdc_Char)0x70,  /* [7972] */
    (xdc_Char)0x6f,  /* [7973] */
    (xdc_Char)0x72,  /* [7974] */
    (xdc_Char)0x74,  /* [7975] */
    (xdc_Char)0x0,  /* [7976] */
    (xdc_Char)0x54,  /* [7977] */
    (xdc_Char)0x61,  /* [7978] */
    (xdc_Char)0x73,  /* [7979] */
    (xdc_Char)0x6b,  /* [7980] */
    (xdc_Char)0x53,  /* [7981] */
    (xdc_Char)0x75,  /* [7982] */
    (xdc_Char)0x70,  /* [7983] */
    (xdc_Char)0x70,  /* [7984] */
    (xdc_Char)0x6f,  /* [7985] */
    (xdc_Char)0x72,  /* [7986] */
    (xdc_Char)0x74,  /* [7987] */
    (xdc_Char)0x0,  /* [7988] */
    (xdc_Char)0x68,  /* [7989] */
    (xdc_Char)0x65,  /* [7990] */
    (xdc_Char)0x61,  /* [7991] */
    (xdc_Char)0x70,  /* [7992] */
    (xdc_Char)0x73,  /* [7993] */
    (xdc_Char)0x2e,  /* [7994] */
    (xdc_Char)0x0,  /* [7995] */
    (xdc_Char)0x48,  /* [7996] */
    (xdc_Char)0x65,  /* [7997] */
    (xdc_Char)0x61,  /* [7998] */
    (xdc_Char)0x70,  /* [7999] */
    (xdc_Char)0x4d,  /* [8000] */
    (xdc_Char)0x65,  /* [8001] */
    (xdc_Char)0x6d,  /* [8002] */
    (xdc_Char)0x0,  /* [8003] */
    (xdc_Char)0x75,  /* [8004] */
    (xdc_Char)0x74,  /* [8005] */
    (xdc_Char)0x69,  /* [8006] */
    (xdc_Char)0x6c,  /* [8007] */
    (xdc_Char)0x73,  /* [8008] */
    (xdc_Char)0x2e,  /* [8009] */
    (xdc_Char)0x0,  /* [8010] */
    (xdc_Char)0x4c,  /* [8011] */
    (xdc_Char)0x6f,  /* [8012] */
    (xdc_Char)0x61,  /* [8013] */
    (xdc_Char)0x64,  /* [8014] */
    (xdc_Char)0x0,  /* [8015] */
    (xdc_Char)0x67,  /* [8016] */
    (xdc_Char)0x61,  /* [8017] */
    (xdc_Char)0x74,  /* [8018] */
    (xdc_Char)0x65,  /* [8019] */
    (xdc_Char)0x73,  /* [8020] */
    (xdc_Char)0x2e,  /* [8021] */
    (xdc_Char)0x0,  /* [8022] */
    (xdc_Char)0x47,  /* [8023] */
    (xdc_Char)0x61,  /* [8024] */
    (xdc_Char)0x74,  /* [8025] */
    (xdc_Char)0x65,  /* [8026] */
    (xdc_Char)0x48,  /* [8027] */
    (xdc_Char)0x77,  /* [8028] */
    (xdc_Char)0x69,  /* [8029] */
    (xdc_Char)0x0,  /* [8030] */
    (xdc_Char)0x47,  /* [8031] */
    (xdc_Char)0x61,  /* [8032] */
    (xdc_Char)0x74,  /* [8033] */
    (xdc_Char)0x65,  /* [8034] */
    (xdc_Char)0x4d,  /* [8035] */
    (xdc_Char)0x75,  /* [8036] */
    (xdc_Char)0x74,  /* [8037] */
    (xdc_Char)0x65,  /* [8038] */
    (xdc_Char)0x78,  /* [8039] */
    (xdc_Char)0x0,  /* [8040] */
    (xdc_Char)0x6c,  /* [8041] */
    (xdc_Char)0x6d,  /* [8042] */
    (xdc_Char)0x34,  /* [8043] */
    (xdc_Char)0x2e,  /* [8044] */
    (xdc_Char)0x0,  /* [8045] */
    (xdc_Char)0x54,  /* [8046] */
    (xdc_Char)0x69,  /* [8047] */
    (xdc_Char)0x6d,  /* [8048] */
    (xdc_Char)0x65,  /* [8049] */
    (xdc_Char)0x73,  /* [8050] */
    (xdc_Char)0x74,  /* [8051] */
    (xdc_Char)0x61,  /* [8052] */
    (xdc_Char)0x6d,  /* [8053] */
    (xdc_Char)0x70,  /* [8054] */
    (xdc_Char)0x50,  /* [8055] */
    (xdc_Char)0x72,  /* [8056] */
    (xdc_Char)0x6f,  /* [8057] */
    (xdc_Char)0x76,  /* [8058] */
    (xdc_Char)0x69,  /* [8059] */
    (xdc_Char)0x64,  /* [8060] */
    (xdc_Char)0x65,  /* [8061] */
    (xdc_Char)0x72,  /* [8062] */
    (xdc_Char)0x0,  /* [8063] */
    (xdc_Char)0x54,  /* [8064] */
    (xdc_Char)0x69,  /* [8065] */
    (xdc_Char)0x6d,  /* [8066] */
    (xdc_Char)0x65,  /* [8067] */
    (xdc_Char)0x72,  /* [8068] */
    (xdc_Char)0x0,  /* [8069] */
    (xdc_Char)0x6c,  /* [8070] */
    (xdc_Char)0x6f,  /* [8071] */
    (xdc_Char)0x67,  /* [8072] */
    (xdc_Char)0x67,  /* [8073] */
    (xdc_Char)0x65,  /* [8074] */
    (xdc_Char)0x72,  /* [8075] */
    (xdc_Char)0x73,  /* [8076] */
    (xdc_Char)0x2e,  /* [8077] */
    (xdc_Char)0x0,  /* [8078] */
    (xdc_Char)0x4c,  /* [8079] */
    (xdc_Char)0x6f,  /* [8080] */
    (xdc_Char)0x67,  /* [8081] */
    (xdc_Char)0x67,  /* [8082] */
    (xdc_Char)0x65,  /* [8083] */
    (xdc_Char)0x72,  /* [8084] */
    (xdc_Char)0x53,  /* [8085] */
    (xdc_Char)0x74,  /* [8086] */
    (xdc_Char)0x6f,  /* [8087] */
    (xdc_Char)0x70,  /* [8088] */
    (xdc_Char)0x4d,  /* [8089] */
    (xdc_Char)0x6f,  /* [8090] */
    (xdc_Char)0x64,  /* [8091] */
    (xdc_Char)0x65,  /* [8092] */
    (xdc_Char)0x0,  /* [8093] */
    (xdc_Char)0x74,  /* [8094] */
    (xdc_Char)0x69,  /* [8095] */
    (xdc_Char)0x2e,  /* [8096] */
    (xdc_Char)0x73,  /* [8097] */
    (xdc_Char)0x79,  /* [8098] */
    (xdc_Char)0x73,  /* [8099] */
    (xdc_Char)0x62,  /* [8100] */
    (xdc_Char)0x69,  /* [8101] */
    (xdc_Char)0x6f,  /* [8102] */
    (xdc_Char)0x73,  /* [8103] */
    (xdc_Char)0x2e,  /* [8104] */
    (xdc_Char)0x6b,  /* [8105] */
    (xdc_Char)0x6e,  /* [8106] */
    (xdc_Char)0x6c,  /* [8107] */
    (xdc_Char)0x2e,  /* [8108] */
    (xdc_Char)0x54,  /* [8109] */
    (xdc_Char)0x61,  /* [8110] */
    (xdc_Char)0x73,  /* [8111] */
    (xdc_Char)0x6b,  /* [8112] */
    (xdc_Char)0x2e,  /* [8113] */
    (xdc_Char)0x49,  /* [8114] */
    (xdc_Char)0x64,  /* [8115] */
    (xdc_Char)0x6c,  /* [8116] */
    (xdc_Char)0x65,  /* [8117] */
    (xdc_Char)0x54,  /* [8118] */
    (xdc_Char)0x61,  /* [8119] */
    (xdc_Char)0x73,  /* [8120] */
    (xdc_Char)0x6b,  /* [8121] */
    (xdc_Char)0x0,  /* [8122] */
    (xdc_Char)0x4c,  /* [8123] */
    (xdc_Char)0x6f,  /* [8124] */
    (xdc_Char)0x61,  /* [8125] */
    (xdc_Char)0x64,  /* [8126] */
    (xdc_Char)0x20,  /* [8127] */
    (xdc_Char)0x4c,  /* [8128] */
    (xdc_Char)0x6f,  /* [8129] */
    (xdc_Char)0x67,  /* [8130] */
    (xdc_Char)0x67,  /* [8131] */
    (xdc_Char)0x65,  /* [8132] */
    (xdc_Char)0x72,  /* [8133] */
    (xdc_Char)0x0,  /* [8134] */
    (xdc_Char)0x4d,  /* [8135] */
    (xdc_Char)0x61,  /* [8136] */
    (xdc_Char)0x69,  /* [8137] */
    (xdc_Char)0x6e,  /* [8138] */
    (xdc_Char)0x20,  /* [8139] */
    (xdc_Char)0x4c,  /* [8140] */
    (xdc_Char)0x6f,  /* [8141] */
    (xdc_Char)0x67,  /* [8142] */
    (xdc_Char)0x67,  /* [8143] */
    (xdc_Char)0x65,  /* [8144] */
    (xdc_Char)0x72,  /* [8145] */
    (xdc_Char)0x0,  /* [8146] */
    (xdc_Char)0x53,  /* [8147] */
    (xdc_Char)0x59,  /* [8148] */
    (xdc_Char)0x53,  /* [8149] */
    (xdc_Char)0x42,  /* [8150] */
    (xdc_Char)0x49,  /* [8151] */
    (xdc_Char)0x4f,  /* [8152] */
    (xdc_Char)0x53,  /* [8153] */
    (xdc_Char)0x20,  /* [8154] */
    (xdc_Char)0x53,  /* [8155] */
    (xdc_Char)0x79,  /* [8156] */
    (xdc_Char)0x73,  /* [8157] */
    (xdc_Char)0x74,  /* [8158] */
    (xdc_Char)0x65,  /* [8159] */
    (xdc_Char)0x6d,  /* [8160] */
    (xdc_Char)0x20,  /* [8161] */
    (xdc_Char)0x4c,  /* [8162] */
    (xdc_Char)0x6f,  /* [8163] */
    (xdc_Char)0x67,  /* [8164] */
    (xdc_Char)0x67,  /* [8165] */
    (xdc_Char)0x65,  /* [8166] */
    (xdc_Char)0x72,  /* [8167] */
    (xdc_Char)0x0,  /* [8168] */
};

/* --> xdc_runtime_Text_nodeTab__A */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__A, ".const:xdc_runtime_Text_nodeTab__A");
const __T1_xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__A[62] = {
    {
        (xdc_Bits16)0x0U,  /* left */
        (xdc_Bits16)0x0U,  /* right */
    },  /* [0] */
    {
        (xdc_Bits16)0x1dcdU,  /* left */
        (xdc_Bits16)0x1dd2U,  /* right */
    },  /* [1] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1ddbU,  /* right */
    },  /* [2] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1de2U,  /* right */
    },  /* [3] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1de7U,  /* right */
    },  /* [4] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1df0U,  /* right */
    },  /* [5] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1df6U,  /* right */
    },  /* [6] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1dfcU,  /* right */
    },  /* [7] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e01U,  /* right */
    },  /* [8] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e05U,  /* right */
    },  /* [9] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e0aU,  /* right */
    },  /* [10] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e11U,  /* right */
    },  /* [11] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e1aU,  /* right */
    },  /* [12] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e22U,  /* right */
    },  /* [13] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e29U,  /* right */
    },  /* [14] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e30U,  /* right */
    },  /* [15] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e35U,  /* right */
    },  /* [16] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e3fU,  /* right */
    },  /* [17] */
    {
        (xdc_Bits16)0x8001U,  /* left */
        (xdc_Bits16)0x1e4dU,  /* right */
    },  /* [18] */
    {
        (xdc_Bits16)0x1e53U,  /* left */
        (xdc_Bits16)0x1e57U,  /* right */
    },  /* [19] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1e5cU,  /* right */
    },  /* [20] */
    {
        (xdc_Bits16)0x8014U,  /* left */
        (xdc_Bits16)0x1e64U,  /* right */
    },  /* [21] */
    {
        (xdc_Bits16)0x8014U,  /* left */
        (xdc_Bits16)0x1e6dU,  /* right */
    },  /* [22] */
    {
        (xdc_Bits16)0x8014U,  /* left */
        (xdc_Bits16)0x1e74U,  /* right */
    },  /* [23] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1dd2U,  /* right */
    },  /* [24] */
    {
        (xdc_Bits16)0x8018U,  /* left */
        (xdc_Bits16)0x1e7bU,  /* right */
    },  /* [25] */
    {
        (xdc_Bits16)0x8018U,  /* left */
        (xdc_Bits16)0x1e84U,  /* right */
    },  /* [26] */
    {
        (xdc_Bits16)0x8018U,  /* left */
        (xdc_Bits16)0x1e94U,  /* right */
    },  /* [27] */
    {
        (xdc_Bits16)0x1e53U,  /* left */
        (xdc_Bits16)0x1ea0U,  /* right */
    },  /* [28] */
    {
        (xdc_Bits16)0x801cU,  /* left */
        (xdc_Bits16)0x1ea9U,  /* right */
    },  /* [29] */
    {
        (xdc_Bits16)0x801dU,  /* left */
        (xdc_Bits16)0x1eaeU,  /* right */
    },  /* [30] */
    {
        (xdc_Bits16)0x801dU,  /* left */
        (xdc_Bits16)0x1eb4U,  /* right */
    },  /* [31] */
    {
        (xdc_Bits16)0x801dU,  /* left */
        (xdc_Bits16)0x1eb9U,  /* right */
    },  /* [32] */
    {
        (xdc_Bits16)0x801dU,  /* left */
        (xdc_Bits16)0x1ec4U,  /* right */
    },  /* [33] */
    {
        (xdc_Bits16)0x801dU,  /* left */
        (xdc_Bits16)0x1ecaU,  /* right */
    },  /* [34] */
    {
        (xdc_Bits16)0x801dU,  /* left */
        (xdc_Bits16)0x1ed0U,  /* right */
    },  /* [35] */
    {
        (xdc_Bits16)0x801dU,  /* left */
        (xdc_Bits16)0x1edaU,  /* right */
    },  /* [36] */
    {
        (xdc_Bits16)0x801dU,  /* left */
        (xdc_Bits16)0x1edeU,  /* right */
    },  /* [37] */
    {
        (xdc_Bits16)0x801cU,  /* left */
        (xdc_Bits16)0x1ee3U,  /* right */
    },  /* [38] */
    {
        (xdc_Bits16)0x8026U,  /* left */
        (xdc_Bits16)0x1ee8U,  /* right */
    },  /* [39] */
    {
        (xdc_Bits16)0x801cU,  /* left */
        (xdc_Bits16)0x1eecU,  /* right */
    },  /* [40] */
    {
        (xdc_Bits16)0x801cU,  /* left */
        (xdc_Bits16)0x1ef1U,  /* right */
    },  /* [41] */
    {
        (xdc_Bits16)0x8029U,  /* left */
        (xdc_Bits16)0x1ef9U,  /* right */
    },  /* [42] */
    {
        (xdc_Bits16)0x802aU,  /* left */
        (xdc_Bits16)0x1efeU,  /* right */
    },  /* [43] */
    {
        (xdc_Bits16)0x802bU,  /* left */
        (xdc_Bits16)0x1f08U,  /* right */
    },  /* [44] */
    {
        (xdc_Bits16)0x802cU,  /* left */
        (xdc_Bits16)0x1f0eU,  /* right */
    },  /* [45] */
    {
        (xdc_Bits16)0x802aU,  /* left */
        (xdc_Bits16)0x1f13U,  /* right */
    },  /* [46] */
    {
        (xdc_Bits16)0x802eU,  /* left */
        (xdc_Bits16)0x1ee8U,  /* right */
    },  /* [47] */
    {
        (xdc_Bits16)0x802eU,  /* left */
        (xdc_Bits16)0x1f17U,  /* right */
    },  /* [48] */
    {
        (xdc_Bits16)0x802eU,  /* left */
        (xdc_Bits16)0x1f29U,  /* right */
    },  /* [49] */
    {
        (xdc_Bits16)0x801cU,  /* left */
        (xdc_Bits16)0x1f35U,  /* right */
    },  /* [50] */
    {
        (xdc_Bits16)0x8032U,  /* left */
        (xdc_Bits16)0x1f3cU,  /* right */
    },  /* [51] */
    {
        (xdc_Bits16)0x801cU,  /* left */
        (xdc_Bits16)0x1f44U,  /* right */
    },  /* [52] */
    {
        (xdc_Bits16)0x8034U,  /* left */
        (xdc_Bits16)0x1f4bU,  /* right */
    },  /* [53] */
    {
        (xdc_Bits16)0x801cU,  /* left */
        (xdc_Bits16)0x1f50U,  /* right */
    },  /* [54] */
    {
        (xdc_Bits16)0x8036U,  /* left */
        (xdc_Bits16)0x1f57U,  /* right */
    },  /* [55] */
    {
        (xdc_Bits16)0x8036U,  /* left */
        (xdc_Bits16)0x1f5fU,  /* right */
    },  /* [56] */
    {
        (xdc_Bits16)0x802aU,  /* left */
        (xdc_Bits16)0x1f69U,  /* right */
    },  /* [57] */
    {
        (xdc_Bits16)0x8039U,  /* left */
        (xdc_Bits16)0x1f6eU,  /* right */
    },  /* [58] */
    {
        (xdc_Bits16)0x8039U,  /* left */
        (xdc_Bits16)0x1f80U,  /* right */
    },  /* [59] */
    {
        (xdc_Bits16)0x8013U,  /* left */
        (xdc_Bits16)0x1f86U,  /* right */
    },  /* [60] */
    {
        (xdc_Bits16)0x803cU,  /* left */
        (xdc_Bits16)0x1f8fU,  /* right */
    },  /* [61] */
};

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsEnabled__C, ".const:xdc_runtime_Text_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsEnabled xdc_runtime_Text_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsIncluded__C, ".const:xdc_runtime_Text_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsIncluded xdc_runtime_Text_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__diagsMask__C, ".const:xdc_runtime_Text_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Text_Module__diagsMask xdc_runtime_Text_Module__diagsMask__C = ((const CT__xdc_runtime_Text_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gateObj__C, ".const:xdc_runtime_Text_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__gateObj xdc_runtime_Text_Module__gateObj__C = ((const CT__xdc_runtime_Text_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__gatePrms__C, ".const:xdc_runtime_Text_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Text_Module__gatePrms xdc_runtime_Text_Module__gatePrms__C = ((const CT__xdc_runtime_Text_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__id__C, ".const:xdc_runtime_Text_Module__id__C");
__FAR__ const CT__xdc_runtime_Text_Module__id xdc_runtime_Text_Module__id__C = (xdc_Bits16)0x800fU;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerDefined__C, ".const:xdc_runtime_Text_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerDefined xdc_runtime_Text_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerObj__C, ".const:xdc_runtime_Text_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerObj xdc_runtime_Text_Module__loggerObj__C = ((const CT__xdc_runtime_Text_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn0__C, ".const:xdc_runtime_Text_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn0 xdc_runtime_Text_Module__loggerFxn0__C = ((const CT__xdc_runtime_Text_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn1__C, ".const:xdc_runtime_Text_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn1 xdc_runtime_Text_Module__loggerFxn1__C = ((const CT__xdc_runtime_Text_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn2__C, ".const:xdc_runtime_Text_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn2 xdc_runtime_Text_Module__loggerFxn2__C = ((const CT__xdc_runtime_Text_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn4__C, ".const:xdc_runtime_Text_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn4 xdc_runtime_Text_Module__loggerFxn4__C = ((const CT__xdc_runtime_Text_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Text_Module__loggerFxn8__C, ".const:xdc_runtime_Text_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Text_Module__loggerFxn8 xdc_runtime_Text_Module__loggerFxn8__C = ((const CT__xdc_runtime_Text_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__count__C, ".const:xdc_runtime_Text_Object__count__C");
__FAR__ const CT__xdc_runtime_Text_Object__count xdc_runtime_Text_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__heap__C, ".const:xdc_runtime_Text_Object__heap__C");
__FAR__ const CT__xdc_runtime_Text_Object__heap xdc_runtime_Text_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__sizeof__C, ".const:xdc_runtime_Text_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Text_Object__sizeof xdc_runtime_Text_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Text_Object__table__C, ".const:xdc_runtime_Text_Object__table__C");
__FAR__ const CT__xdc_runtime_Text_Object__table xdc_runtime_Text_Object__table__C = NULL;

/* nameUnknown__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameUnknown__C, ".const:xdc_runtime_Text_nameUnknown__C");
__FAR__ const CT__xdc_runtime_Text_nameUnknown xdc_runtime_Text_nameUnknown__C = "{unknown-instance-name}";

/* nameEmpty__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameEmpty__C, ".const:xdc_runtime_Text_nameEmpty__C");
__FAR__ const CT__xdc_runtime_Text_nameEmpty xdc_runtime_Text_nameEmpty__C = "{empty-instance-name}";

/* nameStatic__C */
#pragma DATA_SECTION(xdc_runtime_Text_nameStatic__C, ".const:xdc_runtime_Text_nameStatic__C");
__FAR__ const CT__xdc_runtime_Text_nameStatic xdc_runtime_Text_nameStatic__C = "{static-instance-name}";

/* isLoaded__C */
#pragma DATA_SECTION(xdc_runtime_Text_isLoaded__C, ".const:xdc_runtime_Text_isLoaded__C");
__FAR__ const CT__xdc_runtime_Text_isLoaded xdc_runtime_Text_isLoaded__C = 1;

/* charTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_charTab__C, ".const:xdc_runtime_Text_charTab__C");
__FAR__ const CT__xdc_runtime_Text_charTab xdc_runtime_Text_charTab__C = ((const CT__xdc_runtime_Text_charTab)xdc_runtime_Text_charTab__A);

/* nodeTab__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeTab__C, ".const:xdc_runtime_Text_nodeTab__C");
__FAR__ const CT__xdc_runtime_Text_nodeTab xdc_runtime_Text_nodeTab__C = ((const CT__xdc_runtime_Text_nodeTab)xdc_runtime_Text_nodeTab__A);

/* charCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_charCnt__C, ".const:xdc_runtime_Text_charCnt__C");
__FAR__ const CT__xdc_runtime_Text_charCnt xdc_runtime_Text_charCnt__C = (xdc_Int16)0x1fe9;

/* nodeCnt__C */
#pragma DATA_SECTION(xdc_runtime_Text_nodeCnt__C, ".const:xdc_runtime_Text_nodeCnt__C");
__FAR__ const CT__xdc_runtime_Text_nodeCnt xdc_runtime_Text_nodeCnt__C = (xdc_Int16)0x3e;

/* unnamedModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_unnamedModsLastId__C, ".const:xdc_runtime_Text_unnamedModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_unnamedModsLastId xdc_runtime_Text_unnamedModsLastId__C = (xdc_UInt16)0x4000U;

/* registryModsLastId__C */
#pragma DATA_SECTION(xdc_runtime_Text_registryModsLastId__C, ".const:xdc_runtime_Text_registryModsLastId__C");
__FAR__ const CT__xdc_runtime_Text_registryModsLastId xdc_runtime_Text_registryModsLastId__C = (xdc_UInt16)0x7fffU;

/* visitRopeFxn__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn__C, ".const:xdc_runtime_Text_visitRopeFxn__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn xdc_runtime_Text_visitRopeFxn__C = ((const CT__xdc_runtime_Text_visitRopeFxn)(xdc_runtime_Text_visitRope__I));

/* visitRopeFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Text_visitRopeFxn2__C, ".const:xdc_runtime_Text_visitRopeFxn2__C");
__FAR__ const CT__xdc_runtime_Text_visitRopeFxn2 xdc_runtime_Text_visitRopeFxn2__C = ((const CT__xdc_runtime_Text_visitRopeFxn2)(xdc_runtime_Text_visitRope2__I));


/*
 * ======== xdc.runtime.Timestamp INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsEnabled__C, ".const:xdc_runtime_Timestamp_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsEnabled xdc_runtime_Timestamp_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsIncluded__C, ".const:xdc_runtime_Timestamp_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsIncluded xdc_runtime_Timestamp_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__diagsMask__C, ".const:xdc_runtime_Timestamp_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__diagsMask xdc_runtime_Timestamp_Module__diagsMask__C = ((const CT__xdc_runtime_Timestamp_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gateObj__C, ".const:xdc_runtime_Timestamp_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gateObj xdc_runtime_Timestamp_Module__gateObj__C = ((const CT__xdc_runtime_Timestamp_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__gatePrms__C, ".const:xdc_runtime_Timestamp_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__gatePrms xdc_runtime_Timestamp_Module__gatePrms__C = ((const CT__xdc_runtime_Timestamp_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__id__C, ".const:xdc_runtime_Timestamp_Module__id__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__id xdc_runtime_Timestamp_Module__id__C = (xdc_Bits16)0x8010U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerDefined__C, ".const:xdc_runtime_Timestamp_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerDefined xdc_runtime_Timestamp_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerObj__C, ".const:xdc_runtime_Timestamp_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerObj xdc_runtime_Timestamp_Module__loggerObj__C = ((const CT__xdc_runtime_Timestamp_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn0__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn0 xdc_runtime_Timestamp_Module__loggerFxn0__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn1__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn1 xdc_runtime_Timestamp_Module__loggerFxn1__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn2__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn2 xdc_runtime_Timestamp_Module__loggerFxn2__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn4__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn4 xdc_runtime_Timestamp_Module__loggerFxn4__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Module__loggerFxn8__C, ".const:xdc_runtime_Timestamp_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Timestamp_Module__loggerFxn8 xdc_runtime_Timestamp_Module__loggerFxn8__C = ((const CT__xdc_runtime_Timestamp_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__count__C, ".const:xdc_runtime_Timestamp_Object__count__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__count xdc_runtime_Timestamp_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__heap__C, ".const:xdc_runtime_Timestamp_Object__heap__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__heap xdc_runtime_Timestamp_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__sizeof__C, ".const:xdc_runtime_Timestamp_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__sizeof xdc_runtime_Timestamp_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Timestamp_Object__table__C, ".const:xdc_runtime_Timestamp_Object__table__C");
__FAR__ const CT__xdc_runtime_Timestamp_Object__table xdc_runtime_Timestamp_Object__table__C = NULL;


/*
 * ======== xdc.runtime.TimestampNull INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsEnabled__C, ".const:xdc_runtime_TimestampNull_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsEnabled xdc_runtime_TimestampNull_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsIncluded__C, ".const:xdc_runtime_TimestampNull_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsIncluded xdc_runtime_TimestampNull_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__diagsMask__C, ".const:xdc_runtime_TimestampNull_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__diagsMask xdc_runtime_TimestampNull_Module__diagsMask__C = ((const CT__xdc_runtime_TimestampNull_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gateObj__C, ".const:xdc_runtime_TimestampNull_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gateObj xdc_runtime_TimestampNull_Module__gateObj__C = ((const CT__xdc_runtime_TimestampNull_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__gatePrms__C, ".const:xdc_runtime_TimestampNull_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__gatePrms xdc_runtime_TimestampNull_Module__gatePrms__C = ((const CT__xdc_runtime_TimestampNull_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__id__C, ".const:xdc_runtime_TimestampNull_Module__id__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__id xdc_runtime_TimestampNull_Module__id__C = (xdc_Bits16)0x8011U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerDefined__C, ".const:xdc_runtime_TimestampNull_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerDefined xdc_runtime_TimestampNull_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerObj__C, ".const:xdc_runtime_TimestampNull_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerObj xdc_runtime_TimestampNull_Module__loggerObj__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn0__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn0 xdc_runtime_TimestampNull_Module__loggerFxn0__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn1__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn1 xdc_runtime_TimestampNull_Module__loggerFxn1__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn2__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn2 xdc_runtime_TimestampNull_Module__loggerFxn2__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn4__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn4 xdc_runtime_TimestampNull_Module__loggerFxn4__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Module__loggerFxn8__C, ".const:xdc_runtime_TimestampNull_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Module__loggerFxn8 xdc_runtime_TimestampNull_Module__loggerFxn8__C = ((const CT__xdc_runtime_TimestampNull_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__count__C, ".const:xdc_runtime_TimestampNull_Object__count__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__count xdc_runtime_TimestampNull_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__heap__C, ".const:xdc_runtime_TimestampNull_Object__heap__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__heap xdc_runtime_TimestampNull_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__sizeof__C, ".const:xdc_runtime_TimestampNull_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__sizeof xdc_runtime_TimestampNull_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_TimestampNull_Object__table__C, ".const:xdc_runtime_TimestampNull_Object__table__C");
__FAR__ const CT__xdc_runtime_TimestampNull_Object__table xdc_runtime_TimestampNull_Object__table__C = NULL;


/*
 * ======== xdc.runtime.Timestamp_SupportProxy INITIALIZERS ========
 */


/*
 * ======== xdc.runtime.Types INITIALIZERS ========
 */

/* Module__diagsEnabled__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsEnabled__C, ".const:xdc_runtime_Types_Module__diagsEnabled__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsEnabled xdc_runtime_Types_Module__diagsEnabled__C = (xdc_Bits32)0x10U;

/* Module__diagsIncluded__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsIncluded__C, ".const:xdc_runtime_Types_Module__diagsIncluded__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsIncluded xdc_runtime_Types_Module__diagsIncluded__C = (xdc_Bits32)0x10U;

/* Module__diagsMask__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__diagsMask__C, ".const:xdc_runtime_Types_Module__diagsMask__C");
__FAR__ const CT__xdc_runtime_Types_Module__diagsMask xdc_runtime_Types_Module__diagsMask__C = ((const CT__xdc_runtime_Types_Module__diagsMask)NULL);

/* Module__gateObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gateObj__C, ".const:xdc_runtime_Types_Module__gateObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__gateObj xdc_runtime_Types_Module__gateObj__C = ((const CT__xdc_runtime_Types_Module__gateObj)NULL);

/* Module__gatePrms__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__gatePrms__C, ".const:xdc_runtime_Types_Module__gatePrms__C");
__FAR__ const CT__xdc_runtime_Types_Module__gatePrms xdc_runtime_Types_Module__gatePrms__C = ((const CT__xdc_runtime_Types_Module__gatePrms)NULL);

/* Module__id__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__id__C, ".const:xdc_runtime_Types_Module__id__C");
__FAR__ const CT__xdc_runtime_Types_Module__id xdc_runtime_Types_Module__id__C = (xdc_Bits16)0x8012U;

/* Module__loggerDefined__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerDefined__C, ".const:xdc_runtime_Types_Module__loggerDefined__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerDefined xdc_runtime_Types_Module__loggerDefined__C = 0;

/* Module__loggerObj__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerObj__C, ".const:xdc_runtime_Types_Module__loggerObj__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerObj xdc_runtime_Types_Module__loggerObj__C = ((const CT__xdc_runtime_Types_Module__loggerObj)NULL);

/* Module__loggerFxn0__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn0__C, ".const:xdc_runtime_Types_Module__loggerFxn0__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn0 xdc_runtime_Types_Module__loggerFxn0__C = ((const CT__xdc_runtime_Types_Module__loggerFxn0)NULL);

/* Module__loggerFxn1__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn1__C, ".const:xdc_runtime_Types_Module__loggerFxn1__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn1 xdc_runtime_Types_Module__loggerFxn1__C = ((const CT__xdc_runtime_Types_Module__loggerFxn1)NULL);

/* Module__loggerFxn2__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn2__C, ".const:xdc_runtime_Types_Module__loggerFxn2__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn2 xdc_runtime_Types_Module__loggerFxn2__C = ((const CT__xdc_runtime_Types_Module__loggerFxn2)NULL);

/* Module__loggerFxn4__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn4__C, ".const:xdc_runtime_Types_Module__loggerFxn4__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn4 xdc_runtime_Types_Module__loggerFxn4__C = ((const CT__xdc_runtime_Types_Module__loggerFxn4)NULL);

/* Module__loggerFxn8__C */
#pragma DATA_SECTION(xdc_runtime_Types_Module__loggerFxn8__C, ".const:xdc_runtime_Types_Module__loggerFxn8__C");
__FAR__ const CT__xdc_runtime_Types_Module__loggerFxn8 xdc_runtime_Types_Module__loggerFxn8__C = ((const CT__xdc_runtime_Types_Module__loggerFxn8)NULL);

/* Object__count__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__count__C, ".const:xdc_runtime_Types_Object__count__C");
__FAR__ const CT__xdc_runtime_Types_Object__count xdc_runtime_Types_Object__count__C = 0;

/* Object__heap__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__heap__C, ".const:xdc_runtime_Types_Object__heap__C");
__FAR__ const CT__xdc_runtime_Types_Object__heap xdc_runtime_Types_Object__heap__C = NULL;

/* Object__sizeof__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__sizeof__C, ".const:xdc_runtime_Types_Object__sizeof__C");
__FAR__ const CT__xdc_runtime_Types_Object__sizeof xdc_runtime_Types_Object__sizeof__C = 0;

/* Object__table__C */
#pragma DATA_SECTION(xdc_runtime_Types_Object__table__C, ".const:xdc_runtime_Types_Object__table__C");
__FAR__ const CT__xdc_runtime_Types_Object__table xdc_runtime_Types_Object__table__C = NULL;


/*
 * ======== xdc.runtime.System FUNCTION STUBS ========
 */

/* printf_va__E */
xdc_Int xdc_runtime_System_printf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_printf_va__F(fmt, arg__va);
}

/* printf__E */
xdc_Int xdc_runtime_System_printf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_printf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* aprintf_va__E */
xdc_Int xdc_runtime_System_aprintf_va__E( xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_aprintf_va__F(fmt, arg__va);
}

/* aprintf__E */
xdc_Int xdc_runtime_System_aprintf__E( xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_aprintf_va__F(fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* sprintf_va__E */
xdc_Int xdc_runtime_System_sprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);
}

/* sprintf__E */
xdc_Int xdc_runtime_System_sprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_sprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* asprintf_va__E */
xdc_Int xdc_runtime_System_asprintf_va__E( xdc_Char buf[], xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);
}

/* asprintf__E */
xdc_Int xdc_runtime_System_asprintf__E( xdc_Char buf[], xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_asprintf_va__F(buf, fmt, arg__va);

    va_end(arg__va);
    return retval;
}

/* snprintf_va__E */
xdc_Int xdc_runtime_System_snprintf_va__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, va_list arg__va)
{
    return xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);
}

/* snprintf__E */
xdc_Int xdc_runtime_System_snprintf__E( xdc_Char buf[], xdc_SizeT n, xdc_CString fmt, ...)
{
    xdc_Int retval;

    va_list arg__va;
    (void)va_start(arg__va, fmt);
    retval = xdc_runtime_System_snprintf_va__F(buf, n, fmt, arg__va);

    va_end(arg__va);
    return retval;
}


/*
 * ======== ti.sysbios.BIOS_RtsGateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_BIOS_RtsGateProxy_Handle ti_sysbios_BIOS_RtsGateProxy_create( const ti_sysbios_BIOS_RtsGateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_BIOS_RtsGateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_BIOS_RtsGateProxy_delete(ti_sysbios_BIOS_RtsGateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_BIOS_RtsGateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_BIOS_RtsGateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_BIOS_RtsGateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_BIOS_RtsGateProxy_enter__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_BIOS_RtsGateProxy_leave__E( ti_sysbios_BIOS_RtsGateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)inst, key);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.Hwi */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S();
}

/* create */
ti_sysbios_hal_Hwi_HwiProxy_Handle ti_sysbios_hal_Hwi_HwiProxy_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_HwiProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_hal_Hwi_HwiProxy_Handle)ti_sysbios_family_arm_m3_Hwi_create(intNum, hwiFxn, (const ti_sysbios_family_arm_m3_Hwi_Params *)prms, eb);
}

/* delete */
void ti_sysbios_hal_Hwi_HwiProxy_delete(ti_sysbios_hal_Hwi_HwiProxy_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_hal_Hwi_HwiProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_m3_Hwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_HwiProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_m3_Hwi_Handle__label__S(obj, lab);
}

/* getStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth )
{
    return ti_sysbios_family_arm_m3_Hwi_getStackInfo(stkInfo, computeStackDepth);
}

/* getCoreStackInfo__E */
xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_getCoreStackInfo__E( ti_sysbios_interfaces_IHwi_StackInfo *stkInfo, xdc_Bool computeStackDepth, xdc_UInt coreId )
{
    return ti_sysbios_family_arm_m3_Hwi_getCoreStackInfo(stkInfo, computeStackDepth, coreId);
}

/* startup__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_startup__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_startup();
}

/* disable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_disable();
}

/* enable__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enable__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_enable();
}

/* restore__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restore__E( xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restore(key);
}

/* switchFromBootStack__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_switchFromBootStack__E( void )
{
    ti_sysbios_family_arm_m3_Hwi_switchFromBootStack();
}

/* post__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_post__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_post(intNum);
}

/* getTaskSP__E */
xdc_Char *ti_sysbios_hal_Hwi_HwiProxy_getTaskSP__E( void )
{
    return ti_sysbios_family_arm_m3_Hwi_getTaskSP();
}

/* disableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_disableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_disableInterrupt(intNum);
}

/* enableInterrupt__E */
xdc_UInt ti_sysbios_hal_Hwi_HwiProxy_enableInterrupt__E( xdc_UInt intNum )
{
    return ti_sysbios_family_arm_m3_Hwi_enableInterrupt(intNum);
}

/* restoreInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_restoreInterrupt__E( xdc_UInt intNum, xdc_UInt key )
{
    ti_sysbios_family_arm_m3_Hwi_restoreInterrupt(intNum, key);
}

/* clearInterrupt__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_clearInterrupt__E( xdc_UInt intNum )
{
    ti_sysbios_family_arm_m3_Hwi_clearInterrupt(intNum);
}

/* getFunc__E */
ti_sysbios_interfaces_IHwi_FuncPtr ti_sysbios_hal_Hwi_HwiProxy_getFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_m3_Hwi_getFunc((ti_sysbios_family_arm_m3_Hwi_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setFunc__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, ti_sysbios_interfaces_IHwi_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_m3_Hwi_setFunc((ti_sysbios_family_arm_m3_Hwi_Handle)inst, fxn, arg);
}

/* getHookContext__E */
xdc_Ptr ti_sysbios_hal_Hwi_HwiProxy_getHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id )
{
    return ti_sysbios_family_arm_m3_Hwi_getHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)inst, id);
}

/* setHookContext__E */
xdc_Void ti_sysbios_hal_Hwi_HwiProxy_setHookContext__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst, xdc_Int id, xdc_Ptr hookContext )
{
    ti_sysbios_family_arm_m3_Hwi_setHookContext((ti_sysbios_family_arm_m3_Hwi_Handle)inst, id, hookContext);
}

/* getIrp__E */
ti_sysbios_interfaces_IHwi_Irp ti_sysbios_hal_Hwi_HwiProxy_getIrp__E( ti_sysbios_hal_Hwi_HwiProxy_Handle inst )
{
    return ti_sysbios_family_arm_m3_Hwi_getIrp((ti_sysbios_family_arm_m3_Hwi_Handle)inst);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateMutex */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateMutex_Module__startupDone__S();
}

/* create */
ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle ti_sysbios_heaps_HeapMem_Module_GateProxy_create( const ti_sysbios_heaps_HeapMem_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle)ti_sysbios_gates_GateMutex_create((const ti_sysbios_gates_GateMutex_Params *)prms, eb);
}

/* delete */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_delete(ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_heaps_HeapMem_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateMutex_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateMutex_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateMutex_query(qual);
}

/* enter__E */
xdc_IArg ti_sysbios_heaps_HeapMem_Module_GateProxy_enter__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateMutex_enter((ti_sysbios_gates_GateMutex_Handle)inst);
}

/* leave__E */
xdc_Void ti_sysbios_heaps_HeapMem_Module_GateProxy_leave__E( ti_sysbios_heaps_HeapMem_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateMutex_leave((ti_sysbios_gates_GateMutex_Handle)inst, key);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.Timer */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S();
}

/* create */
ti_sysbios_knl_Clock_TimerProxy_Handle ti_sysbios_knl_Clock_TimerProxy_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_knl_Clock_TimerProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_sysbios_knl_Clock_TimerProxy_Handle)ti_sysbios_family_arm_lm4_Timer_create(id, tickFxn, (const ti_sysbios_family_arm_lm4_Timer_Params *)prms, eb);
}

/* delete */
void ti_sysbios_knl_Clock_TimerProxy_delete(ti_sysbios_knl_Clock_TimerProxy_Handle *instp)
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}

/* Params__init__S */
void ti_sysbios_knl_Clock_TimerProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_family_arm_lm4_Timer_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_TimerProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_family_arm_lm4_Timer_Handle__label__S(obj, lab);
}

/* getNumTimers__E */
xdc_UInt ti_sysbios_knl_Clock_TimerProxy_getNumTimers__E( void )
{
    return ti_sysbios_family_arm_lm4_Timer_getNumTimers();
}

/* getStatus__E */
ti_sysbios_interfaces_ITimer_Status ti_sysbios_knl_Clock_TimerProxy_getStatus__E( xdc_UInt id )
{
    return ti_sysbios_family_arm_lm4_Timer_getStatus(id);
}

/* startup__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_startup__E( void )
{
    ti_sysbios_family_arm_lm4_Timer_startup();
}

/* getMaxTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getMaxTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getMaxTicks((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* setNextTick__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setNextTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 ticks )
{
    ti_sysbios_family_arm_lm4_Timer_setNextTick((ti_sysbios_family_arm_lm4_Timer_Handle)inst, ticks);
}

/* start__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_start__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_family_arm_lm4_Timer_start((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* stop__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_stop__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    ti_sysbios_family_arm_lm4_Timer_stop((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* setPeriod__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 period )
{
    ti_sysbios_family_arm_lm4_Timer_setPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)inst, period);
}

/* setPeriodMicroSecs__E */
xdc_Bool ti_sysbios_knl_Clock_TimerProxy_setPeriodMicroSecs__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 microsecs )
{
    return ti_sysbios_family_arm_lm4_Timer_setPeriodMicroSecs((ti_sysbios_family_arm_lm4_Timer_Handle)inst, microsecs);
}

/* getPeriod__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getPeriod__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getPeriod((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* getCount__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCount__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getCount((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* getFreq__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_getFreq__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_Timer_getFreq((ti_sysbios_family_arm_lm4_Timer_Handle)inst, freq);
}

/* getFunc__E */
ti_sysbios_interfaces_ITimer_FuncPtr ti_sysbios_knl_Clock_TimerProxy_getFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UArg *arg )
{
    return ti_sysbios_family_arm_lm4_Timer_getFunc((ti_sysbios_family_arm_lm4_Timer_Handle)inst, arg);
}

/* setFunc__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_setFunc__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, ti_sysbios_interfaces_ITimer_FuncPtr fxn, xdc_UArg arg )
{
    ti_sysbios_family_arm_lm4_Timer_setFunc((ti_sysbios_family_arm_lm4_Timer_Handle)inst, fxn, arg);
}

/* trigger__E */
xdc_Void ti_sysbios_knl_Clock_TimerProxy_trigger__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 cycles )
{
    ti_sysbios_family_arm_lm4_Timer_trigger((ti_sysbios_family_arm_lm4_Timer_Handle)inst, cycles);
}

/* getExpiredCounts__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredCounts__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredCounts((ti_sysbios_family_arm_lm4_Timer_Handle)inst);
}

/* getExpiredTicks__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getExpiredTicks__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_UInt32 tickPeriod )
{
    return ti_sysbios_family_arm_lm4_Timer_getExpiredTicks((ti_sysbios_family_arm_lm4_Timer_Handle)inst, tickPeriod);
}

/* getCurrentTick__E */
xdc_UInt32 ti_sysbios_knl_Clock_TimerProxy_getCurrentTick__E( ti_sysbios_knl_Clock_TimerProxy_Handle inst, xdc_Bool save )
{
    return ti_sysbios_family_arm_lm4_Timer_getCurrentTick((ti_sysbios_family_arm_lm4_Timer_Handle)inst, save);
}


/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.IntrinsicsSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S();
}

/* maxbit__E */
xdc_UInt ti_sysbios_knl_Intrinsics_SupportProxy_maxbit__E( xdc_UInt bits )
{
    return ti_sysbios_family_arm_m3_IntrinsicsSupport_maxbit(bits);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.m3.TaskSupport */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S();
}

/* start__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_start__E( xdc_Ptr curTask, ti_sysbios_interfaces_ITaskSupport_FuncPtr enter, ti_sysbios_interfaces_ITaskSupport_FuncPtr exit, xdc_runtime_Error_Block *eb )
{
    return ti_sysbios_family_arm_m3_TaskSupport_start(curTask, enter, exit, eb);
}

/* swap__E */
xdc_Void ti_sysbios_knl_Task_SupportProxy_swap__E( xdc_Ptr *oldtskContext, xdc_Ptr *newtskContext )
{
    ti_sysbios_family_arm_m3_TaskSupport_swap(oldtskContext, newtskContext);
}

/* checkStack__E */
xdc_Bool ti_sysbios_knl_Task_SupportProxy_checkStack__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_checkStack(stack, size);
}

/* stackUsed__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_stackUsed__E( xdc_Char *stack, xdc_SizeT size )
{
    return ti_sysbios_family_arm_m3_TaskSupport_stackUsed(stack, size);
}

/* getStackAlignment__E */
xdc_UInt ti_sysbios_knl_Task_SupportProxy_getStackAlignment__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getStackAlignment();
}

/* getDefaultStackSize__E */
xdc_SizeT ti_sysbios_knl_Task_SupportProxy_getDefaultStackSize__E( void )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getDefaultStackSize();
}

/* getCheckValueAddr__E */
xdc_Ptr ti_sysbios_knl_Task_SupportProxy_getCheckValueAddr__E( xdc_Ptr curTask )
{
    return ti_sysbios_family_arm_m3_TaskSupport_getCheckValueAddr(curTask);
}


/*
 * ======== xdc.runtime.Main_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_Main_Module_GateProxy_Handle xdc_runtime_Main_Module_GateProxy_create( const xdc_runtime_Main_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Main_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Main_Module_GateProxy_delete(xdc_runtime_Main_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Main_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Main_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_Main_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_Main_Module_GateProxy_enter__E( xdc_runtime_Main_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_Main_Module_GateProxy_leave__E( xdc_runtime_Main_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.Memory_HeapProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.heaps.HeapMem */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_HeapProxy_Module__startupDone__S(void)
{
    return ti_sysbios_heaps_HeapMem_Module__startupDone__S();
}

/* create */
xdc_runtime_Memory_HeapProxy_Handle xdc_runtime_Memory_HeapProxy_create( const xdc_runtime_Memory_HeapProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_Memory_HeapProxy_Handle)ti_sysbios_heaps_HeapMem_create((const ti_sysbios_heaps_HeapMem_Params *)prms, eb);
}

/* delete */
void xdc_runtime_Memory_HeapProxy_delete(xdc_runtime_Memory_HeapProxy_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_Memory_HeapProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_heaps_HeapMem_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_Memory_HeapProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_heaps_HeapMem_Handle__label__S(obj, lab);
}

/* alloc__E */
xdc_Ptr xdc_runtime_Memory_HeapProxy_alloc__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_SizeT size, xdc_SizeT align, xdc_runtime_Error_Block *eb )
{
    return xdc_runtime_IHeap_alloc((xdc_runtime_IHeap_Handle)inst, size, align, eb);
}

/* free__E */
xdc_Void xdc_runtime_Memory_HeapProxy_free__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_Ptr block, xdc_SizeT size )
{
    xdc_runtime_IHeap_free((xdc_runtime_IHeap_Handle)inst, block, size);
}

/* isBlocking__E */
xdc_Bool xdc_runtime_Memory_HeapProxy_isBlocking__E( xdc_runtime_Memory_HeapProxy_Handle inst )
{
    return xdc_runtime_IHeap_isBlocking((xdc_runtime_IHeap_Handle)inst);
}

/* getStats__E */
xdc_Void xdc_runtime_Memory_HeapProxy_getStats__E( xdc_runtime_Memory_HeapProxy_Handle inst, xdc_runtime_Memory_Stats *stats )
{
    xdc_runtime_IHeap_getStats((xdc_runtime_IHeap_Handle)inst, stats);
}


/*
 * ======== xdc.runtime.System_Module_GateProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.gates.GateHwi */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module_GateProxy_Module__startupDone__S(void)
{
    return ti_sysbios_gates_GateHwi_Module__startupDone__S();
}

/* create */
xdc_runtime_System_Module_GateProxy_Handle xdc_runtime_System_Module_GateProxy_create( const xdc_runtime_System_Module_GateProxy_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_System_Module_GateProxy_Handle)ti_sysbios_gates_GateHwi_create((const ti_sysbios_gates_GateHwi_Params *)prms, eb);
}

/* delete */
void xdc_runtime_System_Module_GateProxy_delete(xdc_runtime_System_Module_GateProxy_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}

/* Params__init__S */
void xdc_runtime_System_Module_GateProxy_Params__init__S( xdc_Ptr dst, const void *src, xdc_SizeT psz, xdc_SizeT isz )
{
    ti_sysbios_gates_GateHwi_Params__init__S(dst, src, psz, isz);
}

/* Handle__label__S */
xdc_runtime_Types_Label *xdc_runtime_System_Module_GateProxy_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab)
{
    return ti_sysbios_gates_GateHwi_Handle__label__S(obj, lab);
}

/* query__E */
xdc_Bool xdc_runtime_System_Module_GateProxy_query__E( xdc_Int qual )
{
    return ti_sysbios_gates_GateHwi_query(qual);
}

/* enter__E */
xdc_IArg xdc_runtime_System_Module_GateProxy_enter__E( xdc_runtime_System_Module_GateProxy_Handle inst )
{
    return ti_sysbios_gates_GateHwi_enter((ti_sysbios_gates_GateHwi_Handle)inst);
}

/* leave__E */
xdc_Void xdc_runtime_System_Module_GateProxy_leave__E( xdc_runtime_System_Module_GateProxy_Handle inst, xdc_IArg key )
{
    ti_sysbios_gates_GateHwi_leave((ti_sysbios_gates_GateHwi_Handle)inst, key);
}


/*
 * ======== xdc.runtime.System_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO xdc.runtime.SysMin */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_SupportProxy_Module__startupDone__S(void)
{
    return xdc_runtime_SysMin_Module__startupDone__S();
}

/* abort__E */
xdc_Void xdc_runtime_System_SupportProxy_abort__E( xdc_CString str )
{
    xdc_runtime_SysMin_abort(str);
}

/* exit__E */
xdc_Void xdc_runtime_System_SupportProxy_exit__E( xdc_Int stat )
{
    xdc_runtime_SysMin_exit(stat);
}

/* flush__E */
xdc_Void xdc_runtime_System_SupportProxy_flush__E( void )
{
    xdc_runtime_SysMin_flush();
}

/* putch__E */
xdc_Void xdc_runtime_System_SupportProxy_putch__E( xdc_Char ch )
{
    xdc_runtime_SysMin_putch(ch);
}

/* ready__E */
xdc_Bool xdc_runtime_System_SupportProxy_ready__E( void )
{
    return xdc_runtime_SysMin_ready();
}


/*
 * ======== xdc.runtime.Timestamp_SupportProxy PROXY BODY ========
 */

/* DELEGATES TO ti.sysbios.family.arm.lm4.TimestampProvider */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_SupportProxy_Module__startupDone__S(void)
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S();
}

/* get32__E */
xdc_Bits32 xdc_runtime_Timestamp_SupportProxy_get32__E( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_get32();
}

/* get64__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_get64__E( xdc_runtime_Types_Timestamp64 *result )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_get64(result);
}

/* getFreq__E */
xdc_Void xdc_runtime_Timestamp_SupportProxy_getFreq__E( xdc_runtime_Types_FreqHz *freq )
{
    ti_sysbios_family_arm_lm4_TimestampProvider_getFreq(freq);
}


/*
 * ======== ti.sysbios.family.arm.lm4.Timer OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_lm4_Timer_Object2__ s0; char c; } ti_sysbios_family_arm_lm4_Timer___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, ".const:ti_sysbios_family_arm_lm4_Timer_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_lm4_Timer_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_arm_lm4_Timer_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_lm4_Timer___S1) - sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_lm4_Timer_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.family.arm.m3.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_family_arm_m3_Hwi_Object2__ s0; char c; } ti_sysbios_family_arm_m3_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, ".const:ti_sysbios_family_arm_m3_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_family_arm_m3_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_family_arm_m3_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_family_arm_m3_Hwi___S1) - sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_family_arm_m3_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateHwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateHwi_Object2__ s0; char c; } ti_sysbios_gates_GateHwi___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateHwi_Object__DESC__C, ".const:ti_sysbios_gates_GateHwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateHwi_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateHwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateHwi___S1) - sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateHwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateHwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateHwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.gates.GateMutex OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_gates_GateMutex_Object2__ s0; char c; } ti_sysbios_gates_GateMutex___S1;
#pragma DATA_SECTION(ti_sysbios_gates_GateMutex_Object__DESC__C, ".const:ti_sysbios_gates_GateMutex_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_gates_GateMutex_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_gates_GateMutex_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_gates_GateMutex___S1) - sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_gates_GateMutex_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_gates_GateMutex_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_gates_GateMutex_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.hal.Hwi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_hal_Hwi_Object2__ s0; char c; } ti_sysbios_hal_Hwi___S1;
#pragma DATA_SECTION(ti_sysbios_hal_Hwi_Object__DESC__C, ".const:ti_sysbios_hal_Hwi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_hal_Hwi_Object__DESC__C = {
    (xdc_CPtr)NULL, /* fxnTab */
    &ti_sysbios_hal_Hwi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_hal_Hwi___S1) - sizeof(ti_sysbios_hal_Hwi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_hal_Hwi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_hal_Hwi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_hal_Hwi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.heaps.HeapMem OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_heaps_HeapMem_Object2__ s0; char c; } ti_sysbios_heaps_HeapMem___S1;
#pragma DATA_SECTION(ti_sysbios_heaps_HeapMem_Object__DESC__C, ".const:ti_sysbios_heaps_HeapMem_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_heaps_HeapMem_Object__DESC__C = {
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Module__FXNS__C, /* fxnTab */
    &ti_sysbios_heaps_HeapMem_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_heaps_HeapMem___S1) - sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_heaps_HeapMem_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_heaps_HeapMem_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_heaps_HeapMem_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Clock OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Clock_Object2__ s0; char c; } ti_sysbios_knl_Clock___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Clock_Object__DESC__C, ".const:ti_sysbios_knl_Clock_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Clock_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Clock_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Clock___S1) - sizeof(ti_sysbios_knl_Clock_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Clock_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Clock_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Clock_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Event OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Event_Object2__ s0; char c; } ti_sysbios_knl_Event___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Event_Object__DESC__C, ".const:ti_sysbios_knl_Event_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Event_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Event_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Event___S1) - sizeof(ti_sysbios_knl_Event_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Event_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Event_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Event_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Queue OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Queue_Object2__ s0; char c; } ti_sysbios_knl_Queue___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Queue_Object__DESC__C, ".const:ti_sysbios_knl_Queue_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Queue_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Queue_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Queue___S1) - sizeof(ti_sysbios_knl_Queue_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Queue_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Queue_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Queue_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Semaphore OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Semaphore_Object2__ s0; char c; } ti_sysbios_knl_Semaphore___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Semaphore_Object__DESC__C, ".const:ti_sysbios_knl_Semaphore_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Semaphore_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Semaphore_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Semaphore___S1) - sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Semaphore_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Semaphore_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Semaphore_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Swi OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Swi_Object2__ s0; char c; } ti_sysbios_knl_Swi___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Swi_Object__DESC__C, ".const:ti_sysbios_knl_Swi_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Swi_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Swi_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Swi___S1) - sizeof(ti_sysbios_knl_Swi_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_sysbios_knl_Swi_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Swi_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Swi_Params), /* prmsSize */
};


/*
 * ======== ti.sysbios.knl.Task OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_sysbios_knl_Task_Object2__ s0; char c; } ti_sysbios_knl_Task___S1;
#pragma DATA_SECTION(ti_sysbios_knl_Task_Object__DESC__C, ".const:ti_sysbios_knl_Task_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_sysbios_knl_Task_Object__DESC__C = {
    (xdc_CPtr)-1, /* fxnTab */
    &ti_sysbios_knl_Task_Module__root__V.link, /* modLink */
    sizeof(ti_sysbios_knl_Task___S1) - sizeof(ti_sysbios_knl_Task_Object2__), /* objAlign */
    0, /* objHeap */
    offsetof(ti_sysbios_knl_Task_Object__, __name), /* objName */
    sizeof(ti_sysbios_knl_Task_Object2__), /* objSize */
    (xdc_CPtr)&ti_sysbios_knl_Task_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_sysbios_knl_Task_Params), /* prmsSize */
};


/*
 * ======== ti.uia.loggers.LoggerStopMode OBJECT DESCRIPTOR ========
 */

/* Object__DESC__C */
typedef struct { ti_uia_loggers_LoggerStopMode_Object2__ s0; char c; } ti_uia_loggers_LoggerStopMode___S1;
#pragma DATA_SECTION(ti_uia_loggers_LoggerStopMode_Object__DESC__C, ".const:ti_uia_loggers_LoggerStopMode_Object__DESC__C");
__FAR__ const xdc_runtime_Core_ObjDesc ti_uia_loggers_LoggerStopMode_Object__DESC__C = {
    (xdc_CPtr)&ti_uia_loggers_LoggerStopMode_Module__FXNS__C, /* fxnTab */
    &ti_uia_loggers_LoggerStopMode_Module__root__V.link, /* modLink */
    sizeof(ti_uia_loggers_LoggerStopMode___S1) - sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objAlign */
    0, /* objHeap */
    0, /* objName */
    sizeof(ti_uia_loggers_LoggerStopMode_Object2__), /* objSize */
    (xdc_CPtr)&ti_uia_loggers_LoggerStopMode_Object__PARAMS__C, /* prmsInit */
    sizeof(ti_uia_loggers_LoggerStopMode_Params), /* prmsSize */
};


/*
 * ======== xdc.runtime.IGateProvider VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create( xdc_runtime_IGateProvider_Module mod, const xdc_runtime_IGateProvider_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IGateProvider_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IGateProvider_Params), eb);
}

/* delete */
void xdc_runtime_IGateProvider_delete( xdc_runtime_IGateProvider_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IFilterLogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IFilterLogger_Handle xdc_runtime_IFilterLogger_create( xdc_runtime_IFilterLogger_Module mod, const xdc_runtime_IFilterLogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IFilterLogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IFilterLogger_Params), eb);
}

/* delete */
void xdc_runtime_IFilterLogger_delete( xdc_runtime_IFilterLogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.ILogger VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_ILogger_Handle xdc_runtime_ILogger_create( xdc_runtime_ILogger_Module mod, const xdc_runtime_ILogger_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_ILogger_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_ILogger_Params), eb);
}

/* delete */
void xdc_runtime_ILogger_delete( xdc_runtime_ILogger_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== xdc.runtime.IHeap VIRTUAL FUNCTIONS ========
 */

/* create */
xdc_runtime_IHeap_Handle xdc_runtime_IHeap_create( xdc_runtime_IHeap_Module mod, const xdc_runtime_IHeap_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (xdc_runtime_IHeap_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (xdc_runtime_IHeap_Params), eb);
}

/* delete */
void xdc_runtime_IHeap_delete( xdc_runtime_IHeap_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.IUIATransfer VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_IUIATransfer_Handle ti_uia_runtime_IUIATransfer_create( ti_uia_runtime_IUIATransfer_Module mod, const ti_uia_runtime_IUIATransfer_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_uia_runtime_IUIATransfer_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (ti_uia_runtime_IUIATransfer_Params), eb);
}

/* delete */
void ti_uia_runtime_IUIATransfer_delete( ti_uia_runtime_IUIATransfer_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.uia.runtime.ILoggerSnapshot VIRTUAL FUNCTIONS ========
 */

/* create */
ti_uia_runtime_ILoggerSnapshot_Handle ti_uia_runtime_ILoggerSnapshot_create( ti_uia_runtime_ILoggerSnapshot_Module mod, const ti_uia_runtime_ILoggerSnapshot_Params *prms, xdc_runtime_Error_Block *eb )
{
    return (ti_uia_runtime_ILoggerSnapshot_Handle) mod->__sysp->__create(0, (const xdc_UChar*)prms, sizeof (ti_uia_runtime_ILoggerSnapshot_Params), eb);
}

/* delete */
void ti_uia_runtime_ILoggerSnapshot_delete( ti_uia_runtime_ILoggerSnapshot_Handle *instp )
{
    (*instp)->__fxns->__sysp->__delete(instp);
}


/*
 * ======== ti.sysbios.BIOS SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_BIOS_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.BIOS_RtsGateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_BIOS_RtsGateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_BIOS_RtsGateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_BIOS_RtsGateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_BIOS_RtsGateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_BIOS_RtsGateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_BIOS_RtsGateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_BIOS_RtsGateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_BIOS_RtsGateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_BIOS_RtsGateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_BIOS_RtsGateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_BIOS_RtsGateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_BIOS_RtsGateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.family.arm.lm4.Timer SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_lm4_Timer_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_lm4_Timer_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_lm4_Timer_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_lm4_Timer_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_lm4_Timer_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_lm4_Timer_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_lm4_Timer_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_lm4_Timer_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_lm4_Timer_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_lm4_Timer_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_Timer_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_Timer_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_lm4_Timer_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32827;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_lm4_Timer_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_arm_lm4_Timer_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_lm4_Timer_Object__ * const)ti_sysbios_family_arm_lm4_Timer_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_lm4_Timer_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_lm4_Timer_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_lm4_Timer_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_arm_lm4_Timer_Args__create *__args = req_args;
    ti_sysbios_family_arm_lm4_Timer_Params instPrms;
    ti_sysbios_family_arm_lm4_Timer_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(objp, __args->id, __args->tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_arm_lm4_Timer_Handle ti_sysbios_family_arm_lm4_Timer_create( xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_lm4_Timer_Params prms;
    ti_sysbios_family_arm_lm4_Timer_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E(obj, id, tickFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_arm_lm4_Timer_construct(ti_sysbios_family_arm_lm4_Timer_Struct *objp, xdc_Int id, ti_sysbios_interfaces_ITimer_FuncPtr tickFxn, const ti_sysbios_family_arm_lm4_Timer_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_lm4_Timer_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_lm4_Timer_Instance_init__E((xdc_Ptr)objp, id, tickFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_lm4_Timer_destruct(ti_sysbios_family_arm_lm4_Timer_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_lm4_Timer_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_lm4_Timer_Object__DESC__C, *((ti_sysbios_family_arm_lm4_Timer_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_lm4_Timer_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_lm4_Timer_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_lm4_Timer_delete(ti_sysbios_family_arm_lm4_Timer_Handle *instp)
{
    ti_sysbios_family_arm_lm4_Timer_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.lm4.TimestampProvider SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_lm4_TimestampProvider_Module__startupDone__F();
}



/*
 * ======== ti.sysbios.family.arm.m3.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_family_arm_m3_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_family_arm_m3_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_family_arm_m3_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_family_arm_m3_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_family_arm_m3_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_family_arm_m3_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_family_arm_m3_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_family_arm_m3_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_family_arm_m3_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_family_arm_m3_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_family_arm_m3_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_family_arm_m3_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32815;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_family_arm_m3_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_family_arm_m3_Hwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_family_arm_m3_Hwi_Object__ * const)ti_sysbios_family_arm_m3_Hwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_family_arm_m3_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_family_arm_m3_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_family_arm_m3_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_family_arm_m3_Hwi_Args__create *__args = req_args;
    ti_sysbios_family_arm_m3_Hwi_Params instPrms;
    ti_sysbios_family_arm_m3_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_family_arm_m3_Hwi_Handle ti_sysbios_family_arm_m3_Hwi_create( xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_m3_Hwi_Params prms;
    ti_sysbios_family_arm_m3_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_family_arm_m3_Hwi_construct(ti_sysbios_family_arm_m3_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_interfaces_IHwi_FuncPtr hwiFxn, const ti_sysbios_family_arm_m3_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_family_arm_m3_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_family_arm_m3_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_family_arm_m3_Hwi_destruct(ti_sysbios_family_arm_m3_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_family_arm_m3_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_family_arm_m3_Hwi_Object__DESC__C, *((ti_sysbios_family_arm_m3_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_family_arm_m3_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_family_arm_m3_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_family_arm_m3_Hwi_delete(ti_sysbios_family_arm_m3_Hwi_Handle *instp)
{
    ti_sysbios_family_arm_m3_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.family.arm.m3.IntrinsicsSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.m3.TaskSupport SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_m3_TaskSupport_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.family.arm.msp432e4.init.Boot SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_family_arm_msp432e4_init_Boot_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.gates.GateHwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateHwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateHwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateHwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateHwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateHwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateHwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateHwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateHwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateHwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateHwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateHwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateHwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateHwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateHwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateHwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateHwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateHwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateHwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateHwi_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateHwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32823;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateHwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateHwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateHwi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateHwi_Object__ * const)ti_sysbios_gates_GateHwi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateHwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateHwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateHwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params instPrms;
    ti_sysbios_gates_GateHwi_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateHwi_Handle ti_sysbios_gates_GateHwi_create( const ti_sysbios_gates_GateHwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateHwi_Params prms;
    ti_sysbios_gates_GateHwi_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateHwi_construct(ti_sysbios_gates_GateHwi_Struct *objp, const ti_sysbios_gates_GateHwi_Params *paramsPtr)
{
    ti_sysbios_gates_GateHwi_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateHwi_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateHwi_destruct(ti_sysbios_gates_GateHwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateHwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateHwi_Object__DESC__C, *((ti_sysbios_gates_GateHwi_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_gates_GateHwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateHwi_delete(ti_sysbios_gates_GateHwi_Handle *instp)
{
    ti_sysbios_gates_GateHwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.gates.GateMutex SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_gates_GateMutex_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_gates_GateMutex_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_gates_GateMutex_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_gates_GateMutex_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_gates_GateMutex_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_gates_GateMutex_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_gates_GateMutex_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_gates_GateMutex_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_gates_GateMutex_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_gates_GateMutex_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_gates_GateMutex_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_gates_GateMutex_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_gates_GateMutex_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_gates_GateMutex_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_gates_GateMutex_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_gates_GateMutex_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_gates_GateMutex_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_gates_GateMutex_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_gates_GateMutex_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_gates_GateMutex_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32824;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_gates_GateMutex_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_gates_GateMutex_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_gates_GateMutex_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_gates_GateMutex_Object__ * const)ti_sysbios_gates_GateMutex_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_gates_GateMutex_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_gates_GateMutex_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_gates_GateMutex_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params instPrms;
    ti_sysbios_gates_GateMutex_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_gates_GateMutex_Handle ti_sysbios_gates_GateMutex_create( const ti_sysbios_gates_GateMutex_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_gates_GateMutex_Params prms;
    ti_sysbios_gates_GateMutex_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_gates_GateMutex_construct(ti_sysbios_gates_GateMutex_Struct *objp, const ti_sysbios_gates_GateMutex_Params *paramsPtr)
{
    ti_sysbios_gates_GateMutex_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_gates_GateMutex_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_gates_GateMutex_destruct(ti_sysbios_gates_GateMutex_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_gates_GateMutex_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_gates_GateMutex_Object__DESC__C, *((ti_sysbios_gates_GateMutex_Object**)instp), (xdc_Fxn)ti_sysbios_gates_GateMutex_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_gates_GateMutex_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_gates_GateMutex_delete(ti_sysbios_gates_GateMutex_Handle *instp)
{
    ti_sysbios_gates_GateMutex_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_hal_Hwi_Module__startupDone__S( void )
{
    return ti_sysbios_hal_Hwi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_hal_Hwi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32807;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_hal_Hwi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_hal_Hwi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_hal_Hwi_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_hal_Hwi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_hal_Hwi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_hal_Hwi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_hal_Hwi_Args__create *__args = req_args;
    ti_sysbios_hal_Hwi_Params instPrms;
    ti_sysbios_hal_Hwi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(objp, __args->intNum, __args->hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_hal_Hwi_Handle ti_sysbios_hal_Hwi_create( xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params prms;
    ti_sysbios_hal_Hwi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E(obj, intNum, hwiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_hal_Hwi_construct(ti_sysbios_hal_Hwi_Struct *objp, xdc_Int intNum, ti_sysbios_hal_Hwi_FuncPtr hwiFxn, const ti_sysbios_hal_Hwi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_hal_Hwi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_hal_Hwi_Instance_init__E((xdc_Ptr)objp, intNum, hwiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_hal_Hwi_destruct(ti_sysbios_hal_Hwi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_hal_Hwi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_hal_Hwi_Object__DESC__C, *((ti_sysbios_hal_Hwi_Object**)instp), (xdc_Fxn)ti_sysbios_hal_Hwi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_hal_Hwi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_hal_Hwi_delete(ti_sysbios_hal_Hwi_Handle *instp)
{
    ti_sysbios_hal_Hwi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.hal.Hwi_HwiProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_hal_Hwi_HwiProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_hal_Hwi_HwiProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_hal_Hwi_HwiProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_hal_Hwi_HwiProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_hal_Hwi_HwiProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_hal_Hwi_HwiProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_hal_Hwi_HwiProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_hal_Hwi_HwiProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_hal_Hwi_HwiProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_hal_Hwi_HwiProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_hal_Hwi_HwiProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_hal_Hwi_HwiProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.heaps.HeapMem SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_heaps_HeapMem_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_heaps_HeapMem_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32819;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_heaps_HeapMem_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_heaps_HeapMem_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_heaps_HeapMem_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_heaps_HeapMem_Object__ * const)ti_sysbios_heaps_HeapMem_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_heaps_HeapMem_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_heaps_HeapMem_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_heaps_HeapMem_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params instPrms;
    ti_sysbios_heaps_HeapMem_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_heaps_HeapMem_Handle ti_sysbios_heaps_HeapMem_create( const ti_sysbios_heaps_HeapMem_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_heaps_HeapMem_Params prms;
    ti_sysbios_heaps_HeapMem_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_heaps_HeapMem_construct(ti_sysbios_heaps_HeapMem_Struct *objp, const ti_sysbios_heaps_HeapMem_Params *paramsPtr)
{
    ti_sysbios_heaps_HeapMem_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_heaps_HeapMem_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_heaps_HeapMem_destruct(ti_sysbios_heaps_HeapMem_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_heaps_HeapMem_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_heaps_HeapMem_Object__DESC__C, *((ti_sysbios_heaps_HeapMem_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_heaps_HeapMem_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_heaps_HeapMem_delete(ti_sysbios_heaps_HeapMem_Handle *instp)
{
    ti_sysbios_heaps_HeapMem_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.heaps.HeapMem_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_heaps_HeapMem_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_heaps_HeapMem_Module_GateProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_heaps_HeapMem_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateMutex_Module__FXNS__C;
}



/*
 * ======== ti.sysbios.knl.Clock SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Clock_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Clock_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Clock_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32798;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Clock_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Clock_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Clock_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Clock_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Clock_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Clock_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Clock_Args__create *__args = req_args;
    ti_sysbios_knl_Clock_Params instPrms;
    ti_sysbios_knl_Clock_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(objp, __args->clockFxn, __args->timeout, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Clock_Handle ti_sysbios_knl_Clock_create( ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Clock_Params prms;
    ti_sysbios_knl_Clock_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E(obj, clockFxn, timeout, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Clock_construct(ti_sysbios_knl_Clock_Struct *objp, ti_sysbios_knl_Clock_FuncPtr clockFxn, xdc_UInt timeout, const ti_sysbios_knl_Clock_Params *paramsPtr)
{
    ti_sysbios_knl_Clock_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Clock_Instance_init__E((xdc_Ptr)objp, clockFxn, timeout, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Clock_destruct(ti_sysbios_knl_Clock_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Clock_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Clock_Object__DESC__C, *((ti_sysbios_knl_Clock_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Clock_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Clock_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Clock_delete(ti_sysbios_knl_Clock_Handle *instp)
{
    ti_sysbios_knl_Clock_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Clock_TimerProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Clock_TimerProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Clock_TimerProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Clock_TimerProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Clock_TimerProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Clock_TimerProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Clock_TimerProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Clock_TimerProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Clock_TimerProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Clock_TimerProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Clock_TimerProxy_Module_GateProxy_query

xdc_Bool ti_sysbios_knl_Clock_TimerProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Clock_TimerProxy_Proxy__delegate__S(void)
{
    return 0;
}



/*
 * ======== ti.sysbios.knl.Event SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Event_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Event_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Event_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Event_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Event_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Event_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Event_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Event_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Event_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Event_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Event_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Event_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Event_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Event_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Event_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Event_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Event_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Event_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Event_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Event_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32801;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Event_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Event_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Event_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Event_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Event_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Event_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Event_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Event_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Event_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Event_Params instPrms;
    ti_sysbios_knl_Event_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Event_Handle ti_sysbios_knl_Event_create( const ti_sysbios_knl_Event_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Event_Params prms;
    ti_sysbios_knl_Event_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Event_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Event_construct(ti_sysbios_knl_Event_Struct *objp, const ti_sysbios_knl_Event_Params *paramsPtr)
{
    ti_sysbios_knl_Event_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Event_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Event_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Event_destruct(ti_sysbios_knl_Event_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Event_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Event_Object__DESC__C, *((ti_sysbios_knl_Event_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Event_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Event_delete(ti_sysbios_knl_Event_Handle *instp)
{
    ti_sysbios_knl_Event_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Idle SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Idle_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Intrinsics_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.sysbios.knl.Intrinsics_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Intrinsics_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_family_arm_m3_IntrinsicsSupport_Module__FXNS__C;
}


/*
 * ======== ti.sysbios.knl.Queue SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Queue_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Queue_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Queue_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Queue_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Queue_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Queue_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Queue_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Queue_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Queue_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Queue_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Queue_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Queue_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Queue_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Queue_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Queue_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Queue_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Queue_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Queue_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Queue_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Queue_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32802;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Queue_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Queue_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Queue_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Queue_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Queue_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Queue_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params instPrms;
    ti_sysbios_knl_Queue_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Queue_Handle ti_sysbios_knl_Queue_create( const ti_sysbios_knl_Queue_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Queue_Params prms;
    ti_sysbios_knl_Queue_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Queue_construct(ti_sysbios_knl_Queue_Struct *objp, const ti_sysbios_knl_Queue_Params *paramsPtr)
{
    ti_sysbios_knl_Queue_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Queue_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Queue_destruct(ti_sysbios_knl_Queue_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Queue_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Queue_Object__DESC__C, *((ti_sysbios_knl_Queue_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Queue_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Queue_delete(ti_sysbios_knl_Queue_Handle *instp)
{
    ti_sysbios_knl_Queue_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Semaphore SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Semaphore_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Semaphore_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Semaphore_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Semaphore_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Semaphore_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Semaphore_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Semaphore_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Semaphore_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Semaphore_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Semaphore_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Semaphore_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Semaphore_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Semaphore_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Semaphore_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Semaphore_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Semaphore_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Semaphore_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Semaphore_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Semaphore_Module__startupDone__S( void )
{
    return 1;
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Semaphore_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32803;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Semaphore_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Semaphore_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Semaphore_Object__ *)oa) + i;
    }

    return NULL;
}


/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Semaphore_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Semaphore_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Semaphore_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Semaphore_Args__create *__args = req_args;
    ti_sysbios_knl_Semaphore_Params instPrms;
    ti_sysbios_knl_Semaphore_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(objp, __args->count, &instPrms);
    return objp;
}

/* create */
ti_sysbios_knl_Semaphore_Handle ti_sysbios_knl_Semaphore_create( xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Semaphore_Params prms;
    ti_sysbios_knl_Semaphore_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E(obj, count, &prms);
    return obj;
}

/* construct */
void ti_sysbios_knl_Semaphore_construct(ti_sysbios_knl_Semaphore_Struct *objp, xdc_Int count, const ti_sysbios_knl_Semaphore_Params *paramsPtr)
{
    ti_sysbios_knl_Semaphore_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_sysbios_knl_Semaphore_Instance_init__E((xdc_Ptr)objp, count, &instPrms);
}

/* destruct */
void ti_sysbios_knl_Semaphore_destruct(ti_sysbios_knl_Semaphore_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Semaphore_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Semaphore_Object__DESC__C, *((ti_sysbios_knl_Semaphore_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Semaphore_Instance_finalize__E, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_sysbios_knl_Semaphore_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Semaphore_delete(ti_sysbios_knl_Semaphore_Handle *instp)
{
    ti_sysbios_knl_Semaphore_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Swi SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Swi_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Swi_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Swi_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Swi_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Swi_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Swi_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Swi_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Swi_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Swi_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Swi_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Swi_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Swi_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Swi_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Swi_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Swi_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Swi_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Swi_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Swi_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Swi_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Swi_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Swi_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32804;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Swi_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Swi_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Swi_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Swi_Object__ * const)ti_sysbios_knl_Swi_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Swi_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Swi_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Swi_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Swi_Args__create *__args = req_args;
    ti_sysbios_knl_Swi_Params instPrms;
    ti_sysbios_knl_Swi_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(objp, __args->swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Swi_Handle ti_sysbios_knl_Swi_create( ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params prms;
    ti_sysbios_knl_Swi_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E(obj, swiFxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Swi_construct(ti_sysbios_knl_Swi_Struct *objp, ti_sysbios_knl_Swi_FuncPtr swiFxn, const ti_sysbios_knl_Swi_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Swi_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Swi_Instance_init__E((xdc_Ptr)objp, swiFxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Swi_destruct(ti_sysbios_knl_Swi_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Swi_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Swi_Object__DESC__C, *((ti_sysbios_knl_Swi_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Swi_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Swi_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Swi_delete(ti_sysbios_knl_Swi_Handle *instp)
{
    ti_sysbios_knl_Swi_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_sysbios_knl_Task_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_sysbios_knl_Task_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_sysbios_knl_Task_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_sysbios_knl_Task_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_sysbios_knl_Task_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_sysbios_knl_Task_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_sysbios_knl_Task_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_sysbios_knl_Task_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_sysbios_knl_Task_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_sysbios_knl_Task_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_sysbios_knl_Task_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_sysbios_knl_Task_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_sysbios_knl_Task_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_sysbios_knl_Task_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_sysbios_knl_Task_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_sysbios_knl_Task_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_sysbios_knl_Task_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_sysbios_knl_Task_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_sysbios_knl_Task_Module__startupDone__S( void )
{
    return ti_sysbios_knl_Task_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_sysbios_knl_Task_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32805;
    xdc_runtime_Core_assignLabel(lab, ((ti_sysbios_knl_Task_Object__*)obj)->__name, 1);

    return lab;
}

/* Params__init__S */
xdc_Void ti_sysbios_knl_Task_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_sysbios_knl_Task_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_sysbios_knl_Task_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_sysbios_knl_Task_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_sysbios_knl_Task_Object__ * const)ti_sysbios_knl_Task_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_sysbios_knl_Task_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_sysbios_knl_Task_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_sysbios_knl_Task_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_sysbios_knl_Task_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_sysbios_knl_Task_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    const ti_sysbios_knl_Task_Args__create *__args = req_args;
    ti_sysbios_knl_Task_Params instPrms;
    ti_sysbios_knl_Task_Object *objp;
    int iStat;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(objp, __args->fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return objp;
}

/* create */
ti_sysbios_knl_Task_Handle ti_sysbios_knl_Task_create( ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params prms;
    ti_sysbios_knl_Task_Object *obj;

    int iStat;

    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_sysbios_knl_Task_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E(obj, fxn, &prms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 0);
        return NULL;
    }

    return obj;
}

/* construct */
void ti_sysbios_knl_Task_construct(ti_sysbios_knl_Task_Struct *objp, ti_sysbios_knl_Task_FuncPtr fxn, const ti_sysbios_knl_Task_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_sysbios_knl_Task_Params instPrms;
    int iStat;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);

    /* module-specific initialization */
    iStat = ti_sysbios_knl_Task_Instance_init__E((xdc_Ptr)objp, fxn, &instPrms, eb);
    if (iStat) {
        xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, objp, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, iStat, 1);
    }

}

/* destruct */
void ti_sysbios_knl_Task_destruct(ti_sysbios_knl_Task_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, obj, (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, TRUE);
}

/* Object__delete__S */
xdc_Void ti_sysbios_knl_Task_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_sysbios_knl_Task_Object__DESC__C, *((ti_sysbios_knl_Task_Object**)instp), (xdc_Fxn)ti_sysbios_knl_Task_Instance_finalize__E, 0, FALSE);
    *((ti_sysbios_knl_Task_Handle*)instp) = NULL;
}

/* delete */
void ti_sysbios_knl_Task_delete(ti_sysbios_knl_Task_Handle *instp)
{
    ti_sysbios_knl_Task_Object__delete__S(instp);
}


/*
 * ======== ti.sysbios.knl.Task_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool ti_sysbios_knl_Task_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr ti_sysbios_knl_Task_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== ti.sysbios.utils.Load SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_sysbios_utils_Load_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.DvtTypes SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_DvtTypes_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAErr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAErr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.events.UIAEvt SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_events_UIAEvt_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.loggers.LoggerStopMode SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID ti_uia_loggers_LoggerStopMode_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL ti_uia_loggers_LoggerStopMode_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB ti_uia_loggers_LoggerStopMode_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK ti_uia_loggers_LoggerStopMode_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF ti_uia_loggers_LoggerStopMode_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ ti_uia_loggers_LoggerStopMode_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 ti_uia_loggers_LoggerStopMode_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 ti_uia_loggers_LoggerStopMode_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 ti_uia_loggers_LoggerStopMode_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 ti_uia_loggers_LoggerStopMode_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 ti_uia_loggers_LoggerStopMode_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ ti_uia_loggers_LoggerStopMode_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS ti_uia_loggers_LoggerStopMode_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create ti_uia_loggers_LoggerStopMode_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete ti_uia_loggers_LoggerStopMode_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter ti_uia_loggers_LoggerStopMode_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave ti_uia_loggers_LoggerStopMode_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query ti_uia_loggers_LoggerStopMode_Module_GateProxy_query

/* Module__startupDone__S */
xdc_Bool ti_uia_loggers_LoggerStopMode_Module__startupDone__S( void )
{
    return ti_uia_loggers_LoggerStopMode_Module__startupDone__F();
}

/* Handle__label__S */
xdc_runtime_Types_Label *ti_uia_loggers_LoggerStopMode_Handle__label__S(xdc_Ptr obj, xdc_runtime_Types_Label *lab) 
{
    lab->handle = obj;
    lab->modId = 32829;
    lab->named = FALSE;
    lab->iname = xdc_runtime_Text_nameUnknown;

    return lab;
}

/* Params__init__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Params__init__S( xdc_Ptr prms, const void *src, xdc_SizeT psz, xdc_SizeT isz ) 
{
    xdc_runtime_Core_assignParams__I(prms, (xdc_CPtr)(src ? src : &ti_uia_loggers_LoggerStopMode_Object__PARAMS__C), psz, isz);
}

/* Object__get__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__get__S(xdc_Ptr oa, xdc_Int i)
{
    if (oa != NULL) {
        return ((ti_uia_loggers_LoggerStopMode_Object__ *)oa) + i;
    }

    /* the bogus 'const' in the cast suppresses Klocwork MISRA complaints */
    return ((ti_uia_loggers_LoggerStopMode_Object__ * const)ti_uia_loggers_LoggerStopMode_Object__table__C) + i;
}

/* Object__first__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__first__S( void ) 
{
    xdc_runtime_Types_InstHdr *iHdr = (xdc_runtime_Types_InstHdr *)ti_uia_loggers_LoggerStopMode_Module__root__V.link.next;

    if (iHdr != (xdc_runtime_Types_InstHdr *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return iHdr + 1;
    }
    else {
        return NULL;
    }
}

/* Object__next__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__next__S( xdc_Ptr obj )
{
    xdc_runtime_Types_InstHdr *iHdr = ((xdc_runtime_Types_InstHdr *)obj) - 1;

    if (iHdr->link.next != (xdc_runtime_Types_Link *)&ti_uia_loggers_LoggerStopMode_Module__root__V.link) {
        return (xdc_runtime_Types_InstHdr *)(iHdr->link.next) + 1;
    }
    else {
        return NULL;
    }
}

/* Object__create__S */
xdc_Ptr ti_uia_loggers_LoggerStopMode_Object__create__S(
    xdc_CPtr req_args,
    const xdc_UChar *paramsPtr,
    xdc_SizeT prm_size,
    xdc_runtime_Error_Block *eb)
{
    ti_uia_loggers_LoggerStopMode_Params instPrms;
    ti_uia_loggers_LoggerStopMode_Object *objp;

    /* common instance initialization */
    objp = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, NULL, &instPrms, (xdc_CPtr)paramsPtr, 0, eb);
    if (objp == NULL) {
        return NULL;
    }


    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(objp, &instPrms);
    return objp;
}

/* create */
ti_uia_loggers_LoggerStopMode_Handle ti_uia_loggers_LoggerStopMode_create( const ti_uia_loggers_LoggerStopMode_Params *paramsPtr, xdc_runtime_Error_Block *eb)
{
    ti_uia_loggers_LoggerStopMode_Params prms;
    ti_uia_loggers_LoggerStopMode_Object *obj;


    /* common instance initialization */
    obj = xdc_runtime_Core_createObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, NULL, &prms, (xdc_CPtr)paramsPtr, 0, eb);
    if (obj == NULL) {
        return NULL;
    }

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E(obj, &prms);
    return obj;
}

/* construct */
void ti_uia_loggers_LoggerStopMode_construct(ti_uia_loggers_LoggerStopMode_Struct *objp, const ti_uia_loggers_LoggerStopMode_Params *paramsPtr)
{
    ti_uia_loggers_LoggerStopMode_Params instPrms;

    /* common instance initialization */
    (Void)xdc_runtime_Core_constructObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, objp, &instPrms, (xdc_CPtr)paramsPtr, 0, NULL);

    /* module-specific initialization */
    ti_uia_loggers_LoggerStopMode_Instance_init__E((xdc_Ptr)objp, &instPrms);
}

/* destruct */
void ti_uia_loggers_LoggerStopMode_destruct(ti_uia_loggers_LoggerStopMode_Struct *obj)
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, obj, NULL, xdc_runtime_Core_NOSTATE, TRUE);
}

/* Object__delete__S */
xdc_Void ti_uia_loggers_LoggerStopMode_Object__delete__S( xdc_Ptr instp ) 
{
    xdc_runtime_Core_deleteObject__I(&ti_uia_loggers_LoggerStopMode_Object__DESC__C, *((ti_uia_loggers_LoggerStopMode_Object**)instp), NULL, xdc_runtime_Core_NOSTATE, FALSE);
    *((ti_uia_loggers_LoggerStopMode_Handle*)instp) = NULL;
}

/* delete */
void ti_uia_loggers_LoggerStopMode_delete(ti_uia_loggers_LoggerStopMode_Handle *instp)
{
    ti_uia_loggers_LoggerStopMode_Object__delete__S(instp);
}


/*
 * ======== ti.uia.runtime.EventHdr SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_EventHdr_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.QueueDescriptor SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_QueueDescriptor_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== ti.uia.runtime.UIAMetaData SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool ti_uia_runtime_UIAMetaData_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Assert SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Assert_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Core SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Core_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Defaults SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Defaults_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Diags SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Diags_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Error SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Error_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Gate SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Gate_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Log SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Log_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Main_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Main_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Main_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Main_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Main_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Main_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Main_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Main_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Main_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Main_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Main_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Main_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Main_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Main_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Main_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Main_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Main_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Main_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Memory SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Memory_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Memory_HeapProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_Memory_HeapProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_Memory_HeapProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_Memory_HeapProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_Memory_HeapProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_Memory_HeapProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_Memory_HeapProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_Memory_HeapProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_Memory_HeapProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_Memory_HeapProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_Memory_HeapProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_Memory_HeapProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_Memory_HeapProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_Memory_HeapProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_Memory_HeapProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_Memory_HeapProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_Memory_HeapProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_Memory_HeapProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_Memory_HeapProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_Memory_HeapProxy_Proxy__abstract__S(void)
{
    return 1;
}
xdc_CPtr xdc_runtime_Memory_HeapProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_heaps_HeapMem_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.Registry SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Registry_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Startup SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Startup_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.SysMin SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_SysMin_Module__startupDone__S( void )
{
    return xdc_runtime_SysMin_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_System_Module__startupDone__S( void )
{
    return xdc_runtime_System_Module__startupDone__F();
}



/*
 * ======== xdc.runtime.System_Module_GateProxy SYSTEM FUNCTIONS ========
 */

/* per-module runtime symbols */
#undef Module__MID
#define Module__MID xdc_runtime_System_Module_GateProxy_Module__id__C

#undef Module__DGSINCL
#define Module__DGSINCL xdc_runtime_System_Module_GateProxy_Module__diagsIncluded__C

#undef Module__DGSENAB
#define Module__DGSENAB xdc_runtime_System_Module_GateProxy_Module__diagsEnabled__C

#undef Module__DGSMASK
#define Module__DGSMASK xdc_runtime_System_Module_GateProxy_Module__diagsMask__C

#undef Module__LOGDEF
#define Module__LOGDEF xdc_runtime_System_Module_GateProxy_Module__loggerDefined__C

#undef Module__LOGOBJ
#define Module__LOGOBJ xdc_runtime_System_Module_GateProxy_Module__loggerObj__C

#undef Module__LOGFXN0
#define Module__LOGFXN0 xdc_runtime_System_Module_GateProxy_Module__loggerFxn0__C

#undef Module__LOGFXN1
#define Module__LOGFXN1 xdc_runtime_System_Module_GateProxy_Module__loggerFxn1__C

#undef Module__LOGFXN2
#define Module__LOGFXN2 xdc_runtime_System_Module_GateProxy_Module__loggerFxn2__C

#undef Module__LOGFXN4
#define Module__LOGFXN4 xdc_runtime_System_Module_GateProxy_Module__loggerFxn4__C

#undef Module__LOGFXN8
#define Module__LOGFXN8 xdc_runtime_System_Module_GateProxy_Module__loggerFxn8__C

#undef Module__G_OBJ
#define Module__G_OBJ xdc_runtime_System_Module_GateProxy_Module__gateObj__C

#undef Module__G_PRMS
#define Module__G_PRMS xdc_runtime_System_Module_GateProxy_Module__gatePrms__C

#undef Module__GP_create
#define Module__GP_create xdc_runtime_System_Module_GateProxy_Module_GateProxy_create
#undef Module__GP_delete
#define Module__GP_delete xdc_runtime_System_Module_GateProxy_Module_GateProxy_delete
#undef Module__GP_enter
#define Module__GP_enter xdc_runtime_System_Module_GateProxy_Module_GateProxy_enter
#undef Module__GP_leave
#define Module__GP_leave xdc_runtime_System_Module_GateProxy_Module_GateProxy_leave
#undef Module__GP_query
#define Module__GP_query xdc_runtime_System_Module_GateProxy_Module_GateProxy_query

xdc_Bool xdc_runtime_System_Module_GateProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_Module_GateProxy_Proxy__delegate__S(void)
{
    return (const void *)&ti_sysbios_gates_GateHwi_Module__FXNS__C;
}



/*
 * ======== xdc.runtime.System_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_System_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_System_SupportProxy_Proxy__delegate__S(void)
{
    return (const void *)&xdc_runtime_SysMin_Module__FXNS__C;
}


/*
 * ======== xdc.runtime.Text SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Text_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Timestamp_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.TimestampNull SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_TimestampNull_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== xdc.runtime.Timestamp_SupportProxy SYSTEM FUNCTIONS ========
 */


xdc_Bool xdc_runtime_Timestamp_SupportProxy_Proxy__abstract__S(void)
{
    return 0;
}
xdc_CPtr xdc_runtime_Timestamp_SupportProxy_Proxy__delegate__S(void)
{
    return 0;
}


/*
 * ======== xdc.runtime.Types SYSTEM FUNCTIONS ========
 */

/* Module__startupDone__S */
xdc_Bool xdc_runtime_Types_Module__startupDone__S( void )
{
    return 1;
}



/*
 * ======== INITIALIZATION ENTRY POINT ========
 */

#include <stdint.h>
extern int_least32_t __xdc__init(void);
    __attribute__ ((used))
__FAR__ int_least32_t (* volatile __xdc__init__addr)(void) = &__xdc__init;


/*
 * ======== PROGRAM GLOBALS ========
 */

    __attribute__ ((used))
const ti_sysbios_heaps_HeapMem_Handle heap0 = (ti_sysbios_heaps_HeapMem_Handle)((ti_sysbios_heaps_HeapMem_Handle)&ti_sysbios_heaps_HeapMem_Object__table__V[0]);

