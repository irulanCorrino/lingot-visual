//-*- C++ -*-
/*
  lingot, a musical instrument tuner.

  Copyright (C) 2004   Ib�n Cereijo Gra�a, Jairo Chapela Mart�nez.

  This file is part of lingot.

  lingot is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.
  
  lingot is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License
  along with lingot; if not, write to the Free Software
  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef __DEFS_H__
#define __DEFS_H__

#include <sys/types.h>

// precisi�n en coma flotante con la que trabaja el programa.
#define FLT                   double

#define TIPO_MUESTRA          int16_t
#define FORMATO_MUESTRA       AFMT_S16_LE


#define CONFIG_FILE_HOME      ".lingot/lingot.conf"
extern char* CONFIG_FILE;

#define QUICK_MESSAGES

#define GTK_EVENTS_RATE       20.0
#define NEEDLE_RATE           60.0

// si queremos usar la FFT implementada en esta librer�a:
//#define LIB_FFTW
//#define LIBSNDOBJ

/* Includes necesarios para la internacionalizaci�n */
#include <libintl.h>
#include <locale.h>
#include <langinfo.h>

#define PACKAGE "lingot"
#define LOCALEDIR "."
#define _(x) gettext(x)

#define VERSION "0.6.0"

#endif
