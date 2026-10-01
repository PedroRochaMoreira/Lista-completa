#include <stdio.h>

int main() {

    //declarando variaveis
    char nomeProduto[30];
    int quantidade;
    float precoUnitario, valorTotal;

    printf("Digite o nome do produto: ");
    scanf("%s", nomeProduto);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Digite o preco unitario: ");
    scanf("%f", &precoUnitario);

    valorTotal = quantidade * precoUnitario;

    printf("Produto: %s\n", nomeProduto);
    printf("Valor total da compra: R$ %.2f\n", valorTotal);

    return 0;
}
