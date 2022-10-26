#include<stdio.h>
#include<stdlib.h>

typedef struct Carro
{
    char marca[30];
    char ano[10];
    char cor[30];
    float preco;
} Carro;

void imprimir(Carro *ptr, int x)
{
    for(int i=0;i<x;i++)
    {
        printf("\n---Carro %d---\n",i+1);
        printf("Marca: %s \n",ptr[i].marca);
        printf("Ano: %s \n",ptr[i].ano);
        printf("Cor: %s \n",ptr[i].cor);
        printf("Preço: %.2f \n",ptr[i].preco);
        printf("\n----=----\n");

    }
}


void ler_carro(Carro *ptr, int x)
{
    for(int i=0;i<x;i++)
    {
        printf("\n---Carro %d---\n",i+1);
        printf("\n---Insira---\n");
        fflush(stdin);
        printf("Digite a marca do carro:\n");
        gets(ptr[i].marca);
        fflush(stdin);
        printf("Digite o ano do carro:\n");
        gets(ptr[i].ano);
        fflush(stdin);
        printf("Digite a cor do carro:\n");
        gets(ptr[i].cor);
        fflush(stdin);
        printf("Digite o preço do carro:\n");
        scanf("%f",&ptr[i].preco);
        fflush(stdin);
        system("cls");
    }
}

int main(void)
{
    int x;
    printf("Quantos carros vc quer inserir?\n");
    scanf("%d",&x);

    struct Carro Carros[x];
    
    ler_carro(Carros,x);
    imprimir(Carros, x);

    return 0;
}