#include<stdio.h>
#include<stdlib.h>

int main ()
{
    float n[5],media,soma=0;
    int cont;


    for(cont=0; cont<5; cont++)
    {
        printf("Digite a %d nota:\n ",cont+1);
        scanf("%f",&n[cont]);
        soma+=n[cont];
    }
    printf("a soma e %0.2f\n",soma);
    media=soma/5;
    printf("a media e %0.2f\n",media);
    for(cont=0; cont<5; cont++)
    {
        if(n[cont]>media)
        {
            printf("%d aluno Aprovado\n",cont+1);
        }
        else
        {
            printf("%d aluno reprovado\n",cont+1);
        }
    }
    return 0;
}
