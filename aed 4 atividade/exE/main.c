/*Crie uma função que retorne um vetor alocado dinamicamente e
 preenchido com um valor passado como parâmetro*/

#include <stdio.h>
#include <stdlib.h>

int* preenche_vet(int tam, int valor){
    int i, *vet;
    vet = (int *) malloc(tam*sizeof(int));
    for(i=0;i<tam;i++){
        vet[i] = valor;
    }
    return vet;
}

int main()
{
    int *v, n, num, i;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    printf("Digite um numero para preencher esse vetor: ");
    scanf("%d", &num);

    v = preenche_vet(n,num);
    printf("Vetor preenchido: \n");
    for(i=0;i<n;i++){
        printf("%5d ", v[i]);
    }
    getch();
    free(v);
    return 0;
}
