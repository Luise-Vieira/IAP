#include<stdlib.h>
#include<stdio.h>
int main()
{
    int Area,Base,Alt;
    printf("\nDigite o valor da Altura");
    scanf("%d",&Alt);
    printf("\nDigite o valor da Base");
    scanf("%d",&Base);
    Area=Base*Alt;
    printf("\nA area do quadrado é:%d",Area);
    return(0);
}
