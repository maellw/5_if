#include <stdio.h>

int main()
{
    int numero, maior = 0;

    printf("Digite um numero inteiro (negativo para sair): ");
    scanf("%d", &numero);

    while (numero >= 0)
    {
        if (numero > maior)
        {
            maior = numero;
        }

        printf("Digite um numero inteiro (negativo para sair): ");
        scanf("%d", &numero);
    }

    printf("O maior numero digitado foi: %d\n", maior);

    return 0;
}
