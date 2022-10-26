#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int num=5;
    int * ptr_num;
    ptr_num = &num;

    printf("Num = %d e Ptr_num em int = %d\n Endereco Ptr = %p",num,*ptr_num,&ptr_num);
    return 0;
}