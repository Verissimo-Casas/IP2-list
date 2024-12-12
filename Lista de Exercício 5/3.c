#include <stdio.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[50];
    long tamanho;


    printf("Digite o nome do arquivo: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fseek(arquivo, 0, SEEK_END);
    tamanho = ftell(arquivo);
    fclose(arquivo);

    printf("O tamanho do arquivo '%s' é: %ld bytes\n", nomeArquivo, tamanho);

    return 0;
}