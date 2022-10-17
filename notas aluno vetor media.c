#include<stdio.h>
#include<stdlib.h>

int main()
{
    float notas[3] = {1,2,3};
    int i=0,aux;
    float n;
    for(i=0;i<3;i++){
        printf("Digite a %d nota do aluno:\n",notas[i]);
        scanf("%f",&n);
        aux += n;
        notas[i] = n;

    }
    system("cls");
    printf("As notas do aluno foram %.1f , %.1f e %.1f\nConquanto sua media foi: %.2f",notas[0],notas[1],notas[2],(notas[0]+notas[1]+notas[2])/3);
    return 0;
}
