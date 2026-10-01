#include <stdio.h>

int main() {

    //declarando variaveis
    float horasTrabalhadas, valorHora, salarioBruto;

    printf("Digite a quantidade de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valorHora);

    salarioBruto = horasTrabalhadas * valorHora;

    printf("O salario bruto do funcionario e: R$ %.2f\n", salarioBruto);

    return 0;
}
