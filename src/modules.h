/*
 * active port forwarder - software for secure forwarding
 * Copyright (C) 2003,2004,2005 jeremian <jeremian [at] poczta.fm>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 */

#include <config.h>

#ifdef HAVE_LIBDL

#  ifndef _JS_MODULES_H
#  define _JS_MODULES_H

typedef struct {
    char loaded;
    char* name;
    void* handle;
    char* (*info)(void);
    int (*allow)(char*, char*);
    int (*filter)(char*, unsigned char*, int*);
} moduleT;

int loadmodule(moduleT* module);
int releasemodule(moduleT* module);
int ismloaded(moduleT* module);

#  endif

#endif