#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char senha[20];
    int i=0;
    printf("Digite a senha para acessar sua conta bancaria:\n");
    while (i<3) {
        gets(senha);
        if(strcmp(senha,"admin")==0)
        {
            printf("Parabens! Voce entrou com sucesso!\n");
            printf("Voce teve um total de %d tentativas!\n",i+1);
            break;
        } else if (i==2){
            printf("Voce excedeu o maximo de tentativas! Sua conta foi bloqueada!\n");
            break;
        } else{
            printf("Senha errada! Ja foram um total de %d/3 tentativas!\n Tente novamente!",i+1);
            i++;
        }
    }
    return 0;
}
