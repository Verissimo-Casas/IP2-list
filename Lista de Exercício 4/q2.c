#include <stdio.h>

void troca_vetor(int *vetor1, int *vetor2, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int temp = *(vetor1 + i);
        *(vetor1 + i) = *(vetor2 + i);
        *(vetor2 + i) = temp;
    }
}

int main() {
    int tamanho = 5;

    int vetor1[5], vetor2[5];

    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    printf("\nAntes da troca:\n");
    printf("vetor1: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    printf("vetor2: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    troca_vetor(vetor1, vetor2, tamanho);

    printf("\nDepois da troca:\n");
    printf("vetor1: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    printf("vetor2: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    return 0;
}
