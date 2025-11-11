#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Digite o numero de elementos do vetor X e Y: ");
    scanf("%d", &num);

    int x[num], y[num], prod_escalar = 0;

    printf("Digite os %d elementos do vetor x:\n ", num);
    for (int i = 0; i < num; i++)
    {
        printf("posicao %d: ", i + 1);
        scanf("%d", &x[i]);
    }
    printf("Digite os %d elementos do vetor y: \n", num);
    for (int i = 0; i < num; i++)
    {
        printf("posicao %d: ", i + 1);
        scanf("%d", &y[i]);
        prod_escalar = prod_escalar + x[i] * y[i];
    }
    printf("O produto escalar dos vetores e %d: ", prod_escalar);

    return 0;
}