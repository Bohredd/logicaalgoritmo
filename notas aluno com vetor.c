#include<stdio.h>
#include<stdlib.h>

int main()
{
    int notas[3] = {1,2,3};
    int n,i=0;
    for(i=0;i<3;i++){
        printf("Digite a %d nota do aluno:\n",notas[i]);
        scanf("%d",&n);
        notas[i] = n;
    }
    system("cls");
    for(i=1;i<4;i++){
        printf("A nota %d do aluno foi: %d\n",i,notas[i]);
    }
    return 0;
}
