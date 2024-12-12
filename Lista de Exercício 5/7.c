#include <stdio.h>
#include <string.h>

#define MAX_LINHAS 100
#define MAX_LINHA 256

int main() {
    FILE *arquivo;
    char nomeArquivo[50];
    char linhas[MAX_LINHAS][MAX_LINHA];
    int numLinhas = 0, linhaParaRemover;

    printf("Digite o nome do arquivo texto: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    while (fgets(linhas[numLinhas], MAX_LINHA, arquivo) != NULL) {
        numLinhas++;
    }
    fclose(arquivo);

    printf("\nConteúdo atual do arquivo:\n");
    for (int i = 0; i < numLinhas; i++) {
        printf("%d: %s", i + 1, linhas[i]);
    }

 
    printf("\nDigite o número da linha que deseja remover (1-%d): ", numLinhas);
    scanf("%d", &linhaParaRemover);

    if (linhaParaRemover < 1 || linhaParaRemover > numLinhas) {
        printf("Número de linha inválido.\n");
        return 1;
    }

    
    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    //
    for (int i = 0; i < numLinhas; i++) {
        if (i + 1 != linhaParaRemover) {
            fputs(linhas[i], arquivo);
        }
    }
    fclose(arquivo);

    printf("\nLinha %d removida com sucesso do arquivo '%s'.\n", linhaParaRemover, nomeArquivo);

    return 0;
}