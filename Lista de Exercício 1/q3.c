#include <stdio.h>
#include <string.h>
#include <ctype.h>

void verificarPalindromo(char *str) {
    int inicio = 0;
    int fim = strlen(str) - 1;
    int palindromo = 1;

    while (inicio < fim) {

        while (inicio < fim && !isalnum((unsigned char)str[inicio])) {
            inicio++;
        }
        while (inicio < fim && !isalnum((unsigned char)str[fim])) {
            fim--;
        }

        if (tolower((unsigned char)str[inicio]) != tolower((unsigned char)str[fim])) {
            palindromo = 0;
            break;
        }
        inicio++;
        fim--;
    }

    if (palindromo) {
        printf("A string é um palíndromo.\n");
    } else {
        printf("A string não é um palíndromo.\n");
    }
}

int main() {
    char str[100];

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    verificarPalindromo(str);

    return 0;
}
