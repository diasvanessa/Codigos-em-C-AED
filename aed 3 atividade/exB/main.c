/*Faça uma função que calcule X elevado à Y (X Y), sem utilizar a função pow.
No programa principal, leia 2 valores de X e Y e exiba o resultado da chamada da sub-rotina na tela.*/

#include <stdio.h>
#include <stdlib.h>

int exponencial(float x, int n, float *resultado){
    int i;
    *resultado = 1;
    if(x == 0 && n == 0){
        return 0;
    }
    else if(n < 0){
        return -1;
    }
    else{
        for(i=0; i<n; i++){
            *(resultado) *= x;
        }
        return 1;
    }
}

int main()
{
    float x, result;
    int n, retorno;
    printf("Digite o valor da base e do expoente: ");
    scanf("%f %d", &x, &n);
    retorno = exponencial(x,n,&result);
    if (retorno == 0){
        printf("Indeterminacao!\n");
    }
    else if(retorno == -1){
        printf("Digite um expoente positivo!\n");
    }
    else{
        printf("Resultado = %f\n", result);
    }
    getch();
    return 0;
}
