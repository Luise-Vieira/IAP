#include<stdio.h>
#include<stdlib.h>

int main()
{
    int M[8][8],somap=0,somas=0;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(i+j==8)
            {
                M[i][j]=((i*i)+(j*j))+2;
            }
            else if(i+j>8)
            {
                M[i][j]=j+4;
            }
            else if(i+j<8)
            {
                M[i][j]=(3*i)+j;
            }
        }
    }
    for(int i=0; i<8; i++)
    {
        printf("\n");
        for(int j=0; j<8; j++)
        {
            {
                printf("%d ", M[i][j]);
            }
        }
    }


    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(i==j)
            {
                somap=somap+M[i][j];
            }
            if(i+j==8-1)
            {
                somas=somas+M[i][j];
            }
        }

    }
    printf("\n==Soma da principal==");
    printf("\n%d",somap);
    printf("\n==Soma da secundaria==");
    printf("\n%d",somas);
    printf("\n==Multiplicacao das duas==");
    printf("\n%d",somas*somap);
    return 0;
}
