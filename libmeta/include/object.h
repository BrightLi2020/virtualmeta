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
* File Name       : object.h
* Create Author   : Li Panfeng
* Create Date     : 2021-10-22
* Describe        : This file provide Object.
******************************************************************************/

#ifndef OBJECT_H
#define OBJECT_H

#include "libmeta_global.h"
#include "helper.h"

#define DECLARE_CLASS(Class, ...) \
public: \
    explicit Class(const Class&) = delete; \
    static type_t typeof(); \
    static Meta* staticMeta(); \
    virtual Meta* meta() const override;

// define Object
class META_EXPORT Object
{
DECLARE_OBJECT(Object)
public:
    explicit Object(id_t id = 0);
    virtual ~Object();

public:
    static Object* get(id_t id);

public:
    type_t type() const;
    bool is(type_t type) const;

public:
    id_t id = 0;
};

#endif // !OBJECT_H
