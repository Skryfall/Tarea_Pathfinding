#include <iostream>
#include "Grafo.h"

int main() {
    Grafo grafo;
    grafo.hacerCamino();
    grafo.printCaminos();
    grafo.anadirCaminoLista();
    grafo.BFS(4);
}