#include <stdio.h>

int main() {

    //declarando variaveis
    int voto, votos1 = 0, votos2 = 0, votos3 = 0, totalVotos;

    printf("=========== ELEICAO ===========\n");
    printf("1 - Candidato 1\n");
    printf("2 - Candidato 2\n");
    printf("3 - Candidato 3\n");
    printf("0 - Encerrar votacao\n");
    printf("===============================\n");

    printf("Digite seu voto: ");
    scanf("%d", &voto);

    while (voto != 0) {
        switch (voto) {
            case 1:
                votos1++;
                break;
            case 2:
                votos2++;
                break;
            case 3:
                votos3++;
                break;
            default:
                printf("Voto invalido\n");
                break;
        }

        printf("Digite seu voto: ");
        scanf("%d", &voto);
    }

    totalVotos = votos1 + votos2 + votos3;

    printf("Votos do candidato 1: %d\n", votos1);
    printf("Votos do candidato 2: %d\n", votos2);
    printf("Votos do candidato 3: %d\n", votos3);
    printf("Total de votos: %d\n", totalVotos);

    if (totalVotos == 0) {
        printf("Nenhum voto foi registrado\n");
    } else if (votos1 > votos2 && votos1 > votos3) {
        printf("Candidato vencedor: Candidato 1\n");
    } else if (votos2 > votos1 && votos2 > votos3) {
        printf("Candidato vencedor: Candidato 2\n");
    } else if (votos3 > votos1 && votos3 > votos2) {
        printf("Candidato vencedor: Candidato 3\n");
    } else {
        printf("Houve empate, nao ha um vencedor\n");
    }

    return 0;
}
