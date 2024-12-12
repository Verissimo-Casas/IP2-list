#include <stdio.h>

void copia_subvetor(int *vetor1, int inicio, int fim, int *vetor2) {
    for (int i = inicio; i <= fim; i++) {
        *(vetor2 + i - inicio) = *(vetor1 + i);
    }
}

int main() {
    int vetor1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

    int vetor2[5];

    int inicio = 2;
    int fim = 6;

    copia_subvetor(vetor1, inicio, fim, vetor2);

    printf("Subvetor copiado para vetor2: ");
    for (int i = 0; i <= fim - inicio; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    return 0;
}
