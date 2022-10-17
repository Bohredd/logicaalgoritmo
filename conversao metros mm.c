#include<stdio.h>

int main()
{
    float metros;
    printf("Digite quantos metros voce tem para converter para mm:\n");
    scanf("%f",&metros);
    printf("Seu %.2f metros viraram %.2f milimetros",metros,metros*1000);
    return 0;
}
