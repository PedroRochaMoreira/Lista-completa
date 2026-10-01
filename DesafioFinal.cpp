#include <stdio.h>

int main() {

    //declarando variaveis
    int codigo, quantidade, totalItens = 0;
    float preco, subtotal, totalPedido = 0, desconto = 0, valorFinal;
    char formaPagamento;

    do {
        printf("=========== LANCHONETE ===========\n");
        printf("1 - X-Burguer       R$ 18,00\n");
        printf("2 - X-Salada        R$ 20,00\n");
        printf("3 - Batata frita    R$ 12,00\n");
        printf("4 - Refrigerante    R$ 6,00\n");
        printf("5 - Suco natural    R$ 8,00\n");
        printf("0 - Finalizar pedido\n");
        printf("==================================\n");

        printf("Digite o codigo do item: ");
        scanf("%d", &codigo);

        switch (codigo) {
            case 1:
                preco = 18.00;
                break;
            case 2:
                preco = 20.00;
                break;
            case 3:
                preco = 12.00;
                break;
            case 4:
                preco = 6.00;
                break;
            case 5:
                preco = 8.00;
                break;
            case 0:
                preco = 0;
                break;
            default:
                preco = 0;
                printf("Opcao invalida\n");
                break;
        }

        if (preco > 0) {
            printf("Digite a quantidade: ");
            scanf("%d", &quantidade);

            if (quantidade > 0) {
                subtotal = preco * quantidade;
                totalPedido = totalPedido + subtotal;
                totalItens = totalItens + quantidade;

                printf("Item adicionado. Subtotal: R$ %.2f\n", subtotal);
            } else {
                printf("Quantidade invalida\n");
            }
        }
    } while (codigo != 0);

    if (totalItens == 0) {
        printf("Nenhum item foi pedido\n");
    } else {
        printf("Forma de pagamento (D - Dinheiro/Pix com 5%% de desconto, C - Cartao): ");
        scanf(" %c", &formaPagamento);

        if (formaPagamento == 'D' || formaPagamento == 'd') {
            desconto = totalPedido * 0.05;
        }

        valorFinal = totalPedido - desconto;

        printf("=========== RESUMO DO PEDIDO ===========\n");
        printf("Quantidade de itens: %d\n", totalItens);
        printf("Total do pedido: R$ %.2f\n", totalPedido);
        printf("Desconto: R$ %.2f\n", desconto);
        printf("Valor final: R$ %.2f\n", valorFinal);
    }

    return 0;
}
