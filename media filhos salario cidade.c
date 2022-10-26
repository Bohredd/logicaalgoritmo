#include<stdio.h>
#include<stdlib.h>
int main()
{
    char escolha;
    int numerodefilhos,quantia100salario=0,escolha2,contador=0;
    float salario,mediasalarial,maiorsalario;
    escolha2 = 1;
    printf("Bem vindo ao sistema da prefeitura para contabilizar dados da populacao!\n[1]Inserir dados\n[2]Sair\n");
    scanf("%c",&escolha);
    switch(escolha){
        case '1':
            while (escolha2 != 2){
                system("cls");
                printf("Digite o numero de filhos que sua familia possui:\n");
                scanf("%d",&numerodefilhos);
                printf("Digite o valor do seu salario:\n");
                scanf("%f",&salario);
                mediasalarial += salario;
                if(salario<100){
                    quantia100salario++;
                }
                if(salario>maiorsalario){
                    maiorsalario = salario;
                }
                contador++;
                printf("Deseja inserir mais dados?\n[1] Sim\n[2] Nao");
                scanf("%d",&escolha2);
                if (escolha2==2){
                    break;
                }
            }
        case '2':
            printf("Voce escolheu sair...");
            printf("-------=-------");
            printf("A media de filhos dos habitantes sao de: %d\nO maior salario da cidade eh de: %f\nA media de salario da populacao eh de: %f\nO Percentual de pessoas com ate 100 reais de salario eh de:%f",numerodefilhos/contador,maiorsalario,mediasalarial/contador,(quantia100salario/contador)/100);
            break;
    }
    return 0;
}
