#include <stdio.h>
float operacao(float a, char opera, float b)
{
    float result;
    switch (opera)
    {
    case '*':
        result = a * b;
        break;
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '/':
        result = a / b;
        break;
    }
    return result;
}
float primeiraOperacao()
{
    float a, b;
    char opera;
    puts("Insira o Primeiro Numero:");
    fflush(stdin);
    scanf("%f", &a);
    puts("Insira uma Operacao");
    fflush(stdin);
    scanf("%c", &opera);
    puts("Insira o Segundo Numero:");
    fflush(stdin);
    scanf("%f", &b);
    return operacao(a, opera, b);
}
float segundaOperacao()
{
    float a, b;
    char opera;
    a = primeiraOperacao();
    puts("Insira uma Operacao");
    fflush(stdin);
    scanf("%c", &opera);
    puts("Insira o Terceiro Numero:");
    fflush(stdin);
    scanf("%f", &b);
    return operacao(a, opera, b);
}
int main()
{
    printf("%.2f", segundaOperacao());
    return 0;
}
