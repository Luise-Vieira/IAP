#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int A,B,H;
    printf("\n Digite o valor da base: ");
    scanf("%i", &B);
    printf("\n Digite o valor da altura: ");
    scanf("%i", &H);
    A=(B*H)/2;
    printf("\n O valor da area e: %i",A);
    return(0);
}
