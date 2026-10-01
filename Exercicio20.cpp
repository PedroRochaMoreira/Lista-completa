#include <stdio.h>

int main() {

    //declarando variaveis
    float numero1, numero2, resultado;
    char operacao;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    printf("Digite a operacao desejada (+, -, * ou /): ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            resultado = numero1 + numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = numero1 - numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = numero1 * numero2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: nao e possivel dividir por zero\n");
            }
            break;
        default:
            printf("Operacao invalida\n");
            break;
    }

    return 0;
}
