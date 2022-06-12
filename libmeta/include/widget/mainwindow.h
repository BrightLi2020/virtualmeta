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
* File Name       : mainwindow.h
* Create Author   : Li Panfeng
* Create Date     : 2021-10-25
* Describe        : This file provide MainWindow.
******************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "libmeta_global.h"
#include "cwidget.h"
#include <QMainWindow>

class TopMenu;

struct mainwindow_t;
class META_EXPORT MainWindow : public QMainWindow, public CWidget
{
Q_OBJECT
DECLARE_CLASS(MainWindow, PUBLIC(QMainWindow), PUBLIC(CWidget))
public:
    explicit MainWindow();
    virtual ~MainWindow() override;

public:
    virtual void onInitialized() override;
    virtual void onDestroy() override;

private:
    virtual void closeEvent(QCloseEvent*) final;

private:
    void addTopMenu(TopMenu*);
    void removeTopMenu(TopMenu*);

private:
    mainwindow_t* t = nullptr;
};

#endif // !MAINWINDOW_H
