#include <stdio.h>

#define SIZE 3

void rotacionar90GrausHorario(int matriz[SIZE][SIZE]) {
    int matrizRotacionada[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrizRotacionada[j][SIZE - 1 - i] = matriz[i][j];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matriz[i][j] = matrizRotacionada[i][j];
        }
    }
}

int main() {
    int matriz[SIZE][SIZE];

    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    rotacionar90GrausHorario(matriz);

    printf("\nMatriz rotacionada 90 graus no sentido horário:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
