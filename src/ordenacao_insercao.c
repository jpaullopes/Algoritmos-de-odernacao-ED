#include <stdio.h>

void ord_insercao(int vector[], int size){
    int j, i, temp;

    for(i=1; i<size; i++){
        temp = vector[i]; // Elemento que será verificado

        j = i-1; // Elemento anterior

        while (vector[j]>temp &&  j>=0){ //Verifica se elemento do vetor é maior do que está sendo verificado e se o vetor já terminou
           vector[j++] = vector[j];
           j--;
        }
        //Ordenando elemento que estava sendo verificado
        vector[j++] = temp;
    }
}