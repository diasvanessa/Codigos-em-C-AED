/*Escreva um programa que recebe um operador aritmético e dois operandos e calculea o peração indicada.
As operações possíveis são soma(+),subtração(-),multiplicação(*)e divisão(/).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char escolha;
    int num1, num2, resultado;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1, &num2);
    fflush(stdin);
    printf("Escolha uma operacao:\n");
    printf("(+) Para soma\n");
    printf("(-) Para subtracao\n");
    printf("(*) Para multiplicacao\n");
    printf("(/) Para divisao\n");
    scanf("%c", &escolha);

    switch(escolha){
    case '+':
        resultado = num1 + num2;
        break;
    case '-':
        resultado = num1 - num2;
        break;
    case '*':
        resultado = num1 * num2;
        break;
    case '/':
        resultado = num1 / num2;
    }

    printf("O resultado eh = %d", resultado);
}
