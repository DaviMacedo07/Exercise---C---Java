#include <stdio.h>
#include <locale.h>

int main () {
    int qtdAlunos, qtdNotas = 4; 
    printf("Qual é a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    int planilha[qtdAlunos][qtdNotas];
    float media;
    float soma = 0;

    for (int alunos = 0; alunos < qtdAlunos - 2; alunos++) {
        for (int notas = 0; notas < qtdNotas; notas++) {
            printf("Insira a Av%d do aluno %d: ", notas + 1, alunos + 1);
            scanf("%d", &planilha[alunos][notas]); 
        }
    }




    for (int alunos = 0; alunos < qtdAlunos; alunos++) {
        printf("Notas do aluno %d: ", alunos + 1);
        for (int notas = 0; notas < qtdNotas; notas++) {
            printf("%d ", planilha[alunos][notas]);
        }

        media = (planilha[alunos][0] + planilha[alunos][1]) / 2.0;
        printf("Média: %.2f\n", media);
        if (media < 6){
            printf("Insira a nota da Av3 do aluno%d: " + alunos + 1 );
            scanf("%d", &planilha[alunos][2]);
        }
        
    }

    return 0;
}
