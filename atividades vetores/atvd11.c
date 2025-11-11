#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5],B[5],C[10];

    printf("Digite os elementos do vetor A:");
    for(int i=0;i<5;i++){
        printf("\nDigite o %d valor de A: ",i+1);
        scanf("%d",&A[i]);
    }
        printf("Digite os elementos do vetor B:");
    for(int i=0;i<5;i++){
        printf("\nDigite o %d valor de B: ",i+1);
        scanf("%d",&B[i]);
    }
    for(int i=0;i<5;i++){
        C[i*2]=A[i];
        C[i*2+1]=B[i];
    }
    printf("O valor intercalado:\n");
    for(int i=0;i<10;i++){

        printf("C[%d]=%d\n",i,C[i]);
    }
    return 0;
}