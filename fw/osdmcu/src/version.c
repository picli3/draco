/*
    DRACO - Copyright (C) 2013-2014 Daniel Strnad

    This file is part of DRACO project.

    DRACO is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    DRACO is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

/**
 * @file    version.c
 * @brief   firmware version
 *
 */

#include "version.h"

#ifndef GIT_DESCRIBE
    #define GIT_DESCRIBE "unknown version"
#endif

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

// version mustn't exceed 32 bytes!
#ifndef OSD_SIMULATOR
__attribute__ ((section(".app_version"), used))
#endif
const char __firmwareVersion[] = "" TOSTRING(GIT_DESCRIBE);
