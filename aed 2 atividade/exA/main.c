/*a) Utilizando aritm�tica de ponteiros, mostre na tela o conte�do da string char nome[] = �Carla Faria�.
Utilize o printf com %c e n�o %s. Exiba tamb�m o conte�do de um vetor de double de 10 posi��es
usando o nome do vetor como ponteiro para acessar as posi��es.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[12] = "Carla Faria", *c;
    double vetor[10], *v;
    int i;
    c = nome;
    v = vetor;

    for(i=0;i < 12; i++){
        printf("%c", *(c+i));
    }
    printf("\n");
    for(i=0;i < 10; i++){
        printf("%.2lf ", *(v+i));
    }
    getch();
    return 0;
}
