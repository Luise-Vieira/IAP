#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Vtamanho, cont;
    printf("Digite o tamanho do vetor:");
    scanf("%d", &Vtamanho);

    int v[Vtamanho];
    printf("\nDigite os %d valores do vetor:\n", Vtamanho);
    for (cont = 0; cont < Vtamanho; cont++)
    {
        scanf("%d", &v[cont]);
    }

    printf("Ordem natural\n");
    for (cont = 0; cont < Vtamanho; cont++)
    {
        printf("%d\n", v[cont]);
    }
    printf("Ordem inversa\n");
    for (cont = Vtamanho - 1; cont >= 0; cont--)
    {
        printf("%d\n", v[cont]);
    }

    return 0;
}