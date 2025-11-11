#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int x=1, y=5;

    while(x<y)
    {
        x=x+2;
        y=y+1;
        printf("O valor de X %d e o valor de y %d \n",x,y);
    }

    return 0;
}
