#ifndef EMIT_H
#define EMIT_H
/*
 * Copyright (c) 2005, Johns Hopkins University and The EROS Group, LLC.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *
 *  * Neither the name of the Johns Hopkins University, nor the name
 *    of The EROS Group, LLC, nor the names of their contributors may
 *    be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */

bool emit_normal(machine_t *M, decode_t *d);

bool emit_int(machine_t *M, decode_t *d);
bool emit_sysenter(machine_t *M, decode_t *d);

bool emit_jcond(machine_t *M, decode_t *d);
bool emit_other_jcond(machine_t *M, decode_t *d);
bool emit_jmp(machine_t *M, decode_t *d);
bool emit_jmp_near_mem(machine_t *M, decode_t *d);

bool emit_call_disp(machine_t *M, decode_t *d);
bool emit_call_near_mem(machine_t *M, decode_t *d);

bool emit_ret(machine_t *M, decode_t *d);
bool emit_ret_Iw(machine_t *M, decode_t *d);

typedef struct bb_dump_header bb_dump_header;
struct bb_dump_header {
  unsigned long version;
  unsigned long bbCache_size;
};

#define EMIT_INT80_SYSCALL    0x1u
#define EMIT_SYSENTER_SYSCALL 0x2u

#endif /* EMIT_H */
