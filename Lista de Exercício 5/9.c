#include <stdio.h>

#define MAX_LINHA 256

int main() {
    FILE *arquivo1, *arquivo2, *arquivoDestino;
    char nomeArquivo1[50], nomeArquivo2[50], nomeArquivoDestino[50];
    char linha[MAX_LINHA];


    printf("Digite o nome do primeiro arquivo texto: ");
    scanf("%s", nomeArquivo1);
    printf("Digite o nome do segundo arquivo texto: ");
    scanf("%s", nomeArquivo2);
    printf("Digite o nome do arquivo destino: ");
    scanf("%s", nomeArquivoDestino);

    arquivo1 = fopen(nomeArquivo1, "r");
    arquivo2 = fopen(nomeArquivo2, "r");
    if (arquivo1 == NULL || arquivo2 == NULL) {
        printf("Erro ao abrir os arquivos para leitura.\n");
        return 1;
    }

    arquivoDestino = fopen(nomeArquivoDestino, "w");
    if (arquivoDestino == NULL) {
        printf("Erro ao abrir o arquivo destino para escrita.\n");
        return 1;
    }

    
    
    while (fgets(linha, MAX_LINHA, arquivo1) != NULL) {
        fputs(linha, arquivoDestino);
    }

    while (fgets(linha, MAX_LINHA, arquivo2) != NULL) {
        fputs(linha, arquivoDestino);
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivoDestino);

    printf("\nOs arquivos '%s' e '%s' foram mesclados em '%s'.\n", nomeArquivo1, nomeArquivo2, nomeArquivoDestino);

    return 0;
}