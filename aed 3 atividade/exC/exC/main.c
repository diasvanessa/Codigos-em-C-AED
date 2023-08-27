/*Fa�a uma fun��o para aproximar
a fun��o exponencial pela s�rie de Taylor (DICA: utilize a fun��o de exponencia��o criada no exerc�cio*/

#include <stdio.h>
#include <stdlib.h>

float fatorial(float calc_Fatorial){
    int i;
    for(i = calc_Fatorial-1; i >= 1; i--){
        calc_Fatorial *= i;
    }
    return calc_Fatorial;
}

float exponencial(int calc_Base, int calc_Expoente){
    int i;
    float calc_Potencia = 1;
    for(i=0; i<calc_Expoente; i++){
            calc_Potencia *= calc_Base;
        }
    return calc_Potencia;
}

void serie_Taylor(float *result, int base, int expoente){
    int i;
    *result = 1;
    if(base == 0){
        *result = 1;
    }
    else{
        for(i=1; i <= expoente; i++){
        *result += exponencial(base, i)/fatorial(i);
        }
    }
}

int main()
{
    float resultado;
    int x, n;
    printf("Digite um valor para o expoente de e, e quantas casas decimais deseja aproximar: \n");
    scanf("%d %d", &x, &n);
    serie_Taylor(&resultado, x, n);
    if(x==0){
        printf("e^0 = 1");
    }
    else{
        printf("e^%d com aproximacao de %d casas decimais eh = %f", x,n,resultado);
    }
    getch();
    return 0;
}
