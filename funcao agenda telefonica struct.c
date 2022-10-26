#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct Pessoa
{
    char nome[30];
    char telefone[10];
    char email[40];

} Pessoa;

void imprimir_contato(Pessoa *ptr,int resposta,int count)
{
    switch(resposta){
        case 1:
            for(int i=0;i<count;i++)
            {
                printf("Nome do %d adicionado na lista: %s\n",i+1,ptr[i].nome);
            }
            break;
        case 2:
            for(int i=0;i<count;i++)
            {
                printf("Telefone do %d adicionado na lista: %s\n",i+1,ptr[i].telefone);
            }
            break;
        case 3:
            for(int i=0;i<count;i++)
            {
                printf("Email do %d adicionado na lista: %s\n",i+1,ptr[i].email);
            }
            break;
    }
}

void ler_contato(Pessoa *ptr, int count)
{
    for(int i=0;i<count;i++)
    {
        printf("\n\t--- Insira a %d Pessoa ---\n",i+1);
        fflush(stdin);
        printf("Insira o nome:\n");
        gets(ptr[i].nome);
        fflush(stdin);
        printf("Insira o telefone:\n");
        fflush(stdin);
        gets(ptr[i].telefone);
        fflush(stdin);
        printf("Insira o email:\n");
        gets(ptr[i].email);
        system("cls");
    }
}

int main(void)
{
    int count=1;
    int resposta;
    printf("Quantas pessoas você deseja inserir na agenda telefonica?\n");
    scanf("%d",&count);
    struct Pessoa Pessoa[count];
    ler_contato(Pessoa, count);
    printf("\tDados inseridos com sucesso!\n");
    printf("Qual campo de dado você deseja visualizar?\n[1]Nome\n[2]Telefone\n[3]Email\n");
    scanf("%d",&resposta);
    imprimir_contato(Pessoa, resposta,count);
}