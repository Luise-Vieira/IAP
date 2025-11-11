#include<stdio.h>

int main()
{
    int M[3][3];

    printf("Insira os valores da matriz 3x3:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("linha %d, coluna %d: ",i,j);
            scanf("%d",&M[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        printf("\n");
        for(int j=0; j<3; j++)
        {
            printf("%d ",M[i][j]);
        }
    }
    printf("\nDiagonal principal invertida");
    for(int i=2; i>=0; i--)
    {
        for(int j=2; j>=0; j--)
        {
            if(i==j)
            {
                printf("\n%d ",M[i][j]);
            }

        }
    }
    return 0;
}
