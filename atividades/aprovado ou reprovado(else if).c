#include<stdlib.h>
#include<stdio.h>

int main()
{
    float n1,n2,n3,n4,soma;
    printf("Digite as notas do aluno");
    scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
    soma=n1+n2+n3+n4;
    if(soma<30)
    {
    printf("reprovado");
    } else if(soma>=30 && soma<60)
    {
    printf("Exame final");
    }
    else {
    printf("Aprovado");
    }

}
