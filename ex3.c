#include<stdio.h>

void encontra_numero(int numero,int tam,int matriz[tam][tam])
{
    int pos_i = 0, pos_j = 0;
    int encontrou = 0, resposta_final = 0;
    for(int i=0;i<tam;i++)
    {
        for(int j=0;j<tam;j++)
        {
            if(matriz[i][j]==numero)
            {
                pos_i = i;
                pos_j = j;
                encontrou = 1;
                resposta_final = 1;
            } else {
                encontrou = 0;
            }
        }
    }
    if(resposta_final == 1)
    {
        printf("Achamos seu numero na linha %d e na coluna %d, ou seja Matriz[%d][%d]\n",pos_i+1,pos_j+1,pos_i+1,pos_j+1);
    } else {
        printf("Não encontramos seu numero na matriz!\n");
    }
}

void preenche_matriz(int tam,int matriz[tam][tam])
{
    int percorre = 1;
    for(int i=0;i<tam;i++)
    {
        for(int j=0;j<tam;j++)
        {
            printf("Digite o numero %d:\n",percorre);
            scanf("%d",&matriz[i][j]);
            percorre++;
        }
    }
}

int main(void)
{
    int tam = 5,numero = 0;
    int matriz[5][5] = {};
    preenche_matriz(tam,matriz);
    printf("Digite o numero que deseja encontrar:\n");
    scanf("%d",&numero);
    encontra_numero(numero,tam,matriz);
    return 0;
}