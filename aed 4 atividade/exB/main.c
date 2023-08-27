/*Crie uma fun��o que receba um vetor de caracteres (String),
seu tamanho e um caractere como par�metros,
e substitua todas as ocorr�ncias desse caractere por �*�.
A fun��o deve retornar a quantidade de substitui��es realizadas*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int subst_Caracter(char *c, int tam, char subs){
    int i, count = 0;
    for(i=0; c[i] != '\0'; i++){
        if(c[i] == subs){
            count++;
            c[i] = '*';
        }
    }
    return count;
}

int main()
{
    char str[100], char_Substituir;
    int quant_Subst = 0;
    printf("Digite uma frase ou palavra: ");
    fgets(str,100,stdin);
    fflush(stdin);
    printf("Digite o caractere que deseja substituir por *:");
    char_Substituir = getchar();

    quant_Subst = subst_Caracter(str, 100, char_Substituir);
    printf("A string com %c substituido por * eh = %s", char_Substituir, str);
    printf("A quantidade de caracteres substituidos eh = %d", quant_Subst);
    getch();
    return 0;
}
