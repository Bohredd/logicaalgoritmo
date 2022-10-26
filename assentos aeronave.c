#include<stdio.h>
#include<stdlib.h>

int main()
{
    int assentos_nave[30];
    int numeroassento;
    printf("Seja bem vindo a Diogo Airlines!\n ---===---\n");
    printf("Siga nossas instrucoes abaixo para reservar sua passagem/assento!\n");
    printf("---===---\nDigite o numero do assento que deseja reservar:\n0~15 lado esquerdo do aviao\n16~30 lado direito do aviao!\n");
    scanf("%d",&numeroassento);
    if( numeroassento == 11 || numeroassento == 12 || numeroassento == 17 || numeroassento == 22 || numeroassento == 27 || numeroassento == 30 || numeroassento == 7 || numeroassento == 2 )
    {
        printf("Assento ocupado!\n");
    } else {
        printf("Parabens! Voce reservou seu lugar no assento %d do aviao!\n",numeroassento);
    }
    return 0;
}
