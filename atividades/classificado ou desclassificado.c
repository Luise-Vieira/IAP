#include<stdlib.h>
#include<stdio.h>

int main()
{
    int idade;
    float altura,nota;
    printf("Digite a idade,altura e nota do aluno");
    scanf("%d%f%f",&idade,&altura,&nota);
    if(idade>=18 && idade<=21 && nota>=6 && altura>1.80)
    {
    printf("Classificado");
    }
    else{
    printf("desclassificado");
    }

}
