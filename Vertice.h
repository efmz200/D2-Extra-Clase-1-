//
// Created by drump1 on 19/9/20.
//

#ifndef EXTRACLASE_1_VERTICE_H
#define EXTRACLASE_1_VERTICE_H
#include "Arista.h"
#include <iostream>
using namespace std;
class Vertice {

    string nom;
    Vertice *sig;
    Arista *arist;
    friend class Arista;
    friend class Grafo;

    Vertice(string nomb) {
        nom = nomb;
        sig = NULL;
        arist = NULL;
    }
    void agregarArist(Arista *arista){
        if (arist==NULL){
            arist=arista;
        }
        else{
            Arista *aux=arist;
            while (aux->sig!=NULL){
                aux=aux->sig;
            }
            aux->sig=arista;
        }
    }
    Arista  *getArt(string nomOut){
        if (arist==NULL){
            return 0;
        }
        Arista *aux=arist;
        while (aux->sig!=NULL){
            Vertice *aux2=aux->referencia;
            if(aux2->nom==nomOut){
                return aux;
            }
            aux=aux->sig;
        }

    }
};


#endif //EXTRACLASE_1_VERTICE_H
