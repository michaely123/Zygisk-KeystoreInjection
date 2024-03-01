// Copyright (c) 2021-2022 ByteDance Inc.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//

// Created by Kelun Cai (caikelun@bytedance.com) on 2021-04-11.

#pragma once

// Global debugging.
//
// Note that in some cases these logs themselves can cause a crash.
//
//#define SH_CONFIG_DEBUG

// Operation record of hook and unhook.
//
// Disabling it can reduce hook/unhook latency, memory footprint and file size.
//
#define SH_CONFIG_OPERATION_RECORDS

// Crash signal protection.
//
// Do not disable it in a production environment.
//
#define SH_CONFIG_SIG_PROT

// When hooking, try to find an exit for the relative jump for the dynamic library.
//
// Do not disable it in a production environment.
//
#define SH_CONFIG_TRY_WITH_EXIT

// When hooking the function of the thumb instruction, if the function is too short,
// try to use the gap aligned at the end of the function.
//
// Do not disable it in a production environment.
//
#define SH_CONFIG_DETECT_THUMB_TAIL_ALIGNED
