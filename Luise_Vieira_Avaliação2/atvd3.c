#include<stdio.h>

int main()
{
    int M[3][3];
    int somai0=0,somai1=0,somai2=0,somaj0=0,somaj1=0,somaj2=0,somadp=0,somads=0;
    printf("Insira os valores da matriz:\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Linha %d, coluna %d: ",i,j);
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
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(i==0)
            {
                somai0+=M[i][j];
            }
            if(i==1)
            {
                somai1+=M[i][j];
            }
            if(i==2)
            {
                somai2+=M[i][j];
            }
            if(j==0)
            {
                somaj0+=M[i][0];
            }
            if(j==1)
            {
                somaj1+=M[i][j];
            }
            if(j==2)
            {
                somaj2+=M[i][j];
            }
            if(i==j)
            {
                somadp+=M[i][j];
            }
            if(i+j==3-1)
            {
                somads+=M[i][j];
            }
        }
    }
    printf("\n");
    printf("\nsoma linha 0 :%d\n",somai0);
    printf("soma linha 1 :%d\n",somai1);
    printf("soma linha 2 :%d\n",somai2);
    printf("soma coluna 0 :%d\n",somaj0);
    printf("soma coluna 1 :%d\n",somaj1);
    printf("soma coluna 2 :%d\n",somaj2);
    printf("soma diagonal principal :%d\n",somadp);
    printf("soma diagonal secundaria :%d\n",somads);

    if(somai0==somai1 && somai1==somai2 && somai2==somaj0 && somaj0==somaj1 && somaj1==somaj2 && somaj2==somadp && somadp==somads && somads==somai0)
    {
        printf("Dado magico: %d ",somai0);
    }
    else
    {
        printf("Dado nao magico: -10");
    }


    return 0;
}
