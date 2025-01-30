// Arquivo: busca_binaria.c
#include "busca_binaria.h"
#include <stdio.h>

void buscaBinaria(int *array, int tamanho, int elemento) {
    int inicio = 0;                 // Inicializa o início com o primeiro índice do array
    int fim = tamanho - 1;         // Inicializa o fim com o último índice do array
    int meio;                     // Ponto médio do intervalo de busca

    // Loop principal: executa enquanto o intervalo de busca for válido
    while (inicio <= fim) {
        // Calcula o ponto médio do intervalo atual
        meio = (inicio + fim) / 2;

        // Verifica se o elemento do meio é igual ao buscado
        if (array[meio] == elemento) {
            printf("Elemento encontrado na posição %d\n", meio);
            return; // Encerra a função após encontrar o elemento
        }
        // Se o elemento do meio for menor que o buscado, descarta a metade inferior
        else if (array[meio] < elemento) {
            inicio = meio + 1;     // Atualiza o início para a posição após o meio
        }
        // Se o elemento do meio for maior que o buscado, descarta a metade superior
        else {
            fim = meio - 1;  // Atualiza o fim para a posição antes do meio
        }
    }

    // Se o loop terminar sem retorno, o elemento não está no array
    printf("Elemento não encontrado\n");
}