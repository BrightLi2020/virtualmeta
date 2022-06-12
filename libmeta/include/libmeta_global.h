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
* File Name       : libmeta_global.h
* Create Author   : Li Panfeng
* Create Date     : 2021-10-22
* Describe        : This file provide export libmeta macro.
******************************************************************************/

#ifndef LIBMETA_GLOBAL_H
#define LIBMETA_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBMETA_LIBRARY)
#  define META_EXPORT Q_DECL_EXPORT
#else
#  define META_EXPORT Q_DECL_IMPORT
#endif

#endif // !LIBMETA_GLOBAL_H
