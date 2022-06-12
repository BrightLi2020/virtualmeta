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
* File Name       : main
* Create Author   : Li Panfeng
* Create Date     : 2022-06-11
* Describe        : This file provide main.
******************************************************************************/
#include <QApplication>

#include "appfw.h"
#include "studioui.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QEventLoop exit;

    new Appfw(&exit);
    new StudioUi();

    app.exec();
    exit.exec();
}
