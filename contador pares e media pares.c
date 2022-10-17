#include<stdio.h>

int main()
{
    int numero,contador=0;
    float media=0;
    printf("Digite um numero:\n");
    scanf("%d",&numero);
        if (numero%2 == 0){
            media += numero;
            contador++;
        }
    while(numero != 0){
        printf("Digite um numero:\n");
        scanf("%d",&numero);
        if (numero%2 == 0){
            media += numero;
            contador++;
        }
    }
    contador = contador-1;
    media = media/contador;
    printf("A media deu de: %.2f , com um total de %d numeros digitados",media,contador);
    return 0;
}
