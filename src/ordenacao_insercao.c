#include "ordenacao_insercao.h"

void ord_insercao(int vector[], int size) {
    int j, i, temp;

    for (i = 1; i < size; i++) {
        temp = vector[i]; // Elemento que será verificado
        j = i-1; // Elemento anterior

        // Verifica se elemento do vetor é maior do que está sendo verificado e se o vetor já terminou
        while (j >= 0 && vector[j] > temp) {
            vector[j+1] = vector[j];
            j--;
        }
        // Ordenando elemento que estava sendo verificado
        vector[j+1] = temp;
    }
}