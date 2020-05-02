//
// Created by Usuario on 27/04/2020.
//

#include "producto.h"

producto::producto(string _nombre, int _precio, int _q) {
    nombre = _nombre;
    precio = _precio;
    q=_q;
}


string producto::get_nombre(){
    return nombre;
}

int producto::get_q(){
    return q;
}

int producto::get_precio(){
    return precio;
}
