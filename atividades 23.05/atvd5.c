#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int esc;

    printf("1-feminino\n");
    printf("2-masculino\n");
    scanf("%d",&esc);

    switch(esc)
    {
        case 1:
        printf("Ilmp Sra %d",esc);
        break;

        case 2:
        printf("Ilmp Sr %d",esc);
        break;

        default:
        printf("Sexo invalido");
        break;

    }


}
