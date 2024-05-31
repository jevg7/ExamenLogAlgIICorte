#include "globales.h"

void llenarMatriz1() {
    int num = 1;
    for(int i = 0; i < TAMANO; i++) {
        for(int j = 0; j < TAMANO; j++) {
            while(num % 4 != 0 || num % 8 != 0) {
                num++;
            }
            matriz1[i][j] = num;
            num++;
        }
    }
}

void llenarMatriz2() {
    int num = 1;
    for(int i = 0; i < TAMANO; i++) {
        for(int j = 0; j < TAMANO; j++) {
            while(num % 3 != 0) {
                num++;
            }
            matriz2[i][j] = num;
            num++;
        }
    }
}

void sumarMatrices() {
    for(int i = 0; i < TAMANO; i++) {
        for(int j = 0; j < TAMANO; j++) {
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}