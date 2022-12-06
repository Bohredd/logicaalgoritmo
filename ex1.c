#include<stdio.h>

void preenche_matriz(int tam,int matriz[tam][tam])
{
    for(int i=0;i<tam;i++)
    {
        for(int j=0;j<tam;j++)
        {
            printf("Digite o numero:\n");
            scanf("%d",&matriz[i][j]);
        }
    }
}

int conta_valoes(int tam,int matriz[tam][tam])
{
    int quantia = 0;
    for(int i=0;i<tam;i++)
    {
        for(int j=0;j<tam;j++)
        {
            if(matriz[i][j]>10)
            {
                quantia++;
            }
        }
    }
    return quantia;
}


int main(void)
{
    int matriz[4][4] = {};
    int tam = 4, quantia = 0;
    preenche_matriz(tam,matriz);
    printf("Calculando...\n");
    quantia = conta_valoes(tam,matriz);
    printf("Existem %d numeros maiores que 10\n",quantia);
    return 0;
}