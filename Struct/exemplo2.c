#include<stdio.h>
#include<stdlib.h>
struct aluno
{
    char nome[50];
    int a[3];
    float nota_fisica,nota_math,media;
};
int main()
{
    struct aluno a[3];
    for(int i=0; i<3; i++)
    {
        printf("Digite o nome do %d aluno\n",i+1);
        scanf("%s",a[i].nome);
        printf("Digite a nota de fisica do %d aluno:\n",i+1);
        scanf("%f",&a[i].nota_fisica);
        printf("Digite a nota de matematica do %d aluno:\n",i+1);
        scanf("%f",&a[i].nota_math);
        a[i].media=(a[i].nota_fisica+a[i].nota_math)/2;

        printf("aluno:%s\n",a[i].nome);
        printf("Nota de fisica e matematica,respectivamente:%0.2f %0.2f\n",a[i].nota_fisica,a[i].nota_math);
        printf("A media do aluno:%0.2f\n",a[i].media);
        printf("================================================================\n");
    }
    return 0;
}
