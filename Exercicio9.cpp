#include <stdio.h>

int main() {

    //declarando variaveis
    float distancia, litros, consumoMedio;

    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de combustivel utilizada (litros): ");
    scanf("%f", &litros);

    consumoMedio = distancia / litros;

    printf("O consumo medio do veiculo e: %.2f km/L\n", consumoMedio);

    return 0;
}
