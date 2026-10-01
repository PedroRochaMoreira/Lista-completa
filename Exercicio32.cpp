#include <stdio.h>

int main() {

    //declarando variaveis
    int horaEntrada, horaSaida, horas;
    float valorTotal;

    printf("Digite a hora de entrada (0 a 23): ");
    scanf("%d", &horaEntrada);

    printf("Digite a hora de saida (0 a 23): ");
    scanf("%d", &horaSaida);

    if (horaEntrada < 0 || horaEntrada > 23 || horaSaida < 0 || horaSaida > 23) {
        printf("Horario invalido\n");
    } else {
        if (horaSaida >= horaEntrada) {
            horas = horaSaida - horaEntrada;
        } else {
            horas = (24 - horaEntrada) + horaSaida;
        }

        if (horas <= 1) {
            valorTotal = 10.00;
        } else {
            valorTotal = 10.00 + (horas - 1) * 5.00;
        }

        printf("Tempo de permanencia: %d hora(s)\n", horas);
        printf("Valor total: R$ %.2f\n", valorTotal);
    }

    return 0;
}
