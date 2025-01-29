#include "bubble_sort.h"

void bubble_sort(int *array, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) { // Percorre o array
        for (int j = 0; j < tamanho - i - 1; j++) { // Percorre o array - i - 1
            if (array[j] > array[j + 1]) { // Se o elemento atual for maior que o próximo
                // Troca os elementos
                int temp = array[j]; // Variável temporária
                array[j] = array[j + 1]; // Troca
                array[j + 1] = temp; // Troca
            }
        }
    }
}