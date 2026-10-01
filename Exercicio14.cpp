#include <stdio.h>

int main() {

    //declarando variaveis
    float numero1, numero2;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);

    if (numero1 > numero2) {
        printf("O maior numero e: %.2f\n", numero1);
    } else if (numero2 > numero1) {
        printf("O maior numero e: %.2f\n", numero2);
    } else {
        printf("Os numeros sao iguais, digite numeros diferentes\n");
    }

    return 0;
}
