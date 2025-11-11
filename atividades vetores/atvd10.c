#include <stdio.h>
#include <stdlib.h>

int main()
{

    float A[5], x, B[5];
    printf("Digite 5 valores inteiros\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d valor:\n", i + 1);
        scanf("%f", &A[i]);
    }
    printf("Digite o valor de X: ");
    scanf("%f", &x);
    int encontrado=0;
    for (int i = 0; i < 5; i++)
    {
        if (x == A[i])
        {
            printf("O elemento  %f esta na posicao %d", x, i);
            encontrado = 1;
        }
    }
    if (!encontrado)
    {
        printf("O valor de X nao se encontra em A");
    }

    for (int i = 0; i < 5; i++)
    {
        B[i] = A[i] / x;
        printf("\nO resultado da divisao do elemento %f por %f e : %0.2f ", A[i], x, B[i]);
    }

    return 0;
}