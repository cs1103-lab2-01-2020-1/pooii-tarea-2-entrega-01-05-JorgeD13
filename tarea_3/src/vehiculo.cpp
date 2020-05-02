//
// Created by Usuario on 30/04/2020.
//

#include "vehiculo.h"

vehiculo vehiculo::operator=(vehiculo& v){
    this->n_ruedas=v.n_ruedas;
    this->velocidad=v.velocidad;
    return *this;
}

//--------------------------------------

camion::camion(){
    n_ruedas=8;
    velocidad=rand()%60 + 40;
}

int camion::get_velocidad(){
    return velocidad;
}

int camion::get_ruedas(){
    return n_ruedas;
}

camion::~camion(){}

//--------------------------------------

bicicleta::bicicleta(){
    n_ruedas=2;
    velocidad=rand()%15+15;
}

int bicicleta::get_velocidad(){
    return velocidad;
}

int bicicleta::get_ruedas(){
    return n_ruedas;
}

bicicleta::~bicicleta(){}