//
// Created by Usuario on 30/04/2020.
//

#ifndef TAREA_3_USER_H
#define TAREA_3_USER_H

#include <string>
using namespace std;

class User{
    string nombre;
    string apellido;
    string contrasena;
    string username;
public:
    User();
    User( string _nombre,
          string _apellido,
          string _contrasena,
          string _username);
    void imprimir_user();
    string get_nombre();
    string get_apellido();
    string get_contrasena();
    string get_username();
    User operator=(User& u_p);
};

#endif //TAREA_3_USER_H
