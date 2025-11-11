#include<stdio.h>
#include<stdlib.h>

int main()

{
    int idade,cont,classi=0,desc=0;
    float altura,nota;

    for(cont=0; cont<3; cont=cont+1)
    {

        printf("Aluno %d\n",cont+1);
        printf("Digite a nota, a altura e a idade do aluno\n");
        scanf("%f%f%d",&nota,&altura,&idade);
        if(altura>=1.75 && nota>=6 && idade>14 && idade<17)
        {

            classi=classi+1;
        }
        else
        {
            desc=desc+1;
        }
    }
    printf("O numero de classificados e:%d\n",classi);
    printf("O numero de desclassificados %d\n",desc);
    return 0;
}
