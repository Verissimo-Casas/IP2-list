#include <stdio.h>
#include <string.h>

#define MAX_LINHA 256

int main() {
    FILE *arquivo;
    char nomeArquivo[50];
    char palavra[50];
    char linha[MAX_LINHA];
    int numeroLinha = 0;

  
    printf("Digite o nome do arquivo texto: ");
    scanf("%s", nomeArquivo);
    printf("Digite a palavra que deseja procurar: ");
    scanf("%s", palavra);

   
    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    printf("Linhas onde a palavra '%s' aparece:\n", palavra);
    while (fgets(linha, MAX_LINHA, arquivo) != NULL) {
        numeroLinha++;
        if (strstr(linha, palavra) != NULL) { 
            printf("Linha %d: %s", numeroLinha, linha);
        }
    }

    fclose(arquivo);
    return 0;
}