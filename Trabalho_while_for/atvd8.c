#include<stdio.h>
#include<stdlib.h>

int main()
{
    int idade,sexo;
    int fem=0,masc=0;

    printf("Digite a idade(idade<0 para sair) e o sexo(1 Feminino, 2 Masculino)\n");
    while(1)
    {
        printf("\nidade: ");
        scanf("%d",&idade);

        if(idade<0)
        {
            break;
        }
        printf("Sexo(1 Feminino, 2 Masculino)\n");
        scanf("%d",&sexo);

        if(sexo==1 && idade>=10 && idade<=25)
        {
            fem++;
        }
        else if(sexo==2 && idade>30 )
        {
            masc++;
        }
    }
    printf("\nQuantidade de pessoas do sexo feminino com idade entre 10 e 25 anos:\n %d",fem);
    printf("\nQuantidade de pessoas do sexo masculino com idade maior que 30 anos:\n %d",masc);
    return 0;
}
