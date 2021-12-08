#include <stdio.h>
float mediaA(float nota1, float nota2)
{
    float media;
    media = (nota1 + nota2) / 2;
    return media;
}
float mediaP4(float nota1, float nota2)
{
    float media;
    media = ((4 * nota1) + (6 * nota2)) / 10;
    return media;
}
float mediaP3(float nota1, float nota2)
{
    float media;
    media = ((3 * nota1) + (7 * nota2)) / 10;
    return media;
}

int main()
{
    float nota1, nota2;
    for (int i = 0; i < 20; i++)
    {
        printf("Aluno %d\n", i + 1);
        printf("Primeira Nota: ");
        fflush(stdin);
        scanf("%f", &nota1);
        printf("Segunda Nota: ");
        fflush(stdin);
        scanf("%f", &nota2);
        printf("Media Aritmetica: %.2f\n",mediaA(nota1, nota2));
        printf("Media com Pesos 4  e 6: %.2f\n",mediaP4(nota1, nota2));
        printf("Media com Pesos 3 e 7: %.2f\n",mediaP3(nota1, nota2));
    }
    return 0;
}