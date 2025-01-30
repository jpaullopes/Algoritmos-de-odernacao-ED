#include <stdio.h>
#include "../include/ordenacao_intercalacao.h"

// Função para mesclar dois subarrays
void merge(int *array, int inicio, int meio, int fim) {
    int indiceEsquerda, indiceDireita, indiceMerge;
    int tamanhoEsquerda = meio - inicio + 1;
    int tamanhoDireita = fim - meio;
    
    // Arrays temporários
    int subarrayEsquerda[tamanhoEsquerda], subarrayDireita[tamanhoDireita];
    
    // Copia os dados para os arrays temporários
    for (indiceEsquerda = 0; indiceEsquerda < tamanhoEsquerda; indiceEsquerda++)
        subarrayEsquerda[indiceEsquerda] = array[inicio + indiceEsquerda];
    for (indiceDireita = 0; indiceDireita < tamanhoDireita; indiceDireita++)
        subarrayDireita[indiceDireita] = array[meio + 1 + indiceDireita];
    
    // Intercala os arrays temporários de volta no original
    indiceEsquerda = 0;
    indiceDireita = 0;
    indiceMerge = inicio;
    while (indiceEsquerda < tamanhoEsquerda && indiceDireita < tamanhoDireita) {
        if (subarrayEsquerda[indiceEsquerda] <= subarrayDireita[indiceDireita]) {
            array[indiceMerge] = subarrayEsquerda[indiceEsquerda];
            indiceEsquerda++;
        } else {
            array[indiceMerge] = subarrayDireita[indiceDireita];
            indiceDireita++;
        }
        indiceMerge++;
    }
    
    // Copia os elementos restantes de subarrayEsquerda[], se houver
    while (indiceEsquerda < tamanhoEsquerda) {
        array[indiceMerge] = subarrayEsquerda[indiceEsquerda];
        indiceEsquerda++;
        indiceMerge++;
    }
    
    // Copia os elementos restantes de subarrayDireita[], se houver
    while (indiceDireita < tamanhoDireita) {
        array[indiceMerge] = subarrayDireita[indiceDireita];
        indiceDireita++;
        indiceMerge++;
    }
}

// Função principal do Merge Sort
void mergeSort(int *array, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
        
        // Ordena a primeira e a segunda metade
        mergeSort(array, inicio, meio);
        mergeSort(array, meio + 1, fim);
        
        // Mescla as duas metades ordenadas
        merge(array, inicio, meio, fim);
    }
}
