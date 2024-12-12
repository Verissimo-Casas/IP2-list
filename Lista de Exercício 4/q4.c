#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho) {
    int *inicio = vetor;
    int *fim = vetor + tamanho - 1;

    while (inicio < fim) {
        int temp = *inicio;
        *inicio = *fim;
        *fim = temp;

        inicio++;
        fim--;
    }
}

int main() {
    int vetor[7] = {1, 2, 3, 4, 5, 6, 7};

    printf("Vetor original: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    inverte_vetor(vetor, 7);

    printf("Vetor invertido: ");
    for (int i = 0; i < 7; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
