/*Fa�a uma fun��o que receba um vetor de n�meros inteiros como par�metro, e devolve:
o a m�dia dos valores do vetor;
o o maior valor do vetor.
Esses valores devem ser retornados utilizando passagem de par�metros por refer�ncia.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void vetor(int *vetor, int tam, int *maiorValor, float *mediaValores){
    int soma = 0 ,i;
    *maiorValor= vetor[0];
    for(i=0;i<tam;i++){
        if(vetor[i] > *maiorValor){
            *maiorValor = vetor[i];
        }
        soma += vetor[i];
    }
    *mediaValores = soma/(float)tam;
}

int main()
{
    int v[10], maior_valor, i;
    float media_valores;

    for(i=0;i<10;i++){
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", &v[i]);
    }

    vetor(v, 10, &maior_valor, &media_valores);
    printf("\nO maior valor desse vetor eh = %d\nA media dos valores desse vetor eh = %.2f\n", maior_valor, media_valores);
    getch();
    return 0;
}
