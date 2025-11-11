#include<stdio.h>
#include<stdlib.h>

int main()
{
    int base,H,cont=0;
    float area;


    while(cont<5)
    {
        printf("Digite o valor da base e da altura para calcular a base\n");
        scanf("%d%d",&base,&H);
        area=(base*H)/2;
        printf("A area do triangulo e %0.2f \n",area);
        cont=cont+1;
    }
    return 0;
}
