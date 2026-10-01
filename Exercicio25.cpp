#include <stdio.h>

int main() {

    //declarando variaveis
    int n, i, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido, digite um numero positivo\n");
    } else {
        for (i = 1; i <= n; i++) {
            soma = soma + i;
        }

        printf("A soma de 1 ate %d e: %d\n", n, soma);
    }

    return 0;
}
