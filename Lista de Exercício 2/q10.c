#include <stdio.h>

#define SIZE 10

int main() {
    int vetor1[SIZE], vetor2[SIZE], comuns[SIZE];
    int k = 0;

    printf("Digite 10 inteiros para o primeiro vetor:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 10 inteiros para o segundo vetor:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (vetor1[i] == vetor2[j]) {

                int jaPresente = 0;
                for (int l = 0; l < k; l++) {
                    if (comuns[l] == vetor1[i]) {
                        jaPresente = 1;
                        break;
                    }
                }
                if (!jaPresente) {
                    comuns[k] = vetor1[i];
                    k++;
                }
            }
        }
    }

    printf("\nElementos comuns entre os vetores:\n");
    for (int i = 0; i < k; i++) {
        printf("%d ", comuns[i]);
    }
    printf("\n");

    return 0;
}
Questão10.c
Exibindo Questão10.c…
Lista de Exercício 2
Edson de Araujo Silva
•
2 de out.
Data de entrega: 10 de out., 23:59

Lista de Exercício 02
Documentos Google
Comentários da turma
