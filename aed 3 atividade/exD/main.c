/*d) Construa uma função que receba dois valores inteiros a e b, e retorne o quociente e o
 resto da divisão de a por b.
 Utilize passagem de parâmetro por referência para retornar os resultados.
 A função deve retornar -1 caso não seja possível realizar as operações e 0 caso seja possível.
Crie um programa que utilize a função criada, tratando o retorno da função*/

#include <stdio.h>
#include <stdlib.h>

int divisao(int num1, int num2, int *r, float *q){
    if(num2 == 0){
        return -1;
    }
    else{
        *q = (float)num1 / num2;
        *r = num1 % num2;
        return 0;
    }
}

int main()
{
    int a, b, resto, ret_Func;
    float quociente;
    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &a, &b);
    ret_Func = divisao(a,b,&resto,&quociente);
    if(ret_Func == -1){
        printf("Nao foi possivel realizar a operacao!\n");
    }
    else{
        printf("O resultado da divisao eh = %.2f, e o resto dessa divisao eh = %d\n", quociente, resto);
    }

    return 0;
}
