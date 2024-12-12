#include <stdio.h>

#define LIN_A 2
#define COL_A 3
#define LIN_B 3
#define COL_B 2

int main() {
    int A[LIN_A][COL_A], B[LIN_B][COL_B], C[LIN_A][COL_B] = {0};

    printf("Digite os elementos da matriz A (2x3):\n");
    for (int i = 0; i < LIN_A; i++) {
        for (int j = 0; j < COL_A; j++) {
            printf("Elemento A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B (3x2):\n");
    for (int i = 0; i < LIN_B; i++) {
        for (int j = 0; j < COL_B; j++) {
            printf("Elemento B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < LIN_A; i++) {
        for (int j = 0; j < COL_B; j++) {
            for (int k = 0; k < COL_A; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("\nMatriz produto C (2x2):\n");
    for (int i = 0; i < LIN_A; i++) {
        for (int j = 0; j < COL_B; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
