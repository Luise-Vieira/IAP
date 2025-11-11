#include<stdio.h>
#include<stdlib.h>

int main()
{

    int M[3][3];

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Elemento da linha %d coluna %d: ",i,j);
            scanf("%d", &M[i][j]);
        }

    }
    for(int i=0; i<3; i++)
    {
        printf("\n");
        for(int j=0; j<3; j++)
        {
            printf("%d ",M[i][j]*2);
        }
    }
    printf("\n\n");

    return 0;
}
