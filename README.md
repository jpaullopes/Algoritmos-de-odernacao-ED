# 📌 Algoritmos de Ordenação e Busca em C

Implementação de algoritmos de ordenação e busca em C, com exemplos práticos.

---

## 📋 Algoritmos Implementados

### 🔄 **Ordenação**
1. **Bubble Sort (Ordenação por Bolha)** - Ordenação por trocas consecutivas de elementos adjacentes.
2. **Insertion Sort (Ordenação por Inserção)** - Insere elementos na posição correta, um por vez.
3. **Selection Sort (Ordenação por Seleção)** - Seleciona o menor elemento e troca com a posição atual.
4. **Merge Sort (Ordenação por Intercalação)** - Algoritmo eficiente baseado em divisão e conquista.

### 🔍 **Busca**
1. **Busca Linear** - Procura elemento por elemento em um array desordenado.
2. **Busca Binária** - Busca eficiente em arrays **ordenados**, utilizando divisão ao meio.

---

## 🚀 Como Usar

### **🔧 Pré-requisitos**
- Compilador **GCC**

### **📂 Estrutura do Projeto**
```
├── src/
│   ├── main.c                   # Arquivo principal
│   ├── bubble_sort.c            
│   ├── busca_linear.c           
│   ├── busca_binaria.c          
│   ├── ordenacao_insercao.c     
│   ├── ordenacao_intercalacao.c
│   └── ordenacao_selecao.c      
```

### **🏗️ Compilando o Projeto**

```sh
gcc -o main src/main.c src/bubble_sort.c src/busca_linear.c src/busca_binaria.c src/ordenacao_selecao.c src/ordenacao_insercao.c src/ordenacao_intercalacao.c -Iinclude
```

### **▶️ Executando**
Após a compilação, execute:
```sh
./main
```

---

## 📄 Exemplo de Uso

```c
#include <stdio.h>
#include "bubble_sort.h"
#include "busca_binaria.h"

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(arr) / sizeof(arr[0]);

    // Ordenação por Bolha
    bubble_sort(arr, tamanho);
    printf("Array ordenado por Bolha: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Busca binária
    int elemento = 22;
    buscaBinaria(arr, tamanho, elemento);
    return 0;
}
```

---

## 📊 Complexidade dos Algoritmos

| Algoritmo       | Melhor Caso  | Pior Caso    | Estável? |
|----------------|-------------|-------------|----------|
| **Bubble Sort**  | O(n)        | O(n²)       | Sim      |
| **Insertion Sort** | O(n)      | O(n²)       | Sim      |
| **Selection Sort** | O(n²)     | O(n²)       | Não      |
| **Merge Sort**  | O(n log n)  | O(n log n)  | Sim      |
| **Busca Linear** | O(1)      | O(n)        | -        |
| **Busca Binária** | O(1)      | O(log n)   | -        |

---

## 🤝 Contribuidores
- [Álvaro Pietro](https://github.com/PietroDev-01)
- [João Paulo Lopes](https://github.com/jpaullopes)
- [Kaio Gabriel](https://github.com/KaioGabriel-the)
- [Thalyson Delano](https://github.com/thalyssonDEV)

---

