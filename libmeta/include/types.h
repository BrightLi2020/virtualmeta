/******************************************************************************
*
* Copyright (C) 2021-2022 virtual meta All Rights Reserved.
*
* http://www.virtualmeta.com.cn
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
* OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
* OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
* ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
* OTHER DEALINGS IN THE SOFTWARE.
*
******************************************************************************/

/******************************************************************************
* File Name       : types.h
* Create Author   : Li Panfeng
* Create Date     : 2021-10-22
* Describe        : This file provide macro of type.
******************************************************************************/

#ifndef TYPES_H
#define TYPES_H

#include "libmeta_global.h"
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>

typedef const char*             type_t;
typedef const char* const       icon_t;

typedef const char*             string_t;
typedef const char*             path_t;
typedef const uint64_t          id_t;

typedef struct pair_t {
    pair_t(const char* label, const char* value = "") : label(label), value(value) {
        assert(label && strlen(label));
    }
    const char* label;
    const char* value;
}pair_t;

class Object;
class CNode;
class symbolX;

typedef Object*(*__creator__)(type_t, ...);
typedef symbolX*(*__symbol__)(CNode*, string_t, pair_t**);

#define PUBLIC(Class)           pair_t("public", #Class)
#define PROTECTED(Class)        pair_t("protected", #Class)
#define PRIVATE(Class)          pair_t("private", #Class)

META_EXPORT type_t typed(const char*);


#endif // !TYPES_H
