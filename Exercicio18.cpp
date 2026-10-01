#include <stdio.h>

int main() {

    //declarando variaveis
    int idade;

    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    if (idade < 0) {
        printf("Idade invalida\n");
    } else if (idade <= 12) {
        printf("Crianca\n");
    } else if (idade <= 17) {
        printf("Adolescente\n");
    } else if (idade <= 59) {
        printf("Adulto\n");
    } else {
        printf("Idoso\n");
    }

    return 0;
}
