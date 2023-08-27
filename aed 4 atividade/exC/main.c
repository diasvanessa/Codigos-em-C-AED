/*
Utilize a fun��o troca (swap) apresentada no slide
te�rico da disciplina em uma outra fun��o
que recebe como par�metro um vetor e seu tamanho,
e inverte os valores desse vetor.
Assim, caso o vetor informado contenha os valores 1,3,6,5,8,
o resultado ser� 8,5,6,3,1.
*/

#include <stdio.h>
#include <stdlib.h>

void swap(int *v, int tam){
    int i, temp;
    for(i=0;i<tam/2;i++){
            temp = v[i];
            v[i] = v[tam-i-1];
            v[tam-i-1] = temp;
        }
}

int main()
{
    int *vet, i, n;
    printf("Digite um tamanho para esse vetor: \n");
    scanf("%d", &n);
    vet = (int *) malloc(n*sizeof(int));
    for(i=0; i<n; i++){
        printf("Digite um valor para vet[%d]: ", i);
        scanf("%d", &vet[i]);
    }

    printf("\nVetor normal:");
    for(i=0; i<n; i++){
        printf("%4d ", vet[i]);
    }
    swap(vet, n);
    printf("\nVetor trocado: ");
    for(i=0;i<n;i++){
        printf("%4d ", vet[i]);
    }
    free(vet);
    getch();
    return 0;
}
