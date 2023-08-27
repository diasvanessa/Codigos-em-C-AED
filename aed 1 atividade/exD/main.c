/*Fa�a um programa que receba tr�s notas de um aluno, calcule e mostrea m�dia
aritm�tica. Considerando que,se o aluno tirar m�dia entre 0 e 3,ele est�
REPROVADO,se ele tirar entre 3 e 7, ele est� de EXAME FINAL, e se ele tirar
entre 7 e 10, ele est� APROVADO, calcule, para alunos de
EXAMEFINAL, qual dever� ser a nota tirada neste exame, para que o alunos seja aprovado,
considerando que a m�dia entre a nota do exame e a m�dia ao longodo semestre
deve ser 6,0.*/

#include <stdio.h>

int main(){
    float media, media_Aprovacao = 6.0, nota_exFinal, nota1, nota2, nota3;
    printf("Digite as tres notas do aluno: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    media = (nota1+nota2+nota3) / 3.0;
    printf("Media do aluno = %f\n", media);

    if(media >= 0 && media < 3){
        printf("Reprovado!\n");
    }
    else if(media >= 3 && media < 7){
        printf("Aluno de exame final!\n");
        nota_exFinal = (2 * media_Aprovacao) - media;
        printf("Nota necessaria no exame final para ser aprovado = %f", nota_exFinal);
    }
    else{
        printf("Aluno aprovado!\n");
    }
    return 0;
}
