#include <stdio.h>
#include <string.h>

int main() {

    //declarando variaveis
    char nomeProduto[30], produtoMaiorVenda[30], continuar;
    int quantidade, quantidadeVendas = 0, totalProdutos = 0;
    float precoUnitario, totalVenda, faturamento = 0, maiorVenda = 0;

    do {
        printf("Digite o nome do produto: ");
        scanf("%s", nomeProduto);

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);

        printf("Digite o preco unitario: ");
        scanf("%f", &precoUnitario);

        totalVenda = quantidade * precoUnitario;

        printf("Total da venda: R$ %.2f\n", totalVenda);

        quantidadeVendas++;
        totalProdutos = totalProdutos + quantidade;
        faturamento = faturamento + totalVenda;

        if (quantidadeVendas == 1 || totalVenda > maiorVenda) {
            maiorVenda = totalVenda;
            strcpy(produtoMaiorVenda, nomeProduto);
        }

        printf("Deseja registrar outra venda (S/N)? ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("=========== RESUMO DO DIA ===========\n");
    printf("Quantidade de vendas realizadas: %d\n", quantidadeVendas);
    printf("Quantidade total de produtos vendidos: %d\n", totalProdutos);
    printf("Faturamento total: R$ %.2f\n", faturamento);
    printf("Maior venda realizada: R$ %.2f (%s)\n", maiorVenda, produtoMaiorVenda);

    return 0;
}
