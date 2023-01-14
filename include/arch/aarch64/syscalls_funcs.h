/*
 * Copyright 2020, Data61, CSIRO (ABN 41 687 119 230)
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <sel4/syscalls.h>

static inline seL4_Error seL4_BenchmarkResetLog(void)
{
    seL4_Word unused0 = 0;
    seL4_Word unused1 = 0;
    seL4_Word unused2 = 0;
    seL4_Word unused3 = 0;
    seL4_Word unused4 = 0;
    seL4_Word ret;

    arm_sys_send_recv(seL4_SysBenchmarkResetLog, 0, &ret, 0, &unused0, &unused1, &unused2, &unused3, &unused4, 0);

    return (seL4_Error) ret;
}

static inline seL4_Word seL4_BenchmarkFinalizeLog(void)
{
    seL4_Word unused0 = 0;
    seL4_Word unused1 = 0;
    seL4_Word unused2 = 0;
    seL4_Word unused3 = 0;
    seL4_Word unused4 = 0;
    seL4_Word index_ret;

    arm_sys_send_recv(seL4_SysBenchmarkFinalizeLog, 0, &index_ret, 0, &unused0, &unused1, &unused2, &unused3, &unused4, 0);

    return (seL4_Word) index_ret;
}
