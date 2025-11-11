#include<stdio.h>
#include<stdlib.h>

int main()
{
    int M[3][3]=
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int soma=0,produto=1,somam=0,media=0;

    for(int i=0; i<3; i++)
    {
        printf("\n");
        for(int j=0; j<3; j++)
        {
            printf("%d ",M[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        printf("\n");
        for(int j=0; j<3; j++)
        {
            if(j==0)
            {
                soma+=M[i][j];
            }
        }
    }
    printf("==Soma da 1 coluna==");
    printf("\n%d",soma);
    for(int i=0; i<3; i++)
    {
        printf("\n");
        for(int j=0; j<3; j++)
        {
            if(i==0)
            {
                produto*=M[i][j];
            }
        }
    }
    printf("==Produto da 1 linha==");
    printf("\n%d",produto);
    for(int i=0; i<3; i++)
    {
        printf("\n");
        for(int j=0; j<3; j++)
        {

            somam+=M[i][j];
        }
    }
    printf("==Soma dos elementos da matriz==");
    printf("\n%d",somam);
    for(int i=0; i<3; i++)
    {
        printf("\n");
        for(int j=0; j<3; j++)
        {

            media=somam/(3*3);
        }
    }
    printf("==Media dos elementos da matriz==");
    printf("\n%d",media);

    return 0;
}
