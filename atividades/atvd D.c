#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int N,R; //N=numero inteiro, R= quadrado desse numero

    printf("\n Digite um numero: ");
    scanf("%d",&N);
   // R=N*N;
   R = pow(N, 2);
    printf("\n O quadrado no numero e: %d",R);



return(0);
}

