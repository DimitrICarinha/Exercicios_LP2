#include <stdio.h>

int main() {
    int n_alunos;
    float nota, soma = 0, media;

    printf("Digite a quantidade de alunos na turma: ");
    scanf("%d", &n_alunos);

    if (n_alunos <= 0) {
        printf("Quantidade de alunos invalida.\n");
        return 1; 
    }

    for (int i = 1; i <= n_alunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / n_alunos;

    printf("\nA media aritmetica da turma e: %.2f\n", media);

    return 0;
}