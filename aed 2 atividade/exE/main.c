/*e) Construa um programa que utilize um vetor de clientes, cujo tamanho � definido pelo usu�rio no in�cio da execu��o do programa,
 e ofere�a as seguintes op��es ao usu�rio: (i) inserir cliente no vetor; (ii) remover cliente dovetor (usaraposi��o do vetor);
 (iii) mostrar os CPFs dos clientes j� inseridos. Para cada cliente devem ser armazenadososeuCPF,seu estado civil e uma rela��o
 com os nomes dos filhos do mesmo, se houver (utilize um struct). A lista pode conter uma quantidade
 qualquer de clientes (informado pelo usu�rio).
 Cada cliente pode possuir uma quantidade arbitr�ria de filhos (informado pelo usu�rio).*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome_Cliente[50];
    char cpf_Cliente[12];
    char estadocivil_Cliente[10];
    int quant_Filhos;
    char **filhos;
}Clientes;

Clientes inserir_Cliente();

void remover_Cliente(Clientes *cliente, int *num_Clientes);

void mostrar_Cpf(Clientes *cliente, int qtd_Clientes);

void menu(){
    printf("Escolha uma opcao:\n");
    printf("0 - Sair.\n");
    printf("1 - Inserir cliente.\n");
    printf("2 - Remover cliente.\n");
    printf("3 - Mostrar CPFs dos clientes cadastrados.\n");
}

int main()
{
    Clientes *c;
    int quant_Clientes, escolha, i;

    printf("Digite a quantidade inicial de clientes: ");
    scanf("%d", &quant_Clientes);
    c = (Clientes *) malloc(quant_Clientes*sizeof(Clientes));
    for (i = 0; i < quant_Clientes; i++)
    {
        printf("\nDados do cliente %d:\n", i+1);
        c[i]=inserir_Cliente();
    }
    
    while(1){
        menu();
        scanf("%d", &escolha);

        // inserir novo cliente
        if (escolha == 1) {
            quant_Clientes++;
            c = (Clientes *) realloc(c,quant_Clientes*sizeof(Clientes));
            printf("Dados do cliente:\n");
            c[quant_Clientes-1]=inserir_Cliente();
        }
        // remover cliente
        else if(escolha == 2){
            remover_Cliente(c, &quant_Clientes);
            c = (Clientes *) realloc(c, quant_Clientes*sizeof(Clientes));
        }
        // mostrar cpfs 
        else if(escolha == 3){
            mostrar_Cpf(c, quant_Clientes);
        }
        // sair
        else{
            break;
        }
    }

    free(c);
    return 0;
}

Clientes inserir_Cliente(){
    Clientes c_Insere;
    int i;
    fflush(stdin);
    printf("Digite o nome: \n");
    fgets(c_Insere.nome_Cliente, 50, stdin);
    fflush(stdin);
    printf("Digite o CPF:\n");
    fgets(c_Insere.cpf_Cliente, 12, stdin);
    fflush(stdin);
    printf("Digite o estado civil:\n");
    fgets(c_Insere.estadocivil_Cliente, 50, stdin);
    fflush(stdin);
    printf("Digite a quantidade de filhos:\n");
    scanf("%d", &c_Insere.quant_Filhos);
    fflush(stdin);
    if (c_Insere.quant_Filhos > 0)
    {
        c_Insere.filhos=(char **)malloc(c_Insere.quant_Filhos*sizeof(char *));
        for (i = 0; i < c_Insere.quant_Filhos; i++)
        {
            c_Insere.filhos[i]=(char *)malloc(30*sizeof(char));
            printf("Insira o nome do filho %d:", i+1);
            fflush(stdin);
            fgets(c_Insere.filhos[i], 30, stdin);
        }
    }
    return c_Insere;
}

void remover_Cliente(Clientes *cliente, int *num_Clientes){
    int del_Cliente, i;

    if ((*num_Clientes) == 0)
    {
        printf("Nao ha clientes cadastrados!\n");
    }
    else{
        printf("Digite a linha onde deseja remover um cliente: ");
        scanf("%d", &del_Cliente);
        if (del_Cliente < 0 || del_Cliente > (*num_Clientes))
        {
            printf("Nao foi possivel localizar essa linha!\n");
        }
        else{
            del_Cliente--;
            for (i = del_Cliente; i < (*num_Clientes); i++){
                cliente[i] = cliente[i+1];
            }
            (*num_Clientes)--;
            printf("Cliente removido com sucesso!\n");
        }
    }
}

void mostrar_Cpf(Clientes *cliente, int qtd_Clientes){
    int i;
    if (qtd_Clientes == 0)
    {
        printf("Nao ha clientes cadastrados!\n");
    }
    else{
        for (i = 0; i < qtd_Clientes; i++)
        {
            printf("CPF do cliente %d: \n", i+1);
            printf("%s\n", cliente[i].cpf_Cliente);
        }
    }
}