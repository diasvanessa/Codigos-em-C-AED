/*b) Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual,
calcule e mostrea idade desta pessoa,e quantos anos essa pessoa terá em 2030.*/

#include <stdio.h>

int main(){
    int ano_nascimento, ano_atual;
    printf("Digite o ano de nascimento:");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);

    printf("Sua idade atual eh: %d\n", ano_atual - ano_nascimento);
    printf("Voce tera %d anos em 2030!\n", 2030 - ano_nascimento);

    return 0;
}
