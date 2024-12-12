#include <stdio.h>

#define SIZE 5

int main() {
    int matriz[SIZE][SIZE];
    int soma = 0;

    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < SIZE; i++) {
        soma += matriz[i][SIZE - 1 - i];
    }

    printf("A soma dos elementos da diagonal secundária é: %d\n", soma);

    return 0;
}
