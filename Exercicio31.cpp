#include <stdio.h>

int main() {

    //declarando variaveis
    float litros, precoLitro, valorBruto, percentualDesconto, valorDesconto, valorFinal;

    printf("Digite a quantidade de litros abastecidos: ");
    scanf("%f", &litros);

    printf("Digite o preco do litro: ");
    scanf("%f", &precoLitro);

    valorBruto = litros * precoLitro;

    if (litros < 20) {
        percentualDesconto = 0;
    } else if (litros <= 40) {
        percentualDesconto = 3;
    } else {
        percentualDesconto = 5;
    }

    valorDesconto = valorBruto * percentualDesconto / 100;
    valorFinal = valorBruto - valorDesconto;

    printf("Valor bruto: R$ %.2f\n", valorBruto);
    printf("Desconto (%.0f%%): R$ %.2f\n", percentualDesconto, valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
