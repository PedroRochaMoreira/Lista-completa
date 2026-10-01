#include <stdio.h>

int main() {

    //declarando variaveis
    float raio, area, pi = 3.14159;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = pi * raio * raio;

    printf("A area do circulo e: %.2f\n", area);

    return 0;
}
