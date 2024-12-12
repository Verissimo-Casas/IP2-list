#include <stdio.h>

void main() {
    int totalSegundos;
    int horas, minutos, segundos;

    printf("Digite o tempo em segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("Tempo convertido: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
