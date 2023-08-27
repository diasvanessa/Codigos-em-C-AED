/*d) Construa uma fun��o que receba dois valores inteiros a e b, e retorne o quociente e o
 resto da divis�o de a por b.
 Utilize passagem de par�metro por refer�ncia para retornar os resultados.
 A fun��o deve retornar -1 caso n�o seja poss�vel realizar as opera��es e 0 caso seja poss�vel.
Crie um programa que utilize a fun��o criada, tratando o retorno da fun��o*/

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
