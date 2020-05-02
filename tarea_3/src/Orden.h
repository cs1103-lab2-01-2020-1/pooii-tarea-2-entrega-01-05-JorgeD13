//
// Created by Usuario on 27/04/2020.
//

#ifndef TAREA_3_ORDEN_H
#define TAREA_3_ORDEN_H

#include <vector>
#include <iostream>
#include "producto.h"
#include "vehiculo.h"
#include "Estado.h"

using namespace std;

class Orden {
    vector <producto*> productos;
    bicicleta b;
    camion c;
    Estado est;
public:
    Orden();
    void agregar_producto(producto* producto);
    void quitar_producto();
    bicicleta get_b();
    camion get_c();
    Estado get_est();
    vector<producto*> get_productos();
};


#endif //TAREA_3_ORDEN_H
