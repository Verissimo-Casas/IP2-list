#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *arquivo;
    char nomeArquivo[50];
    char c;
    int linhas = 0, palavras = 0, caracteres = 0;
    int emPalavra = 0;

    printf("Digite o nome do arquivo texto: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    
    while ((c = fgetc(arquivo)) != EOF) {
        caracteres++; 
        

  
        if (c == '\n') {
            linhas++;
        }

        if (isspace(c)) {
            emPalavra = 0;
        } else if (!emPalavra) {
            emPalavra = 1; 
            palavras++;
        }
    }

    if (caracteres > 0 && c != '\n') {
        linhas++;
    }

    fclose(arquivo);


    printf("Arquivo: %s\n", nomeArquivo);
    printf("Linhas: %d\n", linhas);
    printf("Palavras: %d\n", palavras);
    printf("Caracteres: %d\n", caracteres);

    return 0;
}