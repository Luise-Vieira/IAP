#include<stdlib.h>
#include<stdio.h>
int main()
{
    int Base,Alt;
    float Area;
    printf("\nDigite o valor da Altura");
    scanf("%d",&Alt);
    printf("\nDigite o valor da Base");
    scanf("%d",&Base);
    Area=(Base*Alt)/2;
    printf("\nA area do triangulo é:%f",Area);
    return(0);
}
