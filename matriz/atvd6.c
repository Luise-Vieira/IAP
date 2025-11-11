#include<stdio.h>
#include<stdlib.h>

int main()
{
    int soma=0,M[8][8]=
    {
        {2,1,1,1,1,1,1,1},
        {2,2,1,1,1,1,1,1},
        {2,2,2,1,1,1,1,1},
        {2,2,2,2,1,1,1,1},
        {2,2,2,2,2,1,1,1},
        {2,2,2,2,2,2,1,1},
        {2,2,2,2,2,2,2,1},
        {2,2,2,2,2,2,2,2}
    };

    for(int i=0; i<8; i++)
    {
        printf("\n");
        for(int j=0; j<8; j++)
        {
            if(i<j)
            {
                printf("%d ",M[i][j]);
                soma=soma+M[i][j];
            }
        }

    }
    printf("\nA soma dos elementos acima dadiagonal e: %d",soma);
    return 0;
}
