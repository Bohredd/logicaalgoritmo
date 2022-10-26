#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Digite dois numeros separados por um espaco:\n");
    scanf("%d %d",&n1, &n2);
    printf("Soma de %d+%d=%d\n",n1,n2,n1+n2);
    printf("Subtracao de %d-%d=%d\n",n1,n2,n1-n2);
    printf("Multiplicacao de %dX%d=%d\n",n1,n2,n1*n2);
    printf("Divisao de %d/%d=%d",n1,n2,n1/n2);
    return 0;
}
