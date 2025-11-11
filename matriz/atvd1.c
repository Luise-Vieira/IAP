#include<stdio.h>
#include<stdlib.h>

int main()
{
    int soma=0,M[5][5]= {{10,20,30,40,50},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20},
    {21,22,23,24,25}};

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {

            if(i==j)
            {
                printf("%d ",M[i][j]);
                soma=soma+M[i][j];
            }
        }

    }
    printf("\nA soma dos elementos da diagonal e: %d",soma);
    return 0;
}
