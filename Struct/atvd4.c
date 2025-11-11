#include<stdio.h>
struct funcionario
    char nome[50];
{
    float salario;
    int ht1,ht2,ht3,soma;
};

int main()
{
    struct funcionario f[3];
    for(int i=0; i<3; i++)
    {
        printf("Insira os dados do %d funcionario:\n",i+1);
        printf("Nome: ");
        scanf("%s",f[i].nome);
        printf("Salario: ");
        scanf("%f",&f[i].salario);
        f[i].soma=0;
        printf("Insira a hora trabalhada 1: ");
        scanf("%d",&f[i].ht1);
        f[i].soma+=f[i].ht1;
        printf("Insira a hora trabalhada 2: ");
        scanf("%d",&f[i].ht2);
        f[i].soma+=f[i].ht2;
        printf("Insira a hora trabalhada 3: ");
        scanf("%d",&f[i].ht3);
        f[i].soma+=f[i].ht3;
        if(f[i].salario>=1000 && f[i].salario<=2000)
        {
            printf("Horas trabalhadas: %d\n",f[i].soma);
        }
    }
}
