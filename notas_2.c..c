#include <stdio.h>

int main()
{
    float n1, n2, n3, media;
    int frequencia;


    printf("Digite as tres notas do aluno, nao eh necessario separar por virgula:");
    scanf("%f %f %f", &n1, &n2, &n3);
    printf("Digite a frequencia (em %%), nao eh necessario separar por virgula:\n");
    scanf("%d", &frequencia);

    media = (n1 + n2 + n3) / 3;

    if (media > 8.0 &frequencia >= 75)
        printf("O estudante foi APROVADO COM DISTINÇAO pois teve media %.2f e frequencia %d%%.\n", media, frequencia);

    else if (media >= 6.0 &media <= 8.0 &frequencia >= 75)
        printf("O estudante foi APROVADO DIRETO pois teve media %.2f e frequencia %d%%.\n", media, frequencia);

    else if ((media >= 4.0 &media < 6.0 &frequencia >= 75) ||
             (media >= 6.0 &frequencia < 75) ||
             (media >= 4.0 &frequencia > 50 &frequencia < 75))
        printf("O estudante VAI PARA FINAL pois teve media %.2f e frequencia %d%%.\n", media, frequencia);

    else
        printf("O estudante foi REPROVADO DIRETO pois teve media %.2f e frequencia %d%%.\n", media, frequencia);

    return 0;
}
