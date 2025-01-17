/****************************************************************************
** Copyright (C) 2017 Ivan Assing da Silva
** Contact: ivanassing@gmail.com
**
** This file is part of the FEA_MNE772 project.
**
** This file is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 3 of the License, or
** (at your option) any later version.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#include "node3d.h"

Node3D::Node3D()
{

}

Node3D::Node3D(int index, double *coordinates_, bool *restrictions,
               double *loading_, double *displacements)
    :index(index), restrictions(restrictions),
      loading(loading_), displacements(displacements)
{
    coordinates = new double[3];
    coordinates[0] = coordinates_[0];
    coordinates[1] = coordinates_[1];
    coordinates[2] = coordinates_[2];

    loading = new double[3];
    loading[0] = loading_[0];
    loading[1] = loading_[1];
    loading[2] = loading_[2];
}

Node3D::~Node3D()
{
    if(coordinates) delete [] coordinates;
    if(loading) delete [] loading;
}
