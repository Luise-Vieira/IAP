#include<stdlib.h>
#include<stdio.h>
int main()
{
     float n1,n2,n3;
     int f;

     printf("Digite as notas do aluno\n");
     scanf("%f%f%f",&n1,&n2,&n3);
     printf("Digite a frequencia do aluno\n");
     scanf("%d",&f);
     if(((n1+n2+n3)/2)>=6 && f>40)
     {
     printf("Aprovado");
     }
     else{
        printf("Reprovado");
     }

     }
