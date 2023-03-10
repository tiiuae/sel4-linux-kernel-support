/*
 * Copyright 2020, Data61, CSIRO (ABN 41 687 119 230)
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */


/* This header was generated by kernel/tools/syscall_header_gen.py.
 *
 * To add a system call number, edit kernel/libsel4/include/api/syscall.xml
 *
 */
#pragma once

typedef enum {
       seL4_SysCall = -1,
       seL4_SysReplyRecv = -2,
       seL4_SysSend = -3,
       seL4_SysNBSend = -4,
       seL4_SysRecv = -5,
       seL4_SysReply = -6,
       seL4_SysYield = -7,
       seL4_SysNBRecv = -8,
       seL4_SysDebugPutChar = -9,
       seL4_SysDebugDumpScheduler = -10,
       seL4_SysDebugHalt = -11,
       seL4_SysDebugCapIdentify = -12,
       seL4_SysDebugSnapshot = -13,
       seL4_SysDebugNameThread = -14,
       seL4_SysDebugSendIPI = -15,
       seL4_SysDebugRun = -16,
       seL4_SysBenchmarkFlushCaches = -17,
       seL4_SysBenchmarkResetLog = -18,
       seL4_SysBenchmarkFinalizeLog = -19,
       seL4_SysBenchmarkSetLogBuffer = -20,
       seL4_SysBenchmarkNullSyscall = -21,
       seL4_SysBenchmarkGetThreadUtilisation = -22,
       seL4_SysBenchmarkResetThreadUtilisation = -23,
       seL4_SysBenchmarkDumpAllThreadsUtilisation = -24,
       seL4_SysBenchmarkResetAllThreadsUtilisation = -25,
       seL4_SysX86DangerousWRMSR = -26,
       seL4_SysX86DangerousRDMSR = -27,
       seL4_SysVMEnter = -28,
       seL4_SysSetTLSBase = -29,
} seL4_Syscall_ID;
