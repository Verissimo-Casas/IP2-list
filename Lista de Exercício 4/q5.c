#include <stdio.h>
#include <ctype.h>

int contar_palavras(char *str) {
    int count = 0;
    int em_palavra = 0;

    while (*str != '\0') {
        if (!isspace(*str)) {
            if (!em_palavra) {
                count++;
                em_palavra = 1;
            }
        } else {
            em_palavra = 0;
        }
        str++;
    }

    return count;
}

int main() {
    char frase[] = "Programação em C é divertida";

    int numero_de_palavras = contar_palavras(frase);

    printf("A quantidade de palavras na frase é: %d\n", numero_de_palavras);

    return 0;
}
