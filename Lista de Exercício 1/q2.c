#include <stdio.h>

void main() {
    float reais, dolares, euros, libras;
    const float TAXA_DOLAR = 5.20;  // Taxa de câmbio para dólares
    const float TAXA_EURO = 5.80;   // Taxa de câmbio para euros
    const float TAXA_LIBRA = 6.50;  // Taxa de câmbio para libras

    printf("Digite o valor em reais: ");
    scanf("%f", &reais);

    dolares = reais / TAXA_DOLAR;
    euros = reais / TAXA_EURO;
    libras = reais / TAXA_LIBRA;

    printf("Valor em Dólares: %.2f\n", dolares);
    printf("Valor em Euros: %.2f\n", euros);
    printf("Valor em Libras: %.2f\n", libras);

    return 0;
}
