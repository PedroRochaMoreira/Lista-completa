#include <stdio.h>

int main() {

    //declarando variaveis
    char nome[30];
    int quantidadeAlunos, i, aprovados = 0, recuperacao = 0, reprovados = 0;
    float nota1, nota2, media, somaMedias = 0, mediaGeral, maiorMedia, menorMedia;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quantidadeAlunos);

    if (quantidadeAlunos <= 0) {
        printf("Quantidade invalida\n");
    } else {
        for (i = 1; i <= quantidadeAlunos; i++) {
            printf("Digite o nome do aluno %d: ", i);
            scanf("%s", nome);

            printf("Digite a nota da primeira avaliacao: ");
            scanf("%f", &nota1);

            printf("Digite a nota da segunda avaliacao: ");
            scanf("%f", &nota2);

            media = (nota1 + nota2) / 2;
            somaMedias = somaMedias + media;

            if (media >= 7) {
                aprovados++;
                printf("%s - Media: %.2f - Aprovado\n", nome, media);
            } else if (media >= 5) {
                recuperacao++;
                printf("%s - Media: %.2f - Recuperacao\n", nome, media);
            } else {
                reprovados++;
                printf("%s - Media: %.2f - Reprovado\n", nome, media);
            }

            if (i == 1) {
                maiorMedia = media;
                menorMedia = media;
            } else {
                if (media > maiorMedia) {
                    maiorMedia = media;
                }
                if (media < menorMedia) {
                    menorMedia = media;
                }
            }
        }

        mediaGeral = somaMedias / quantidadeAlunos;

        printf("=========== RESULTADO DA TURMA ===========\n");
        printf("Quantidade de alunos: %d\n", quantidadeAlunos);
        printf("Quantidade de aprovados: %d\n", aprovados);
        printf("Quantidade em recuperacao: %d\n", recuperacao);
        printf("Quantidade de reprovados: %d\n", reprovados);
        printf("Media geral da turma: %.2f\n", mediaGeral);
        printf("Maior media: %.2f\n", maiorMedia);
        printf("Menor media: %.2f\n", menorMedia);
    }

    return 0;
}
