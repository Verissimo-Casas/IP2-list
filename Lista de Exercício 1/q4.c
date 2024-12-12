#include <stdio.h>

void main() {
    char str[100];
    int count = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            count++;
        }
    }

    printf("Número de caracteres (excluindo espaços): %d\n", count);
    return 0;
}
