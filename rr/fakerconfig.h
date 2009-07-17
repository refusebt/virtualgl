/* Copyright (C)2009 D. R. Commander
 *
 * This library is free software and may be redistributed and/or modified under
 * the terms of the wxWindows Library License, Version 3.1 or (at your option)
 * any later version.  The full license is in the LICENSE.txt file included
 * with this distribution.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * wxWindows Library License for more details.
 */

#ifndef __FAKERCONFIG_H__
#define __FAKERCONFIG_H__

#include <X11/Xlib.h>
#include "rr.h"

#ifndef FCONFIG_USESHM
#ifndef WIN32
#define FCONFIG_USESHM 1
#endif
#endif

FakerConfig *fconfig_instance(void);
void fconfig_deleteinstance(void);

#define fconfig (*fconfig_instance())

#if FCONFIG_USESHM==1
int fconfig_getshmid(void);
#endif
void fconfig_print(FakerConfig &fc);
void fconfig_reloadenv(void);
void fconfig_setcompress(FakerConfig &fc, int i);
void fconfig_setdefaultsfromdpy(Display *dpy);
void fconfig_setgamma(FakerConfig &fc, double gamma);

#endif
