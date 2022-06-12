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
* This file is base on QT, it need QT company license
* Contact: https://www.qt.io/licensing/
*
* GNU Lesser General Public License Usage
* https://www.gnu.org/licenses/lgpl-3.0.html.
*
******************************************************************************/

/******************************************************************************
* File Name       : studioui.h
* Create Author   : Li Panfeng
* Create Date     : 2022-06-11
* Describe        : This file provide StudioUi.
******************************************************************************/

#ifndef STUDIOUI_H
#define STUDIOUI_H

#include "libmeta_global.h"
#include "widget/mainwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class StudioUi; }
QT_END_NAMESPACE

class META_EXPORT StudioUi : public MainWindow
{
Q_OBJECT
DECLARE_CLASS(StudioUi, PUBLIC(MainWindow))

public:
    explicit StudioUi();
    virtual ~StudioUi() override;

private:
    Ui::StudioUi *ui = nullptr;
};

#endif //!STUDIOUI_H
