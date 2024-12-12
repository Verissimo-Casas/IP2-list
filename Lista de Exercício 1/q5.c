#include <stdio.h>

void main() {
    float notas[5];
    float pesos[5] = {2.0, 3.0, 4.0, 1.0, 5.0};
    float somaNotas = 0.0, somaPesos = 0.0;

    for (int i = 0; i < 5; i++) {
        printf("Digite a nota da disciplina %d: ", i + 1);
        scanf("%f", &notas[i]);
        somaNotas += notas[i] * pesos[i];
        somaPesos += pesos[i];
    }

    float mediaPonderada = somaNotas / somaPesos;
    printf("A média ponderada é: %.2f\n", mediaPonderada);

    return 0;
}
