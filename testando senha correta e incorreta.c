#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char senha[30],senhacorreta[30] = "testando123";
    int logado=0;
    printf("Digite sua senha:\n");
    scanf("%s",&senha);
    if (strcmp(senhacorreta,senha)==0) {
        printf("Senha correta! Acesso aprovado!\n");
    } else {
        printf("Senha errada! Acesso negado!\n");
    }
    return 0;
}
