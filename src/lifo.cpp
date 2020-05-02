//
// Created by Usuario on 1/05/2020.
//

#include <iostream>
#include "lifo.h"

lifo::lifo(int n){
    capacity=n;
    data=new int[capacity];
    tope=-1;
}

lifo::~lifo(){
    delete[] data;
}

void lifo::push(int valor){
    if (tope+1==capacity){
        std::cout<<std::endl<<"Stack Overflow"<<tope<<std::endl;
        return;
    }
    tope++;
    data[tope]=valor;
}

void lifo::pop(){
    if(tope==-1){
        std::cout<<std::endl<<"Stack Underlow"<<tope<<std::endl;
        return;
    }
    tope--;
}

int lifo::top(){
    return data[tope];
}

int lifo::get_size(){
    return tope+1;
}

