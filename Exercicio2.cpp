#include <stdio.h>

int main() {

    //declarando variaveis
    int numero1, numero2, soma;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;

    printf("Primeiro numero: %d\n", numero1);
    printf("Segundo numero: %d\n", numero2);
    printf("A soma dos dois numeros e: %d\n", soma);

    return 0;
}
