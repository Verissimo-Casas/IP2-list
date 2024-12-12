#include <stdio.h>
#include <ctype.h>

int main() {
    char strings[5][21];
    char (*ptr)[21] = strings;

    printf("Digite 5 strings (máximo de 20 caracteres cada):\n");
    for (int i = 0; i < 5; i++) {
        printf("String %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    for (int i = 0; i < 5; i++) {
        for (char *p = ptr[i]; *p != '\0'; p++) {
            *p = toupper(*p);
        }
    }

    printf("\nStrings modificadas:\n");
    for (int i = 0; i < 5; i++) {
        printf("String %d: %s\n", i + 1, ptr[i]);
    }

    return 0;

}
