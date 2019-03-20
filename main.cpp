#include <iostream>
#include "Grafo.h"
#include "Algorithm.cpp"


int main() {
    Grafo grafo;
    grafo.hacerCamino();
    grafo.printCaminos();
    grafo.anadirCaminoLista();
    //grafo.BFS(4);

    Pair src = make_pair(9, 9);
    Pair dest = make_pair(1, 1);

    aStarSearch(grafo.grafoCaminos, src, dest);
}