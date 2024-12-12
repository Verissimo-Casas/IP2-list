#include <stdio.h>

void main() {
    int i, j, soma;

    printf("Números perfeitos entre 1 e 1000:\n");

    for (i = 1; i <= 1000; i++) {
        soma = 0;

        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                soma += j;
            }
        }

        if (soma == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}
