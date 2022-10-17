#include<stdio.h>

int main()
{
    int i,numero,contadorpositivo=0,contadornegativo=0;
    for(i=0;i<5;i++){
        printf("Digite um numero:\n");
        scanf("%d",&numero);
        if(numero<0)
        {
            contadornegativo++;
        } else if (numero>0){
            contadorpositivo++;
        }
    }
    printf("Contamos um total de %d numeros positivos e %d numeros negativos!\n",contadorpositivo,contadornegativo);
    return 0;
}