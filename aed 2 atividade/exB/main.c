/*Crie um programa que:
o Aloque dinamicamente um vetor de 5 n�meros inteiros,
o Pe�a para o usu�rio digitar os 5 n�meros no espa�o alocado,
o Mostre na tela os 5 n�meros,
o Libere a memoria alocada.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v,i;
    v = (int *) malloc(5*sizeof(int));

    for(i = 0; i < 5; i++){
        printf("Digite um numero para vet[%d]: ", i);
        scanf("%d", &v[i]);
    }
    printf("\nVetor criado:\n");
    for(i = 0; i < 5; i++){
        printf("%4d ", v[i]);
    }

    free(v);
    getch();
    return 0;
}
