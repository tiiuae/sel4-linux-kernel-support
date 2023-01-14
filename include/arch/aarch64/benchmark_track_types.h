/*
 * Copyright 2020, Data61, CSIRO (ABN 41 687 119 230)
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

/* the following code can be used at any point in the kernel
 * to determine detail about the kernel entry point */
typedef enum {
    Entry_Interrupt,
    Entry_UnknownSyscall,
    Entry_UserLevelFault,
    Entry_DebugFault,
    Entry_VMFault,
    Entry_Syscall,
    Entry_UnimplementedDevice,
    Entry_VCPUFault,
    Entry_Switch,
} entry_type_t;

char *entry_names[] = {
    [Entry_Interrupt]           = "Entry_Interrupt",
    [Entry_UnknownSyscall]      = "Entry_UnknownSyscall",
    [Entry_UserLevelFault]      = "Entry_UserLevelFault",
    [Entry_DebugFault]          = "Entry_DebugFault",
    [Entry_VMFault]             = "Entry_VMFault",
    [Entry_Syscall]             = "Entry_Syscall",
    [Entry_UnimplementedDevice] = "Entry_UnimplementedDevice",
    [Entry_VCPUFault]           = "Entry_VCPUFault",
    [Entry_Switch]              = "Entry_Switch",
};

/**
 * @brief Kernel entry logging
 *
 * Encapsulates useful info about the cause of the kernel entry
 */
typedef struct SEL4_PACKED kernel_entry {
    seL4_Word path: 4;
    union {
        struct {
            seL4_Word core: 3;
            seL4_Word word: 26;
        };
        /* Tracked kernel entry info filled from outside this file */
        struct {
            seL4_Word syscall_no: 4;
            seL4_Word cap_type: 5;
            seL4_Word is_fastpath: 1;
            seL4_Word invocation_tag: 19;
        };
        void *next;
    };
} kernel_entry_t;

typedef struct benchmark_syscall_log_entry {
    uint64_t  start_time;
    uint32_t  duration;
    kernel_entry_t entry;
} benchmark_track_kernel_entry_t;
