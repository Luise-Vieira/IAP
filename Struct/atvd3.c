#include<stdio.h>
struct cadastro
{
    int matricula,idade,sexo;
    float notaf,nota[3];

};
int main()
{
    struct cadastro c[2];
    for(int i=0; i<2; i++)
    {
        printf("\nInsira as informacoes do %d canditado: ",i+1);
        printf("\nMatricula: ");
        scanf("%d",&c[i].matricula);
        printf("\nidade: ");
        scanf("%d",&c[i].idade);
        printf("\nsexo (1-Feminino 2-Masculino)");
        scanf("%d",&c[i].sexo);
        c[i].notaf=0;
        for(int j=0; j<3; j++)
        {
            printf("\nDigite a %d nota: ",j+1);
            scanf("%f",&c[i].nota[j]);
            c[i].notaf+=c[i].nota[j];
        }
        c[i].notaf=c[i].notaf/3;
        if(c[i].notaf>=60)
        {
            printf("Aprovado com a media %f!",c[i].notaf);
        }
        else
        {
            printf("Reprovado");
        }
    }

    return 0;
}
