//
// Created by kevin on 15/03/19.
//

#ifndef TAREA_PATHFINDING_GRAFO_H
#define TAREA_PATHFINDING_GRAFO_H
#include <list>

using namespace std;

class Grafo {

public:

    Grafo() = default;

    int grafoCaminos[10][10];
    list<int>* listaGrafos = new list <int> [10];

    void printCaminos();
    void hacerCamino();
    int generarNumero();
    void anadirCaminoLista();
    void BFS(int inicio);

};


#endif //TAREA_PATHFINDING_GRAFO_H
