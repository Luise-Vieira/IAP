#include<stdio.h>
struct pessoa
{
    char nome[50];
    int sexo,resposta[5];
};
int main()
{
    struct pessoa p[2];
    int itemA=0,itemB=0,itemC=0;
    for(int i=0; i<2; i++)
    {
        printf("Digite as informacoes da %d pessoa\n\n",i+1);
        printf("Nome:");
        scanf("%s",p[i].nome);
        printf("Sexo( 1-Feminino 2-Masculino):");
        scanf("%d",&p[i].sexo);

        printf("Pesquisa\n");
        printf("Responda com 1-Sim 2-Nao\n");
        printf("Gosta de ouvir musica?");
        scanf("%d",&p[i].resposta[0]);
        printf("Pratica algum esporte?");
        scanf("%d",&p[i].resposta[1]);
        printf("Ainda e estudante?");
        scanf("%d",&p[i].resposta[2]);
        printf("Gosta de futebol?");
        scanf("%d",&p[i].resposta[3]);
        printf("Gosta de dancar?");
        scanf("%d",&p[i].resposta[4]);

        if(p[i].resposta[0]==1 && p[i].resposta[2]==1)
        {
            itemA+=1;

        }
        if(p[i].resposta[0]==1)
        {
            itemB+=1;
        }
        if(p[i].resposta[4]==1 && p[i].resposta[1]==1)
        {
            itemC+=1;
        }

    }
    printf("a)%d\n",itemA);
    printf("a)%d\n",itemB);
    printf("a)%d\n",itemC);

}
