#include <stdio.h>

#define SIZE 10

int main() {
    int vetor[SIZE];
    int valor, encontrado = 0;

    printf("Digite 10 inteiros:\n");
    for (int i = 0; i < SIZE; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite um valor inteiro para buscar no vetor: ");
    scanf("%d", &valor);

    for (int i = 0; i < SIZE; i++) {
        if (vetor[i] == valor) {
            printf("Valor %d encontrado na posição %d.\n", valor, i);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Valor %d não encontrado no vetor.\n", valor);
    }

    return 0;
}
