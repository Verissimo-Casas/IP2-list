#include <stdio.h>
#include <stdlib.h>

#define MAX_PESSOAS 5

typedef struct {
    char nome[50];
    int idade;
    float altura;
} Pessoa;

int main() {
    FILE *arquivo;
    Pessoa pessoas[MAX_PESSOAS];
    Pessoa pessoasLidas[MAX_PESSOAS];
    int i;

    for (i = 0; i < MAX_PESSOAS; i++) {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf(" %[^\n]", pessoas[i].nome);
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &pessoas[i].idade);
        printf("Digite a altura da pessoa %d (em metros): ", i + 1);
        scanf("%f", &pessoas[i].altura);
    }
    arquivo = fopen("pessoas.bin", "wb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para escrita.\n");
        return 1;
    }

    
    fwrite(pessoas, sizeof(Pessoa), MAX_PESSOAS, arquivo);
    fclose(arquivo);

    arquivo = fopen("pessoas.bin", "rb");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para leitura.\n");
        return 1;
    }

    
    fread(pessoasLidas, sizeof(Pessoa), MAX_PESSOAS, arquivo);
    fclose(arquivo);

    printf("\nDados lidos do arquivo:\n");
    for (i = 0; i < MAX_PESSOAS; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoasLidas[i].nome);
        printf("Idade: %d\n", pessoasLidas[i].idade);
        printf("Altura: %.2f metros\n", pessoasLidas[i].altura);
    }

    return 0;
}