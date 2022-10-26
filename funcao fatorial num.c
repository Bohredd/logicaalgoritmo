#include<stdio.h>
#include<stdlib.h>

int fatorial(int num)
{
    if (num==1)
    {
        return 1;
    } else 
    {
        return(num*fatorial(num-1));
    }
}

int main(void)
{
    int num,inicio;
    printf("digite um num limite:\n");
    scanf("%d",&num);
    for(inicio=1;inicio<=num;inicio++)
    {
        printf("fatorial de %d eh %d\n",inicio,fatorial(inicio));
    }
}