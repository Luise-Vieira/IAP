#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int A[6],X,M[6],cont;

    for(cont=0; cont<6; cont++)
    {
        printf("Digite o %d valor\n",cont+1);
        scanf("%d",&A[cont]);
    }
    printf("Digite o valor para multiplicar:\n");
    scanf("%d",&X);
    for(cont=0; cont<6; cont++)
    {
        M[cont]=A[cont]*X;
        printf("O resultado de %d multiplicado por %d e: %d\n",A[cont],X,M[cont]);
    }



    return 0;
}
