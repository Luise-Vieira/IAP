#include <stdio.h>

struct concurso
{
    float peso, altura;
    int sexo;
    int a[2];
};
int main()
{
    struct concurso a[2];
    for (int i = 0; i < 2; i++)
    {
        printf("\nInformacoes do %d canditado: ", i + 1);
        printf("\nInforme o sexo (Digite 1 para feminino e 2 para masculino): ");
        scanf("%d", &a[i].sexo);
        printf("\nInforme a altura: ");
        scanf("%f", &a[i].altura);
        printf("\nInforme o peso: ");
        scanf("%f", &a[i].peso);

        system("cls");

        printf("informacoes do canditado %d: sexo:%d altura:%f peso:%f", i + 1, a[i].sexo, a[i].altura, a[i].peso);

        if (a[i].altura > 1, 65 && a[i].altura < 1, 75 && a[i].peso > 60 && a[i].peso < 80)
        {
            printf("\nCanditado aprovado!");
        }
        else
        {
            printf("\nCanditado reprovado");
        }
    }

    return 0;
}
