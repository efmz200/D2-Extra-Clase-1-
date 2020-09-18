//
// Created by drump1 on 16/9/20.
//
#include <iostream>
#ifndef EXTRACLASE_1_GRAFO_H
#endif //EXTRACLASE_1_GRAFO_H
#define EXTRACLASE_1_GRAFO_H

using namespace std;
class Vertice;
class Grafo;
class Arista;


class Arista {
private:
    int peso;
    Arista *sig;
    Vertice *refencia;
    friend class Grafo;
    Arista(int pes,Vertice *siguiente){
        peso=pes;
        sig=NULL;
        refencia=siguiente;
    }
    void setNext(Arista *next) {
        sig=next;
    }


};

class Vertice {
    string nom;
    Vertice *sig;
    Arista *arist;
    friend class Grafo;

    Vertice(string nomb) {
        nom = nomb;
        sig=NULL;
        arist=NULL;
    }

    class Grafo {
        Vertice *inicial;

    public:
        void iniciar() {
            inicial = NULL;

        }

        Vertice *getVertice(string nomb) {

            Vertice *aux;
            aux = inicial;
            while (aux != NULL) {
                if (nomb == aux->nom) {

                }
                aux = aux->sig;
            }

            return NULL;
        }
        void agregaVert(string nomb){
            Vertice *nuevo=new Vertice(nomb);
            if (inicial==NULL){
                inicial=nuevo;
            }
            else {
                Vertice *aux = inicial;
                while (aux->sig != NULL) {
                    aux=aux->sig;
                }
                aux->sig=nuevo;
            }
        }

    };





};