#include <stdio.h>

// Função para mesclar dois subarrays
void merge(int *Array, int inicio, int meio, int fim) {
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;
    
    // Arrays temporários
    int L[n1], R[n2];
    
    // Copia os dados para os arrays temporários
    for (i = 0; i < n1; i++)
        L[i] = Array[inicio + i];
    for (j = 0; j < n2; j++)
        R[j] = Array[meio + 1 + j];
    
    // Intercala os arrays temporários de volta no original
    i = 0;
    j = 0;
    k = inicio;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            Array[k] = L[i];
            i++;
        } else {
            Array[k] = R[j];
            j++;
        }
        k++;
    }
    
    // Copia os elementos restantes de L[], se houver
    while (i < n1) {
        Array[k] = L[i];
        i++;
        k++;
    }
    
    // Copia os elementos restantes de R[], se houver
    while (j < n2) {
        Array[k] = R[j];
        j++;
        k++;
    }
}


// Função principal do Merge Sort
void mergeSort(int *Array, int inicio, int fim) {
    if (inicio < fim) {
        int meio = inicio + (fim - inicio) / 2;
        
        // Ordena a primeira e a segunda metade
        mergeSort(Array, inicio, meio);
        mergeSort(Array, meio + 1, fim);
        
        // Mescla as duas metades ordenadas
        merge(Array, inicio, meio, fim);
    }
}


// Função para exibir o array
void printArray(int *Array, int Tamanho) {
    for (int i = 0; i < Tamanho; i++)
        printf("%d ", Array[i]);
    printf("\n");
}


// Programa principal para testar o Merge Sort
int main() {
    int Array[] = {12, 11, 13, 5, 6, 7};
    int Tamanho = sizeof(Array) / sizeof(Array[0]);
    
    printf("Array original:\n");
    printArray(Array, Tamanho);
    
    mergeSort(Array, 0, Tamanho - 1);
    
    printf("Array ordenado:\n");
    printArray(Array, Tamanho);
    
    return 0;
}