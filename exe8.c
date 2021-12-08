#include <stdio.h>
void pesos (float *peso){
    float aux;
    int i,x;    
    for(int i = 0; i < 3; i++) {
        for(x = i + 1; x < 3; x++){
            if (peso[i] > peso[x]){
                aux = peso[x];
                peso[x] = peso[i];
                peso[i] = aux;
            }
        }
    }   
    for(int i = 0; i < 3; i++)
       printf("Peso %i %.2f\n",i+1, peso[i]);
}
int main() {
    float peso[3];
    for(int i = 0; i < 3; i++){
        puts("Peso:");
        scanf("%f", &peso[i]);
    }
    pesos(peso);
    return 0;
}