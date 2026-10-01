#include <stdio.h>

int main() {

    //declarando variaveis
    int i;

    printf("Numeros pares entre 1 e 100:\n");

    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
