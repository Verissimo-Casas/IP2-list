#include <stdio.h>

#define SIZE 4

int main() {
    int matriz[SIZE][SIZE];
    int linha, soma = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o número da linha (0 a 3) para calcular a soma: ");
    scanf("%d", &linha);

    if (linha < 0 || linha >= SIZE) {
        printf("Linha inválida! Deve estar entre 0 e 3.\n");
        return 1;
    }

    for (int j = 0; j < SIZE; j++) {
        soma += matriz[linha][j];
    }

    printf("A soma dos elementos da linha %d é: %d\n", linha, soma);

    return 0;
}
