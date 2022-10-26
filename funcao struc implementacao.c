#include<stdio.h>
int main(void)
{
    struct  Aluno
    {
        char nome[30];
        float matematica, fisica, media;
    };

    struct Aluno aluno[5];
    
    int count=0;

    for(count;count<5;count++)
    {
        fflush(stdin);
        printf("\nNome do %d Aluno:\n",count+1);
        gets(aluno[count].nome);

        printf("\nNota de Matematica:\n");
        scanf("%f",&aluno[count].matematica);

        printf("\nNota de Fisica:\n");
        scanf("%f",&aluno[count].fisica);

        aluno[count].media = (aluno[count].matematica+aluno[count
        ].fisica)/2;

    }

    printf("\nExibindo nomes e medias:\n");

    for(count=0;count<5;count++)
    {
        printf("\nAluno %d\n",count+1);
        printf("Nome: %s\n",aluno[count].nome);
        printf("Media: %.2f\n",aluno[count].media);
    }

    printf("\nEncerrando...\n");
    return 0;
}