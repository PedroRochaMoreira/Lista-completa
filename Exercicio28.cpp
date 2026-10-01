#include <stdio.h>

int main() {

    //declarando variaveis
    int i;
    float numero, maior;

    for (i = 1; i <= 10; i++) {
        printf("Digite o %d numero: ", i);
        scanf("%f", &numero);

        if (i == 1 || numero > maior) {
            maior = numero;
        }
    }

    printf("O maior numero informado foi: %.2f\n", maior);

    return 0;
}
