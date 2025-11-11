#include<stdio.h>
#include<stdlib.h>

int main()
{
    int soma=0,M[6][6]={1,20,30,40,32,50,
    1,1,8,9,12,10,
    1,1,1,14,15,15,
    1,1,1,1,18,20,
    1,1,1,1,1,20,
    1,1,1,1,1,1};

    for(int i=0; i<6; i++)
    {
        printf("\n");
        for(int j=0; j<6; j++)
        {

            if(i>=j)
            {
                printf("%d ",M[i][j]);
                soma=soma+M[i][j];
            }
        }

    }
    printf("\nA soma dos elementos da diagonal e abaixo dela e: %d",soma);
    return 0;
}
