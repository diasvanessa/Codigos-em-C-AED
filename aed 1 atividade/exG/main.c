/*Crie um programa que preencha uma matriz 5x10 com numeros inteiros e 
some cada uma das linhas, armazenando o resultado das soma sem um vetor.
A seguir o programa devera multiplicar cada elemento da matriz pela soma da linha 
correspondente e mostrar a matriz resultante.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int mat[5][10], i, j, soma;
    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            mat[i][j] = rand() % 100;
        }
    }

    printf("Matriz original:\n");
for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("%4d ", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriz modificada:\n");
    for (i = 0; i < 5; i++)
    {
        soma = 0; 
        for (j = 0; j < 10; j++)
        {
            soma += mat[i][j];
        }
        for (j = 0; j < 10; j++)
        {
            mat[i][j] *= soma;
            printf("%4d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
