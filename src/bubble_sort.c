#include "bubble_sort.h"

void bubble_sort(int *array, int tamanho) {
    int i, j;
    int trocado;
    for (i = 0; i < tamanho - 1; i++) { // Percorre o array
        trocado = 0; // Inicializa a variável de verificação de troca
        for (j = 0; j < tamanho - i - 1; j++) { // Percorre o array - 1
            if (array[j] > array[j + 1]) { // Verifica se o elemento atual é maior que o próximo
                // Troca os elementos
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                trocado = 1; // Marca que houve uma troca
            }
        }
        // Se não houve trocas, o array já está ordenado
        if (trocado == 0) {
            break;
        }
    }
}