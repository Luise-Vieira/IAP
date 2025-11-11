#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    float preco,venda,porc;
    printf("\nQual o preco do produto");
    scanf("%f",&preco);
    printf("\nQual a porcentagem");
    scanf("%f",&porc);
    venda=((porc/100)*preco)+preco;
    printf("O valor da venda e %f \n",venda);



}
