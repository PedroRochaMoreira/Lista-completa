#include <stdio.h>

int main() {

    //declarando variaveis
    float valorCompra, percentualDesconto, valorDesconto, valorFinal;

    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    if (valorCompra <= 100) {
        percentualDesconto = 0;
    } else if (valorCompra <= 500) {
        percentualDesconto = 5;
    } else {
        percentualDesconto = 10;
    }

    valorDesconto = valorCompra * percentualDesconto / 100;
    valorFinal = valorCompra - valorDesconto;

    printf("Valor original: R$ %.2f\n", valorCompra);
    printf("Percentual de desconto: %.0f%%\n", percentualDesconto);
    printf("Valor do desconto: R$ %.2f\n", valorDesconto);
    printf("Valor final: R$ %.2f\n", valorFinal);

    return 0;
}
