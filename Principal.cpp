#include <iostream>
#include "globales.h"
#include "Funciones.cpp"

using namespace std;

void llenarMatriz1();
void llenarMatriz2();
void sumarMatrices();

int main() {
    llenarMatriz1();
    llenarMatriz2();
    sumarMatrices();

    for(int i = 0; i < TAMANO; i++) {
        for(int j = 0; j < TAMANO; j++) {
            cout << matriz3[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}