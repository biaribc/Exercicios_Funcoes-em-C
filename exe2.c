#include <stdio.h>

int potencia(int x, int y)
{
    int z, i;
    z = x;
    for (i = 2; i <= y; i++)
    {
        x = x * z;
    }
    return x;
}
int main(void)
{
    int x, y;
    printf("Insira a base: ");
    scanf("%i", &x);
    printf("Insira o expoente: ");
    scanf("%i", &y);

    printf("%i", potencia(x, y));
}
