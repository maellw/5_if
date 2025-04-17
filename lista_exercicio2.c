#include <stdio.h>

int main()
{
    float numero, soma = 0;
    int contador = 0;

    printf("Digite um numero (digite -1000 para encerrar): ");
    scanf("%f", &numero);

    while (numero != -1000) {
        if (numero > 0) {
            soma = soma + numero;
            contador = contador + 1;
        }

        printf("Digite um numero (digite -1000 para encerrar): ");
        scanf("%f", &numero);
    }

    printf("%d valores positivos\n", contador);

    if (contador > 0) {
        printf("Media: %.1f\n", soma / contador);
    }

    return 0;
}
