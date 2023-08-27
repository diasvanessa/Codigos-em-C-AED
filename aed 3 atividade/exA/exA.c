/*a) Escreva uma função que receba como parâmetro um número inteiro positivo N e retorne a soma de todos os números inteiros de 1 a N.*/

#include <stdio.h>

void soma_Numeros(int num, int *s){
    int i;
    for (i = 1; i <= num; i++)
    {
        *s += i; 
    }
}

int main(){
    int n, soma = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    soma_Numeros(n, &soma);
    printf("A soma de todos os numeros inteiros de 1 ate N eh = %d", soma);

    getch();
    return 0;
}