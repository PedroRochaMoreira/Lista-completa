#include <stdio.h>

int main() {

    //declarando variaveis
    float a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    printf("Digite o terceiro numero: ");
    scanf("%f", &c);

    if (a >= b && a >= c) {
        printf("O maior numero e: %.2f\n", a);
    } else if (b >= a && b >= c) {
        printf("O maior numero e: %.2f\n", b);
    } else {
        printf("O maior numero e: %.2f\n", c);
    }

    return 0;
}
