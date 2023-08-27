
/*Faça um programa que cria uma estrutura livro, que contém os elementos título, ano de edição,
número de páginas e preço. Criar uma variável dessa estrutura que é um vetor de 5 elementos.
Ler os valores para a estrutura e imprimir a média do número de páginas do livros.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct livros{
    char titulo[50];
    int ano_Ed;
    float preco;
    int num_Pag;
}livros;

int main()
{
    int i, total_Pag = 0;
    float media_Pag;
    livros info_Livros[5];
    for (i = 0; i < 5; i++){
        printf("Informacoes do livro %d: \n", i+1);
        printf("Digite o titulo do livro: \n");
        fgets(info_Livros[i].titulo, 50, stdin);
        printf("Digite o ano de edicao desse livro: \n");
        scanf("%d", &info_Livros[i].ano_Ed);
        printf("Digite o numero de paginas desse livro: \n");
        scanf("%d", &info_Livros[i].num_Pag);
        printf("Digite o preco desse livro: \n");
        scanf("%f", &info_Livros[i].preco);
        fflush(stdin);
        total_Pag += info_Livros[i].num_Pag;
        printf("\n");
    }

    for (i = 0; i < 5; i++){
        printf("Informacoes do livro %d: \n", i+1);
        printf("Nome: %s", info_Livros[i].titulo);
        printf("Ano: %d \n", info_Livros[i].ano_Ed);
        printf("Numero de paginas: %d\n", info_Livros[i].num_Pag);
        printf("Preco: R$%.2f\n", info_Livros[i].preco);
        printf("\n");
    }
    media_Pag = total_Pag / 5.0;
    printf("A media de paginas desses livros eh = %.2f", media_Pag);
    return 0;
}


