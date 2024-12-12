#include <stdio.h>

int soma_diagonal(int *matriz, int n) {
    int soma = 0;

    for (int i = 0; i < n; i++) {
        soma += *(matriz + i * n + i);
    }

    return soma;
}

int main() {
    int n = 3;
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int soma = soma_diagonal((int *)matriz, n);

    printf("A soma dos elementos da diagonal principal é: %d\n", soma);

    return 0;
}
