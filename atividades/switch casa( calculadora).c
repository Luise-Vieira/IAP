#include<stdlib.h>
#include<stdio.h>

int main()
{
    int esc;
    float num1,num2;

    printf("Digite dois valores\n");
    scanf("%f%f",&num1,&num2);

    printf("O que você deseja?\n");
    printf("Digite 1 para multiplicação\n");
    printf("Digite 2 para divisão\n");
    printf("Digite 3 para somar\n");
    printf("Digite 4 para subtrair\n");
    scanf("%d",&esc);
    switch(esc)/*a variavel do switch ou é int ou char*/
    {
        case 1:
        printf("A multiplicacao %3.2f",num1*num2);
        break;

        case 2:
        printf("A divisao %3.2f",num1/num2);
        break;
        case 3:

        printf("A soma %3.2f",num1+num2);
        break;

        case 4:
        printf("A subtracao %3.2f",num1-num2);
        break;

        default:
        printf("Opcao invalida");
    }

return(0);
}
