/*Faça um programa que crie duas matrizes 3x3, utilizando dois ponteiros.
Preencha as matrizes com valores inteiros.Crie uma terceira matriz, também utilizando ponteiros,
 e preencha com o resultado da soma dos elementos respectivos das outras matrizes.
 Mostre na tela as três matrizes*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **mat1, **mat2, **mat3, i, j;

    mat1 = (int **) malloc(3*sizeof(int *));
    mat2 = (int **) malloc(3*sizeof(int *));
    mat3 = (int **) malloc(3*sizeof(int *));

    for(i = 0; i < 3; i++){
        mat1[i] = (int *) malloc(3*sizeof(int));
        mat2[i] = (int *) malloc(3*sizeof(int));
        mat3[i] = (int *) malloc(3*sizeof(int));
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor para a primeira matriz[%d][%d]:", i, j);
            scanf("%d", &mat1[i][j]);
            printf("Digite um valor para a segunda matriz[%d][%d]:", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nPrimeira matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%4d ", mat1[i][j]);
        }
        printf("\n");
    }
    printf("\nSegunda matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("%4d ", mat2[i][j]);
        }
        printf("\n");
    }
       printf("\nTerceira matriz: \n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            mat3[i][j] = mat1[i][j]+mat2[i][j];
            printf("%4d ", mat3[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 3; i++){
        free(mat1[i]);
        free(mat2[i]);
        free(mat3[i]);
    }

    free(mat1);
    free(mat2);
    free(mat3);
    mat1 = NULL;
    mat2 = NULL;
    mat3 = NULL;

    getch();
    return 0;
}
