//
// Created by Usuario on 27/04/2020.
//

#ifndef TAREA_3_PRODUCTO_H
#define TAREA_3_PRODUCTO_H
#include <string>
using namespace std;

class producto {
    string nombre;
    int precio;
    int q;
public:
    producto(string _nombre, int _precio, int q);
    string get_nombre();
    int get_precio();
    int get_q();
};

#endif //TAREA_3_PRODUCTO_H
