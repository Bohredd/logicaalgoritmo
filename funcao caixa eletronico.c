#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sistema_banco(void)
{
    int escolha, aux;
    int saldo = 1499,transfer;
    system("cls");
    printf("bem vindo ao sistema do banco\n");
    while(escolha!=3){
        printf("escolha uma da opcoes a seguir para continuar:\n[0] Saque\n[1] Transferencia\n[2] Ver Saldo\n[3] Sair\n");
        scanf("%d",&escolha);
        switch(escolha)
        {
            case 0:
                printf("Digite o valor que deseja sacar:\n");
                scanf("%d",&aux);
                if(aux>saldo)
                {
                    printf("vc nao possui esse dinheiro para sacar no momento!\n");
                } else {
                    saldo = saldo - aux;
                    printf("saque efetuado com sucesso!\n");
                }
                break;
            case 1:
                printf("digite a conta do usuario\n");
                printf("digite o valor a ser sacado:\n");
                scanf("%d",&transfer);
                if(transfer>saldo)
                {
                    printf("a transferencia eh maior q seu saldo!\n");
                } else {
                    printf("transferencia efetuada com sucesso!\n");
                    saldo = saldo-transfer;
                } 
                break;
            case 2:
                printf("seu saldo eh de %d",saldo);
                break;
            case 3:
                printf("tchau!\n");
                break;
        }
        system("pause");
        system("cls");
    }
}

int main(void)
{
    char senha[40];
    printf("digite sua senha:\n");
    scanf("%s",&senha);
    if(strcmp(senha,"admin")==0)
    {
            sistema_banco();
    }
    else{
            printf("senha incorreta! tente novamente!\n");
    }
    while(strcmp(senha,"admin")!=0){
        printf("digite sua senha:\n");
        scanf("%s",&senha);
        if(strcmp(senha,"admin")==0)
        {
            sistema_banco();
        }
        else
        {
            printf("senha incorreta! tente novamente!\n");
        }
    }
    return 0;
}