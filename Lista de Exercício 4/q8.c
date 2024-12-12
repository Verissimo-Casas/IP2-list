#include <stdio.h>

void intercala_vetores(int *vetor1, int *vetor2, int *resultado, int n) {
    for (int i = 0; i < n; i++) {
        resultado[2 * i] = vetor1[i];
        resultado[2 * i + 1] = vetor2[i];
    }
}

int main() {
    int vetor1[5] = {1, 3, 5, 7, 9};
    int vetor2[5] = {2, 4, 6, 8, 10};
    int resultado[10];

    intercala_vetores(vetor1, vetor2, resultado, 5);

    printf("Vetor intercalado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}
