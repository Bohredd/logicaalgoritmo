#include<stdio.h>
#include<stdlib.h>

int divisao(int n1, int n2)
{
    int result;
    result = n1/n2;
    return result;
}

int main(void)
{
    int n1,n2;
    printf("digite o n1:\n");
    scanf("%d",&n1);
    printf("digite o n2:\n");
    scanf("%d",&n2);
    printf("Divisao entre %d e %d deu %d\n",n1,n2,divisao(n1,n2));
}