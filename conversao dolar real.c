#include<stdio.h>

int main()
{
    float reais,dolares;
    printf("Digite quantos reais voce tem e quanto esta o dolar agora:\n");
    scanf("%f %f",&reais, &dolares);
    printf("Com o dolar a %f, seus %f reais equivalem a %.2f dolares!",dolares,reais,reais/dolares);
    return 0;
}
