/*++

    The MIT License (MIT)

    Copyright (c) 2015 Aleksey Kabanov

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.

Module Name:

    Registry.h

Abstract:

    Contains Registry helper functions.

Environment:

    Kernel mode.

--*/

#pragma once
#ifndef __LAZY_COPY_REGISTRY_H__
#define __LAZY_COPY_REGISTRY_H__

//------------------------------------------------------------------------
//  Includes.
//------------------------------------------------------------------------

#include "Globals.h"

//------------------------------------------------------------------------
//  Function prototypes.
//------------------------------------------------------------------------

_Check_return_
NTSTATUS
LcGetRegistryValue(
    _In_     PUNICODE_STRING                 RegistryPath,
    _In_     PUNICODE_STRING                 RegistryValueName,
    _Outptr_ PKEY_VALUE_PARTIAL_INFORMATION* ValueBuffer
    );

_Check_return_
NTSTATUS
LcGetRegistryValueDWord(
    _In_  PUNICODE_STRING RegistryPath,
    _In_  PUNICODE_STRING RegistryValueName,
    _Out_ PULONG          Value
    );

_Check_return_
NTSTATUS
LcGetRegistryValueString(
    _In_  PUNICODE_STRING RegistryPath,
    _In_  PUNICODE_STRING RegistryValueName,
    _Out_ PUNICODE_STRING Value
    );

#endif // __LAZY_COPY_REGISTRY_H__
