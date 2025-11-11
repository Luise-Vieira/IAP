#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, lados[6] = {0};

    printf("Digite o numero de rolamentos: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        int dado = rand() % 6;
        lados[dado]++;
    }
    for (int n = 0; n < 6; n++)
    {
        printf("O resultado do dado %d e: %d\n ", n+1, lados[n]);
    }
    return 0;
}