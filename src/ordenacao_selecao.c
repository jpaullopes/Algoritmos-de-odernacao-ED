#include "ordenacao_selecao.h"

void selectionSort(int *Array, int Tamanho) {
    int i, j, min, aux;

    // Percorre todo o vetor até a penúltima posição, pois o último elemento já estará ordenado
    for (i = 0; i < Tamanho-1; i++) {

        // Assume que o menor elemento é o primeiro não ordenado
        min = i;

        // Percorre o vetor não ordenado para encontrar o índice do menor elemento
        for (j = i+1; j < Tamanho; j++) {
            if (Array[j] < Array[min]) {
                min = j; // Atualiza o índice do menor elemento encontrado
            }
        }

        // Se o menor elemento não está na posição atual, realiza a troca
        if (min != i) {
            aux = Array[i];
            Array[i] = Array[min];
            Array[min] = aux;
        }
    }
}   