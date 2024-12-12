#include <stdio.h>

#define MAX_ALUNOS 50

// Estrutura para armazenar informações de um aluno
typedef struct {
    char nome[50];
    float nota1, nota2, media;
} Aluno;

int main() {
    FILE *arquivo;
    Aluno alunos[MAX_ALUNOS];
    int numAlunos = 0;
    char nomeArquivo[50];
    float somaNotas = 0;

  
    printf("Digite o nome do arquivo com as notas dos alunos: ");
    scanf("%s", nomeArquivo);

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(arquivo, "%s %f %f", alunos[numAlunos].nome, &alunos[numAlunos].nota1, &alunos[numAlunos].nota2) != EOF) {
        alunos[numAlunos].media = (alunos[numAlunos].nota1 + alunos[numAlunos].nota2) / 2;
        numAlunos++;
    }
    fclose(arquivo);

    
    printf("\nAlunos aprovados:\n");
    for (int i = 0; i < numAlunos; i++) {
        if (alunos[i].media >= 6.0) {
            printf("%s - Média: %.2f\n", alunos[i].nome, alunos[i].media);
        }
    }

    printf("\nAlunos reprovados:\n");
    for (int i = 0; i < numAlunos; i++) {
        if (alunos[i].media < 6.0) {
            printf("%s - Média: %.2f\n", alunos[i].nome, alunos[i].media);
        }
    }

    for (int i = 0; i < numAlunos; i++) {
        somaNotas += alunos[i].media;
    }

    printf("\nMédia geral da turma: %.2f\n", somaNotas / numAlunos);

    return 0;
}