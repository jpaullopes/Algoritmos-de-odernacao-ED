#include "../include/busca_linear.h"

int busca_linear(int *array, int tamanho, int elemento) { // Retorna o índice do elemento se encontrado, ou -1 caso contrário
    for (int i = 0; i < tamanho; i++) { // Percorre o array
        if (array[i] == elemento) {
            return i; // Elemento encontrado
        }
    }
    return -1; // Elemento não encontrado
}