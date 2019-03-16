//
// Created by kevin on 15/03/19.
//

#include <iostream>
#include "Grafo.h"

using namespace std;

void Grafo::print(){
    for (int i = 0; i < 10; i++){
        for (int j; j < 10; j++){
            int a = this->grafo[i][j];
            cout << a << endl;
        }
    }
}

void Grafo::hacerCamino() {
    for (int i = 0; i < 10; i++){
        for (int j; j < 10; j++){
            if (i == j){
                this->grafo[i][j] = 1;
            }else if (i == 4){
                this->grafo[i][j] = 1;
            }else if (i + j == 9){
                this->grafo[i][j] = 1;
            }else{
                this->grafo[i][j] = 0;
            }
        }
    }
    this->grafo[0][3] = 1;
    this->grafo[0][5] = 1;
    this->grafo[9][3] = 1;
    this->grafo[9][6] = 1;
}