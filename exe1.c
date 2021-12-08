#include <stdio.h>
float media(float *altura)
{
    float soma = 0, media;
    for (int i = 0; i <= 5; i++)
        soma = soma + altura[i];
    media = soma / 5;
    return media;
}
int main()
{

    float altura[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite a altura %d: ", i + 1);
        scanf("%f", &altura[i]);
        fflush(stdin);
    }
    printf("\nMedia das alturas: %.2f", media(altura));

    return 0;
}
