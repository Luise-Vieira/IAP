#include<stdio.h>

struct onibus
{
    int numonibus,qtdcid,codcid[5],distancia[5],distanciat;
};
int main()
{
    struct onibus o[10];
    for(int i=0; i<10; i++)
    {
        printf("Insira as informacoes do %d onibus:\n",i+1);
        printf("Numero do onibus: ");
        scanf("%d",&o[i].numonibus);
        printf("Quantidade de cidades percorridas: ");
        scanf("%d",&o[i].qtdcid);
        printf("Codigo das cidades percorridas:\n");

        o[i].distanciat=0;
        for(int j=0; j<o[i].qtdcid; j++)
        {
            printf("Codigo da %d cidade: ",j+1);
            scanf("%d",&o[i].codcid[j]);
            printf("Distancia da %d cidade: ",j+1);
            scanf("%d",&o[i].distancia[j]);
            o[i].distanciat+=o[i].distancia[j];
        }

        printf("Distancia total percorrida pelo onibus %d: %d \n",o[i].numonibus,o[i].distanciat);
}

return 0;
}
