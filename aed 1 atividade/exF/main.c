/*Fa�a um programa que calcule a �rea de um tri�ngulo,cuja base e altura s�o fornecidas pelo usu�rio.
Esse programa n�o pode permitir a entrada de dados inv�lidos, ou seja, medidas menores ou iguais a0.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, altura;
    float area;
    printf("Digite a base do triangulo: ");
    scanf("%d", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%d", &altura);

    if(base <= 0 || altura <= 0){
        printf("Base e/ou altura invalida!\n");
    }
    else{
        area = (base * altura) / 2.0;
        printf("Area desse triangulo: %.2f", area);
    }
    return 0;
}
