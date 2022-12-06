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

void encontra_maior(int tam,int matriz[tam][tam])
{
    int maior = 0, pos_i = 0, pos_j = 0;
    maior = matriz[0][0];
    for(int i=0;i<tam;i++)
    {
        for(int j=0;j<tam;j++)
        {
            if(matriz[i][j]>maior)
            {
                maior = matriz[i][j];
                pos_i = i;
                pos_j = j;
                printf("Posicao de I = %d Posicao de J = %d\n",pos_i,pos_j);
            }
        }
    }
    printf("O maior numero eh %d e seu indice esta em matriz[%d][%d]\n",maior,pos_i+1,pos_j+1);
}


int main(void)
{
    int matriz[4][4] = {};
    int tam = 4, maior = 0;
    preenche_matriz(tam,matriz);
    printf("Calculando...\n");
    encontra_maior(tam,matriz);
    return 0;
}