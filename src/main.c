#include <stdio.h>
#include "bubble_sort.h"
#include "busca_linear.h"
#include "busca_binaria.h"
#include "ordenacao_selecao.h"
#include "ordenacao_insercao.h"
#include "ordenacao_intercalacao.h"

void imprimirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void menu() {
    printf("\nMenu:\n");
    printf("1. Ordenação por Bolha\n");
    printf("2. Ordenação por Inserção\n");
    printf("3. Ordenação por Seleção\n");
    printf("4. Ordenação por Intercalação\n");
    printf("5. Busca Linear\n");
    printf("6. Busca Binária\n");
    printf("0. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    int opcao, elemento, resultado;

    do {
        menu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                bubble_sort(arr, tamanho);
                printf("Array ordenado por Bolha: \n");
                imprimirArray(arr, tamanho);
                break;
            case 2:
                ord_insercao(arr, tamanho);
                printf("Array ordenado por Inserção: \n");
                imprimirArray(arr, tamanho);
                break;
            case 3:
                selectionSort(arr, tamanho);
                printf("Array ordenado por Seleção: \n");
                imprimirArray(arr, tamanho);
                break;
            case 4:
                mergeSort(arr, 0, tamanho - 1);
                printf("Array ordenado por Intercalação: \n");
                imprimirArray(arr, tamanho);
                break;
            case 5:
                printf("Digite o elemento para busca linear: ");
                scanf("%d", &elemento);
                resultado = busca_linear(arr, tamanho, elemento);
                if (resultado != -1) {
                    printf("Elemento %d encontrado na posição %d usando Busca Linear.\n", elemento, resultado);
                } else {
                    printf("Elemento %d não encontrado usando Busca Linear.\n", elemento);
                }
                break;
            case 6:
                printf("Digite o elemento para busca binária: ");
                scanf("%d", &elemento);
                buscaBinaria(arr, tamanho, elemento);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}