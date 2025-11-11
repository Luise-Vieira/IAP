#include<stdio.h>
#include<stdlib.h>

int main()
{
    float V[3][5]= {5.7, 3.5,9.6, 7.9, 5.5, 8.0,1.5, 6.6, 5.3, 4.1, 3.1,7.2, 8.5, 7.0
                   };
    float soma[3][5],som=0;
    for(int i=0; i<3; i++)
    {
        printf("\n");
        for(int j=0; j<5; j++)
        {
            printf("%0.2f ",V[i][j]);
        }
    }
    printf("\n");
    printf("==A soma das linhas==\n");


    for(int i=0; i<3; i++)
    {
        for(int j=0; j<5; j++)
        {
            som+=V[i][j];
        }
        printf("%0.2f\n",som);
        som =0;
    }



    return 0;
}

