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

#ifndef __FILTRO_H__
#define __FILTRO_H__

#include <fcntl.h>
#include <stdlib.h>

#include "defs.h"

/*
  Implementaci�n del filtrado digital.
 */

class Filtro {

 private:

 public:

  FLT*  a;
  FLT*  b;  // coeficientes
  FLT*  s;  // estado

  unsigned int N;

  void filtrarII(unsigned int n, FLT* in, FLT* out); // filtrar un vector
  FLT  filtrarII(FLT in);                            // filtrar una muestra

  Filtro();
  Filtro(unsigned int Na, unsigned int Nb, FLT* a, FLT* b, FLT* s = NULL);
  void Actualizar(unsigned int Na, unsigned int Nb, FLT* a, FLT* b);
  ~Filtro();
};

#endif
