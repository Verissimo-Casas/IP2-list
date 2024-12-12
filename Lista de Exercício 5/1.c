#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    int numeros[5] = {10, 20, 30, 40, 50}; 
    int lidos[5];
    int i;

    arquivo = fopen("numeros.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    fwrite(numeros, sizeof(int), 5, arquivo);
    fclose(arquivo);

    arquivo = fopen("numeros.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    fread(lidos, sizeof(int), 5, arquivo);
    fclose(arquivo);

    printf("Números lidos do arquivo:\n");
    for (i = 0; i < 5; i++) {
        printf("%d\n", lidos[i]);
    }

    return 0;
}