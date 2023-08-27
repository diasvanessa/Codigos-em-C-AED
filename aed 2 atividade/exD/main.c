/*Escreva um programa em C que crie um vetor de n n�meros inteiros (n informado pelo usu�rio).
Fa�a a leitura dos elementos desse vetor. Depois, exclua os elementos �mpares desse vetor, e redimensione-o,
utilizando aloca��o din�mica de mem�ria, para que n�o haja buracos no resultado final*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor_Usuario, n, i, j, count;

    printf("Digite o tamanho do vetor: \n");
    scanf("%d", &n);

    vetor_Usuario = (int *) malloc(n*sizeof(int));

    for(i = 0; i < n; i++){
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", &vetor_Usuario[i]);
    }

    for(i = 0; i < n; i++){
        count = 0;
        if(vetor_Usuario[i] % 2 != 0){
            for(j=i; count <= n - i; j++){
                vetor_Usuario[j] = vetor_Usuario[j+1];
                count++;
            }
        n--;
        i--;
        }
    }

    vetor_Usuario = (int *) realloc(vetor_Usuario, n*sizeof(int));
    printf("Vetor sem impares:\n");
    for(i=0;i<n;i++){
        printf("%4d ", vetor_Usuario[i]);
    }

    free(vetor_Usuario);
    getch();
    return 0;
}
