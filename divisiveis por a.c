#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Digite o valor de a:\n");
    scanf("%d",&a);
    printf("Digite o valor de b:\n");
    scanf("%d",&b);
    printf("Digite o valor de c:\n");
    scanf("%d",&c);
    if((b%a ==0)&&(c%a ==0)){
        printf("B e C sao divisiveis por A!\n");
    } else if (b%a==0){
        printf("B eh divisivel por A!\n");
    } else if (c%a==0){
        printf("C eh divisivel por A!\n");
    } else {
        printf("Nenhum eh divisivel por A!\n");
    }
    return 0;
}
