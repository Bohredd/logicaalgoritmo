#include<stdio.h>
#include<stdlib.h>

int main()
{
    char nome_aluno[40];
    int notas[3];
    int salario;
    int cpf,rg;
    printf("Digite seu nome:\n");
    scanf("%s",&nome_aluno);
    printf("Digite em ordem:\nSuas notas:\nSeu Salario:\nSeu CPF:\nSeu RG:\n");
    scanf("%d %d %d",&notas[1],&notas[2],&notas[3]);
    scanf("%d",&salario);
    scanf("%d",&cpf);
    scanf("%d",&rg);
    system("cls");
    printf("===REGISTRO ACADEMICO===\n");
    printf("[Nome do Beneficiario] : %s \n[Notas do Aluno] : %d , %d , %d\n[Salario] : RS%d\n[CPF] : %d\n[RG] : %d\n",nome_aluno,notas[1],notas[2],notas[3],salario,cpf,rg);
    return 0;
}
