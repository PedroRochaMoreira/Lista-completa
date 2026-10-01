#include <stdio.h>

int main() {

    //declarando variaveis
    int i, aprovados = 0, reprovados = 0;
    float nota, percentualAprovacao;

    for (i = 1; i <= 10; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);

        if (nota >= 7) {
            aprovados++;
        } else {
            reprovados++;
        }
    }

    percentualAprovacao = (aprovados / 10.0) * 100;

    printf("Quantidade de aprovados: %d\n", aprovados);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Percentual de aprovacao: %.2f%%\n", percentualAprovacao);

    return 0;
}
