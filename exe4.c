#include <stdio.h>
#include <string.h>
int idade(int anoNasc, int hoje)
{
    int idade;
    idade = hoje-anoNasc;
    printf("Idade:\t%i\n",idade);
    return idade;
}

void nivel(int idade)
{
    if (idade <= 10)
        puts("\tCrianca\n");
    else if ((idade > 10) && (idade < 18))
        puts("\tAdolescente");
    else if ((idade >= 18) && (idade < 25))
        puts("\tJovem");
    else if ((idade >= 25) && (idade <= 58))
        puts("\tAdulto");
    else if (idade > 58)
        puts("\tIdoso");
}
void classifica(int anoNasc, int hoje){
    nivel(idade(anoNasc,hoje));
}
int main()
{
    int anoNasc, hoje;
    do
    {
        puts("DIGITE 0 PARA PARAR A LEITURA");
        puts("Digite o ano que voce nasceu: ");
        fflush(stdin);
        scanf("%i", &anoNasc);
        puts("Digite o ano atual: ");
        fflush(stdin);
        scanf("%i", &hoje);
        classifica(anoNasc, hoje);
    } while (anoNasc!=0&&hoje!=0);
    return 0;
}
