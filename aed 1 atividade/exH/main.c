/*Crie um programa que receba uma string do usuario, e mostre se existem letras repetidas,
 e quais sao elas.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, count = 0;
    char str_Usuario[20];

    printf("Digite uma palavra: ");
    fgets(str_Usuario, 20, stdin);
    fflush(stdin);

    for(i = 0; str_Usuario[i] != '\0'; i++){
        for(j = i+1; str_Usuario[j] != '\0'; j++){
            if(str_Usuario[i] == str_Usuario[j]){
                count++;
                break;
            }
        }
    }

    if (count == 0)
    {
        printf("Nao ha letras repetidas!\n");
    }
    else{
        printf("Letras repetidas:\n");

        for(i = 0; str_Usuario[i] != '\0'; i++){
        for(j = i+1; str_Usuario[j] != '\0'; j++){
            if(str_Usuario[i] == str_Usuario[j]){
                printf("%c\n", str_Usuario[i]);
                break;
            }
        }
        }
    }

    return 0;
}
