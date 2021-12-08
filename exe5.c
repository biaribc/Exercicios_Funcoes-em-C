#include <stdio.h>
#include <string.h>
void populacao(int populacao, char *cidade)
{
    if ((populacao > 1) && (populacao <= 5000))
        printf("A cidade %s e uma Vila.", cidade);
    else if ((populacao > 5001) && (populacao <= 15000))
        printf("A cidade %s e um Distrito.", cidade);
    else if ((populacao >= 15001) && (populacao <= 1000000))
        printf("A cidade %s e uma Cidade.", cidade);
    else if (populacao >= 1000001)
        printf("A cidade %s e uma Metropole.", cidade);
}
void cidade()
{
    char cidade[20];
    int quantidade;
    do
    {
        puts("\tDIGITE 0 PARA ENCERRAR A LEITURA");
        puts("Digite o nome da cidade: ");
        fflush(stdin);
        scanf("%s", &cidade);
        puts("Numero populacional: ");
        fflush(stdin);
        scanf("%i", &quantidade);
        populacao(quantidade, cidade);
    } while (stricmp(cidade,"0") != 0 && quantidade !=0);
}
int main()
{
    cidade();
    return 0;
}