#include<stdio.h>

typedef struct Funcionario
{
    int registro;
    float salario;
    char nome[30];
} Funcionario;

void imprimir(Funcionario x)
{
    printf("Nome: %s\n",x.nome);
    printf("Registro: %d\n",x.registro);
    printf("Salario: %f\n",x.salario);
}
void ler(Funcionario *ptr)
{
    printf("Nome:\n");
    gets(ptr->nome);
    printf("Registro:\n");
    scanf("%d",&ptr->registro);
    printf("Salario:\n");
    scanf("%f",&ptr->salario);  
}

int main(void)
{
    struct Funcionario Funcionario;
    ler(&Funcionario);
    imprimir(Funcionario);
}