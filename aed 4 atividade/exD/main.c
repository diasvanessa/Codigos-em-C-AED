/*d) Fa�a uma fun��o para multiplicar um vetor por um escalar (um n�mero).
Mostre, no programa principal,
o vetor antes e depois da multiplica��o.*/


#include <stdio.h>
#include <stdlib.h>

void mult_vetor(int *vet, int tam, int fator){
    int i;
    for(i=0;i<tam;i++){
        vet[i] *= fator;
    }
}

int main()
{
    int *v, n, escalar, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    printf("Digite o escalar para multiplicar esse vetor: ");
    scanf("%d", &escalar);

    v = (int *) malloc(n*sizeof(int));
    for(i=0;i<n;i++){
        printf("Digite um valor para vet[%d]:",i);
        scanf("%d", &v[i]);
    }

    printf("\nVetor: \n");
    for(i=0;i<n;i++){
        printf("%4d ", v[i]);
    }
    mult_vetor(v,n,escalar);

    printf("\nVetor multiplcado por %d: \n", escalar);
    for(i=0;i<n;i++){
        printf("%4d ", v[i]);
    }

    getch();
    free(v);
    return 0;
}
