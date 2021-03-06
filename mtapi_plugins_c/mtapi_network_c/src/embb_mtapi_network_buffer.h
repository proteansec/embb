/*
 * Copyright (c) 2014-2016, Siemens AG. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef MTAPI_PLUGINS_C_MTAPI_NETWORK_C_SRC_EMBB_MTAPI_NETWORK_BUFFER_H_
#define MTAPI_PLUGINS_C_MTAPI_NETWORK_C_SRC_EMBB_MTAPI_NETWORK_BUFFER_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


struct embb_mtapi_network_buffer_struct {
  int position;
  int size;
  int capacity;
  char * data;
};

typedef struct embb_mtapi_network_buffer_struct embb_mtapi_network_buffer_t;

int embb_mtapi_network_buffer_initialize(
  embb_mtapi_network_buffer_t * that,
  int capacity
);

void embb_mtapi_network_buffer_finalize(
  embb_mtapi_network_buffer_t * that
);

void embb_mtapi_network_buffer_clear(
  embb_mtapi_network_buffer_t * that
);

int embb_mtapi_network_buffer_push_back_int8(
  embb_mtapi_network_buffer_t * that,
  int8_t value
);

int embb_mtapi_network_buffer_push_back_int16(
  embb_mtapi_network_buffer_t * that,
  int16_t value
);

int embb_mtapi_network_buffer_push_back_int32(
  embb_mtapi_network_buffer_t * that,
  int32_t value
);

int embb_mtapi_network_buffer_push_back_rawdata(
  embb_mtapi_network_buffer_t * that,
  int32_t size,
  void const * rawdata
);

int embb_mtapi_network_buffer_pop_front_int8(
  embb_mtapi_network_buffer_t * that,
  int8_t * value
);

int embb_mtapi_network_buffer_pop_front_int16(
  embb_mtapi_network_buffer_t * that,
  int16_t * value
);

int embb_mtapi_network_buffer_pop_front_int32(
  embb_mtapi_network_buffer_t * that,
  int32_t * value
);

int embb_mtapi_network_buffer_pop_front_rawdata(
  embb_mtapi_network_buffer_t * that,
  int32_t size,
  void * rawdata
);


#ifdef __cplusplus
}
#endif

#endif // MTAPI_PLUGINS_C_MTAPI_NETWORK_C_SRC_EMBB_MTAPI_NETWORK_BUFFER_H_
