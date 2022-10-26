#include<stdio.h>
#include<stdlib.h>

int diferenca(int n1,int n2)
{
    int subt;
    subt = n1-n2;
    return subt;
}

int main(void)
{
    int n1,n2;
    printf("Digite o 1o numero:\n");
    scanf("%d",&n1);
    printf("Digite o 2o numero:\n");
    scanf("%d",&n2);
    printf("diferenca entre %d e %d eh %d",n1,n2,diferenca(n1,n2));
    printf("diferenca entre %d e %d eh %d",n2,n1,diferenca(n2,n1));
}