//
// Created by drump1 on 19/9/20.
//

#ifndef EXTRACLASE_1_ARISTA_H
#define EXTRACLASE_1_ARISTA_H
#include <iostream>
#include "Vertice.h"
using namespace std;

class Arista {


    friend class Vertice;

    public:
        int peso;
        Arista *sig;
        Vertice *refencia;
        friend class Grafo;



    void setNext(Arista *next) {
        sig=next;
    }
};


#endif //EXTRACLASE_1_ARISTA_H
