#include<stdio.h>
#include<stdlib.h>

float area(float raio)
{
    float result;
    result = (3.14)*(raio*raio);
    return result;
}

int main(void)
{
    float raio;
    printf("digite o val do raio:\n");
    scanf("%f",&raio);
    printf("sua area do circulo com raio %.0f eh %.2f\n",raio,area(raio));
    return 0;
}