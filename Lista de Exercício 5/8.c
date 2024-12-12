#include <stdio.h>
#include <string.h>

#define MAX_LINHAS 100
#define MAX_LINHA 256

int main() {
    FILE *arquivoOriginal, *arquivo1, *arquivo2;
    char nomeArquivo[50];
    char linhas[MAX_LINHAS][MAX_LINHA];
    int numLinhas = 0, metade;


    printf("Digite o nome do arquivo texto: ");
    scanf("%s", nomeArquivo);

    arquivoOriginal = fopen(nomeArquivo, "r");
    if (arquivoOriginal == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fgets(linhas[numLinhas], MAX_LINHA, arquivoOriginal) != NULL) {
        numLinhas++;
    }
    fclose(arquivoOriginal);

    
    metade = numLinhas / 2;

    arquivo1 = fopen("arquivo1.txt", "w");
    arquivo2 = fopen("arquivo2.txt", "w");
    if (arquivo1 == NULL || arquivo2 == NULL) {
        printf("Erro ao criar os arquivos menores.\n");
        return 1;
    }

    for (int i = 0; i < metade; i++) {
        fputs(linhas[i], arquivo1);
    }


    for (int i = metade; i < numLinhas; i++) {
        fputs(linhas[i], arquivo2);
    }

    fclose(arquivo1);
    fclose(arquivo2);

    printf("\nArquivo '%s' foi dividido com sucesso em 'arquivo1.txt' e 'arquivo2.txt'.\n", nomeArquivo);

    return 0;
}