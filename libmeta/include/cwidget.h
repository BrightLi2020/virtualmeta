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
* File Name       : cwidget.h
* Create Author   : Li Panfeng
* Create Date     : 2022-05-25
* Describe        : This file provide CWidget.
******************************************************************************/
#ifndef CWIDGET_H
#define CWIDGET_H

#include "libmeta_global.h"
#include "object.h"

// declare
struct widget_t;
class Handle;

// declare class
class META_EXPORT CWidget : public Object
{
DECLARE_CLASS(CWidget, PUBLIC(Object))
public:
    explicit CWidget(CWidget* parent);
    virtual ~CWidget() override;

public:
    virtual void onInitialized();
    virtual void onDestroy();

    void release();
    Handle* handle() const;

private:
    widget_t *t = nullptr;
};

#endif // !CWIDGET_H
