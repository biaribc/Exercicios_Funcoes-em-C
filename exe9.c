#include <stdio.h>

float gramas(float peso){
    float grama;
    grama = peso * 1000;
    return grama;
}
float toneladas(float peso){
   float tonelada;
    tonelada = peso / 1000;
    return tonelada;
}

int main(){
    float peso;
        printf("Peso em Kg: ");
        scanf("%f", &peso);
    printf("\nPeso em gramas:\t %.2f",gramas(peso));
    printf("\nPeso em toneladas:\t %.2f",toneladas(peso));
    return 0;
}
