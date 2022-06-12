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
* File Name       : meta.h
* Create Author   : Li Panfeng
* Create Date     : 2021-10-22
* Describe        : This file provide Meta.
******************************************************************************/

#ifndef META_H
#define META_H

#include "libmeta_global.h"
#include "types.h"

struct meta_t;
class META_EXPORT Meta
{
public:
    explicit Meta(type_t, type_t);
    virtual ~Meta();

public:
    static Meta* get(type_t);
    static bool relationship();

public:
    __creator__ creator(type_t) const;

public:
    void registerInherit(pair_t**, int32_t);
    void registerCreator(type_t, __creator__, ...);
    virtual void registerCreator(__symbol__, ...);
    virtual void registerAttributes(type_t, ...);

public:
    inline type_t getType() const { return type; }
    inline type_t getClassify() const { return classify; }
    inline Meta* getParent() const { return parent; }
    bool is(type_t) const;

private:
    type_t type = nullptr;
    type_t classify = nullptr;
    Meta *parent = nullptr;
    pair_t **inherits = nullptr;
    meta_t *t = nullptr;
};

#endif // !META_H
