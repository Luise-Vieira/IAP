#include<stdlib.h>
#include<stdio.h>
int main()
{
    int horas, Valorhoras;
    float salario;
    Valorhoras=15;
    printf("Digite a quantidade de horas trabalhadas:");
    scanf("%d",&horas);
    salario=Valorhoras*horas;
    printf("\n O salario do funcionario e:%f",salario);


    return(0);
}
