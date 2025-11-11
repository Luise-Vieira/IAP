#include<stdlib.h>
#include<stdio.h>

int main()
{
 int idade;

    printf("Digite a idade\n");
    scanf("%d",&idade);

    if(idade<15){
    printf("Criança");
    }
    else if(idade>15 && idade<20)
    {
    printf("Adolescente");
    }
    else {
    printf("Adulto");
    }


}
