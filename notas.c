#include <stdio.h>
#include <locale.h>

int main () {
    int qtdAlunos, qtdNotas = 4; 
    printf("Qual é a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    int planilha[qtdAlunos][qtdNotas];
    float media;
    for (int alunos = 0; alunos < qtdAlunos; alunos++) {
        for (int notas = 0; notas < 2; notas++) {
            printf("Insira a Av%d do aluno %d: ", notas + 1, alunos + 1);
            scanf("%d", &planilha[alunos][notas]); 
        }
    }

// ----------------------------------------------------------------------------

    for (int alunos = 0; alunos < qtdAlunos; alunos++) {
        printf("Notas do aluno %d: ", alunos + 1);
        for (int notas = 0; notas < 2; notas++) {
            printf("%d ", planilha[alunos][notas]);
        }
        media = (planilha[alunos][0] + planilha[alunos][1]) / 2.0;
        planilha[alunos][3] = media;
        printf("Média: %.2f\n", media);

        if (media >= 6) {
            printf("Média: %.2f - Aprovado\n", media);
        } else {
            printf("Insira a nota da Av3 do aluno %d: ", alunos + 1);
            scanf("%d", &planilha[alunos][2]);

            float maiorNota = (planilha[alunos][0] > planilha[alunos][1])? planilha[alunos][0] : planilha[alunos][1];

            media = ((maiorNota + planilha[alunos][2]) / 2.0);
            planilha[alunos][3] = media;
            printf("Nova Média com Av3: %.2f\n", media); 

            if (media >= 6) {
                printf("Aluno%d Média: %.2f - Aprovado\n" , alunos + 1, media);
            } else {
                printf("Aluno%d Média: %.2f - Reprovado\n", alunos + 1,media);
            }
          
       }
    }

    return 0;
}