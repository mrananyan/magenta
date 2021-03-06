// Copyright 2016 The Fuchsia Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <magenta/types.h>
#include <stdbool.h>

#include <magenta/syscalls-types.h>

#ifdef __cplusplus
extern "C" {
#endif

// define all of the syscalls from the syscall list header.
// user space syscall vaneer routines are all prefixed with mx_
#define MAGENTA_SYSCALL_DEF(a...)
#define MAGENTA_DDKCALL_DEF(nargs64, nargs32, n, ret, name, args...) extern ret mx_##name(args);
#define MAGENTA_SYSCALL_DEF_WITH_ATTRS(a...)

#include <magenta/syscalls.inc>

#ifdef __cplusplus
}
#endif
