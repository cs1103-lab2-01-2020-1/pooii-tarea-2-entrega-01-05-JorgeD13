//
// Created by Usuario on 30/04/2020.
//

#include "Estado.h"

Estado::Estado(){
    estado1="Cancelado";
    estado2="En camino";
    estado3="Entregado";
    k=1;
}

string Estado::get_estado(){
    if(k==1){
        k=2;
        return estado1;
    }
    if(k==2){
        k=3;
        return estado2;
    }
    return estado3;
}