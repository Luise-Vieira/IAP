#include<stdio.h>
#include<stdlib.h>

int main()
{
    float salario;
    int cont=0,esc;
    while(cont<3)
    {
        printf("Digite o cargo:\n\n");
        printf("1.Motorista\n");
        printf("2.Chefe\n");
        printf("3.Diretor\n");
        scanf("%d",&esc);

        switch(esc)
        {

        case 1:
            salario=1250;
            printf("\nO salario bruto e %0.2f",salario);
            salario=salario-(salario*0.07);
            salario=salario+(salario*0.10);
            printf("\nO salario apos o desconto e %0.2f\n",salario);
            break;
        case 2:
            salario=2300;
            printf("\nO salario bruto e %0.2f",salario);
            salario=salario-(salario*0.07);
            printf("\nO salario apos o desconto e %0.2f\n",salario);
            break;
        case 3:
            salario=2000;
            printf("\nO salario bruto e %0.2f",salario);
            salario=salario-(salario*0.07);
            printf("\nO salario apos o desconto e %0.2f\n",salario);
            break;
        }
        cont++;
    }
    return 0;
}
