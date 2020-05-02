//
// Created by Usuario on 27/04/2020.
//

#ifndef TAREA_3_MENU_H
#define TAREA_3_MENU_H


#include<iostream>
#include<vector>
#include "Orden.h"
#include "User.h"
using namespace std;

class Menu {
    int opcion;
    vector<Orden*> ordenes;
    User u;
public:
    Menu(): opcion{} {}
    void ejecutar();
    void imprimir();
    void set_user(User& _u);
    void seleccionar_menu();
    void crear_orden();
    void seleccionar_orden();
    void ver_ordenes();
    void imprimir_ordenes();
    void volver();
    vector<Orden*> get_ordenes();
};


#endif //TAREA_3_MENU_H
