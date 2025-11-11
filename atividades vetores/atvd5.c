#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int X[8],Y[8],W[4], indicey = 0,indicew=0;

    printf("Digite os elementos do vetor\n");
    for(int cont=0; cont<8; cont++)
    {
        scanf("%d", &X[cont]);
        if(X[cont]>10 && X[cont]<40)
        {
            Y[indicey] = X[cont];
            indicey++;
        }
        if(cont%2==0)
        {
            W[indicew]=X[cont];
            indicew++;
        }

    }
    printf("Vetor Y\n");
    for(int cont=0; cont<indicey; cont++)
    {
        printf("%d\n",Y[cont]);
    }
    printf("Vetor W\n");
    for(int cont=0; cont<4; cont++)
    {
        printf("%d\n",W[cont]);
    }

    return 0;
}
