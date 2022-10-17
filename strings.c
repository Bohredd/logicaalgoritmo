#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char string[40],i=0;
    printf("Digite uma string:\n");
    gets(string);
    while(string[i]){
        i++;
    }
    printf("Sua string tem %d elementos\nSua string em maisculo fica %s\nSua string tem %d caracteres",i,strupr(string),strlen(string) );
    return 0;
}
