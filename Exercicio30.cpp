#include <stdio.h>

int main() {

    //declarando variaveis
    int opcao;
    float saldo = 1000.00, valor;

    do {
        printf("=========== CAIXA ELETRONICO ===========\n");
        printf("1 - Consultar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Sair\n");
        printf("========================================\n");

        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Saldo atual: R$ %.2f\n", saldo);
                break;
            case 2:
                printf("Digite o valor do deposito: ");
                scanf("%f", &valor);

                if (valor > 0) {
                    saldo = saldo + valor;
                    printf("Deposito realizado. Saldo atual: R$ %.2f\n", saldo);
                } else {
                    printf("Valor invalido\n");
                }
                break;
            case 3:
                printf("Digite o valor do saque: ");
                scanf("%f", &valor);

                if (valor <= 0) {
                    printf("Valor invalido\n");
                } else if (valor > saldo) {
                    printf("Saldo insuficiente\n");
                } else {
                    saldo = saldo - valor;
                    printf("Saque realizado. Saldo atual: R$ %.2f\n", saldo);
                }
                break;
            case 4:
                printf("Obrigado por utilizar o caixa eletronico!\n");
                break;
            default:
                printf("Opcao invalida\n");
                break;
        }
    } while (opcao != 4);

    return 0;
}
