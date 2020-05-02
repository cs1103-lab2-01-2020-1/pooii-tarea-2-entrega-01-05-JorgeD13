//
// Created by Usuario on 30/04/2020.
//

#include "User.h"
#include <iostream>

User::User(){}

User::User( string _nombre,
            string _apellido,
            string _contrasena,

            string _username)
{
    nombre=_nombre;
    apellido=_apellido;
    contrasena=_contrasena;
    username=_username;
}

void User::imprimir_user(){
    cout<<"*=====Bienvenid@ "<<nombre<<" ("<<username<<")=====*"<<endl<<endl<<endl;
}

string User::get_nombre(){
    return nombre;
}

string User::get_apellido(){
    return apellido;
}

string User::get_contrasena(){
    return contrasena;
}

string User::get_username(){
    return username;
}

User User::operator=(User& u_p){
    this->nombre=u_p.nombre;
    this->contrasena=u_p.contrasena;
    this->apellido=u_p.apellido;
    this->username=u_p.username;
    return *this;
}
