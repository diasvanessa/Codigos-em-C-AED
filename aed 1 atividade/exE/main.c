/*Fa�a o programa que l� X n�meros e soma os maiores que 10 e conta os menores que 10.
Considere que a leitura dos n�meros encerra quando o usu�rio digita dez.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, soma = 0, count = 0, i;

    while(1){
        printf("Digite um numero: ");
        scanf("%d", &num);
        if(num == 10){
            break;
        }
        if(num > 10){
            soma += num;
        }
        else {
            count++;
        }
    }
    printf("Soma dos numeros maiores que 10: %d\n", soma);
    printf("Contagem dos numeros menores que 10: %d\n", count);
    return 0;
}
