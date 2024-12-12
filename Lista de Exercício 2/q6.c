#include <stdio.h>

#define SIZE 4

int main() {
    int matriz[SIZE][SIZE];

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nElementos da diagonal principal:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    return 0;
}
