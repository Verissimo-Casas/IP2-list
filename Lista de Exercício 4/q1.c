#include <stdio.h>

int main() {
    int vetor[10];

    int *ptr = vetor;

    printf("Digite 10 elementos para o vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor original: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        if (*(ptr + i) % 2 == 0) {
            *(ptr + i) = 0;
        } else {
            *(ptr + i) = 1;
        }
    }

    printf("\nVetor modificado: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");

    return 0;
}
