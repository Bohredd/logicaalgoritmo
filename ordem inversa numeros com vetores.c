#include<stdio.h>
#include<stdlib.h>

int main()
{
    int numeros[5];
    int n,i;
    for(i=0;i<5;i++)
    {
        printf("Digite o %do numero:\n",i+1);
        scanf("%d",&n);
        numeros[i] = n;
    }
    i = 4;
    while(i>=0){
        printf("%d",numeros[i]);
        i--;
    }
    return 0;
}
