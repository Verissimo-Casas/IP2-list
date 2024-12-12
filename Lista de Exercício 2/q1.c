#include <stdio.h>

#define SIZE 10

void ordenar(int vetor[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int menor_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (vetor[j] < vetor[menor_idx]) {
                menor_idx = j;
            }
        }

        int temp = vetor[i];
        vetor[i] = vetor[menor_idx];
        vetor[menor_idx] = temp;
    }
}

int main() {
    int vetor[SIZE];

    printf("Digite 10 inteiros:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &vetor[i]);
    }

    ordenar(vetor, SIZE);

    printf("Vetor ordenado em ordem crescente:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
