#include <stdio.h>
#include <string.h>

void main() {
    char str[100];
    int contador = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    printf("Número de vogais: %d\n", contador);
    return 0;
}
