/*Crie um programa para calcular a área e o perímetro de um hexágono. 
O seu programa deve implementar uma função chamada calculaHexagono que calcule e retorne a área e o perímetro de um hexágono regular de ladoL.
A função deve obedecer o seguinte protótipo: void calculaHexagono(float l, floar *area, float *perimetro);*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void calculaHexagono(float l, float *area, float *perimetro){
    *area = 6*((l*l*sqrt(3)/4));
    *perimetro = 6*l;
}

int main()
{
    float a, p, lado;
    printf("Digite o valor do lado desse hexagono: ");
    scanf("%f", &lado);
    if(lado > 0){
        calculaHexagono(lado, &a, &p);
        printf("Valor da area desse hexagono = %.2f\nValor do perimetro = %.2f\n", a, p);
    }
    else{
        printf("Digite um valor valido para o lado desse hexagono!");
    }
    getch();
    return 0;
}
