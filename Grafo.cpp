//
// Created by kevin on 15/03/19.
//

#include <iostream>
#include "Grafo.h"

using namespace std;

void Grafo::printCaminos(){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            cout << this->grafoCaminos[i][j] << "     ";
        }
        cout << "\n";
    }
}

void Grafo::hacerCamino() {
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (i == j){
                this->grafoCaminos[i][j] = 1;
            }else if (i == 4){
                this->grafoCaminos[i][j] = 1;
            }else if (i + j == 9){
                this->grafoCaminos[i][j] = 1;
            }else{
                this->grafoCaminos[i][j] = 0;
            }
        }
    }
    this->grafoCaminos[0][3] = 1;
    this->grafoCaminos[0][5] = 1;
    this->grafoCaminos[9][3] = 1;
    this->grafoCaminos[9][6] = 1;
}

int Grafo::generarNumero() {
    return rand() % (100) + 1;
}

void Grafo::anadirCaminoLista() {
    int j;
    for (int i = 0; i < 10; i++){
        this->listaGrafos[i].push_back(i);
        this->listaGrafos[4].push_back(i);
        j = 9 - i;
        this->listaGrafos[i].push_back(j);
    }
    this->listaGrafos[0].push_back(3);
    this->listaGrafos[0].push_back(5);
    this->listaGrafos[9].push_back(3);
    this->listaGrafos[9].push_back(6);
}

void Grafo::BFS(int inicio){
    // Mark all the vertices as not visited
    bool* visitados = new bool[10];
    for(int i = 0; i < 10; i++)
        visitados[i] = false;

    // Create a queue for BFS
    list<int> queue;

    // Mark the current node as visited and enqueue it
    visitados[inicio] = true;
    queue.push_back(inicio);

    // 'i' will be used to get all adjacent
    // vertices of a vertex
    list<int>::iterator i;

    while(!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        inicio = queue.front();
        cout << inicio << " ";
        queue.pop_front();

        // Get all adjacent vertices of the dequeued
        // vertex s. If a adjacent has not been visited,
        // then mark it visited and enqueue it
        for (i = this->listaGrafos[inicio].begin(); i != this->listaGrafos[inicio].end(); ++i)
        {
            if (!visitados[*i])
            {
                visitados[*i] = true;
                queue.push_back(*i);
            }
        }
    }
}