#include <stdio.h>
#include <string.h>

#define MAX_LINHA 256
#define MAX_LINHAS 100

int main() {
    FILE *arquivo;
    char linhas[MAX_LINHAS][MAX_LINHA];
    char nomeArquivo[] = "dados.txt";
    int numLinhas = 0, linhaParaAtualizar;
    char novaLinha[MAX_LINHA];

    // Abre o arquivo para leitura
    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo '%s'.\n", nomeArquivo);
        return 1;
    }

    // Lê todas as linhas do arquivo para a memória
    while (fgets(linhas[numLinhas], MAX_LINHA, arquivo) != NULL) {
        numLinhas++;
    }
    fclose(arquivo);

    // Exibe as linhas do arquivo
    printf("Conteúdo atual do arquivo:\n");
    for (int i = 0; i < numLinhas; i++) {
        printf("%d: %s", i + 1, linhas[i]);
    }

    // Solicita ao usuário a linha a ser atualizada
    printf("\nDigite o número da linha que deseja atualizar (1-%d): ", numLinhas);
    scanf("%d", &linhaParaAtualizar);
    getchar(); // Limpa o buffer do teclado

    if (linhaParaAtualizar < 1 || linhaParaAtualizar > numLinhas) {
        printf("Número de linha inválido.\n");
        return 1;
    }

   
    printf("Digite o novo conteúdo para a linha %d: ", linhaParaAtualizar);
    fgets(novaLinha, MAX_LINHA, stdin);

    strcpy(linhas[linhaParaAtualizar - 1], novaLinha);

    arquivo = fopen(nomeArquivo, "w");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    for (int i = 0; i < numLinhas; i++) {
        fputs(linhas[i], arquivo);
    }
    fclose(arquivo);

    printf("Linha %d atualizada com sucesso no arquivo '%s'.\n", linhaParaAtualizar, nomeArquivo);

    return 0;
}