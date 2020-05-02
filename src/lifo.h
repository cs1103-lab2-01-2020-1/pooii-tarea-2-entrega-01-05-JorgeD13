//
// Created by Usuario on 1/05/2020.
//

#ifndef TAREA_3_LIFO_H
#define TAREA_3_LIFO_H


class lifo{
    int tope;
    int capacity;
    int* data;
public:
    lifo(int n);
    ~lifo();
    void push(int valor);
    void pop();
    int top();
    int get_size();
};


#endif //TAREA_3_LIFO_H
