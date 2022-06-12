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
* File Name       : helper.h
* Create Author   : Li Panfeng
* Create Date     : 2022-03-26
* Describe        : This file provide helper.
******************************************************************************/

#ifndef HELPER_H
#define HELPER_H

#include "libmeta_global.h"
#include "meta.h"

#include <string.h>
#include <stdlib.h>
#include <assert.h>

#include "types.h"

#define DECLARE_OBJECT(Class, ...) \
public: \
    explicit Class(const Class&) = delete; \
    static type_t typeof(); \
    static Meta* staticMeta(); \
    virtual Meta* meta() const;

// implement struct helper
struct META_EXPORT helper_t {
    explicit helper_t(const char *, const char *);
    virtual ~helper_t();

public:
    virtual void initialized() = 0;
    inline Meta* meta() const { return metaX; }

private:
    Meta* metaX = nullptr;
};

#endif // !HELPER_H
