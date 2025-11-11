#include<stdio.h>
#include<stdlib.h>

int main()
{
    int A[3][5], B[3][5],C[3][5];

    printf("===Matriz A===\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("Digite o valor da linha %d coluna %d: ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        printf("\n");
        for(int j=0; j<5; j++)
        {
            {
                printf("%d ", A[i][j]);
            }
        }
    }

    printf("\n===Matriz B===\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("Digite o valor da linha %d coluna %d: ",i,j);
            scanf("%d",&B[i][j]);
        }
    }
    for(int i=0; i<3; i++)
    {
        printf("\n");
        for(int j=0; j<5; j++)
        {
            {
                printf("%d ", B[i][j]);
            }
        }
    }
    printf("\n===Soma===\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            C[i][j]=A[i][j]+B[i][j];

        }
    }
    for(int i=0; i<3; i++)
    {
        printf("\n");
        for(int j=0; j<5; j++)
        {
            {
                printf("%d ",C[i][j]);

            }
        }
    }


    return 0;
}
