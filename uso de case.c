#include<stdio.h>

int main()
{
    char escolha;
    printf("Qual time você torce?\n[1]Internacional\n[2]Gremio\n[3]Vasco da Gama\n[4]Atletico Mineiro\n");
    scanf("%c",&escolha);
    switch(escolha){
    case '1':
        printf("Parabens, o inter e o maior do mundo!");
        break;
    case '2':
        printf("Bah, que timeco ein!");
        break;
    case '3':
        printf("Vascao eh top!");
        break;
    case '4':
        printf("Galoucura!!");
        break;
    default:
        printf("Voce nao escolheu nenhuma opcao correta!");
        break;
    }
}
