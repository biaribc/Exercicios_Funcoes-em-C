#include <stdio.h>
void apresentaPorcentagem(float aluno, float aprovados){
    float aprov, reprov;
    aprov = (aprovados / aluno) * 100;
    reprov = ((aluno - aprovados) / aluno) * 100;
    printf("\nPorcentagem\n\tAprovados: %.2f%%\n\tReprovados: %.2f%%", aprov, reprov);
}
int main() {
    float aluno, aprovados;
    printf("Numero de alunos: ");
    scanf("%i", &aluno);
    fflush(stdin);
    printf("Aprovados: ");
    scanf("%i", &aprovados);
    apresentaPorcentagem(aluno, aprovados);
    return 0;
}
