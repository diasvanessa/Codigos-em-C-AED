/*Escreva um programa que recebe um operador aritm�tico e dois operandos e calculea o pera��o indicada.
As opera��es poss�veis s�o soma(+),subtra��o(-),multiplica��o(*)e divis�o(/).*/

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
