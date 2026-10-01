#include <stdio.h>

int main() {

    //declarando variaveis
    int quantidadeAlunos, i;
    float nota, soma = 0, media;

    printf("Digite a quantidade de alunos da turma: ");
    scanf("%d", &quantidadeAlunos);

    if (quantidadeAlunos <= 0) {
        printf("Quantidade invalida\n");
    } else {
        for (i = 1; i <= quantidadeAlunos; i++) {
            printf("Digite a nota do aluno %d: ", i);
            scanf("%f", &nota);

            soma = soma + nota;
        }

        media = soma / quantidadeAlunos;

        printf("A media geral da turma e: %.2f\n", media);
    }

    return 0;
}
