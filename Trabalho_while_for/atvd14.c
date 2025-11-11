#include<stdio.h>
#include<stdlib.h>

int main()

{
    float possui, sexo, mulheres=0, geral=0,aluno=0;



    while(aluno<5)
    {
        printf("Digite 1(tem computador) 2(Nao tem computador) e o sexo(1 Feminino, 2 Masculino)\n\n");
        scanf("%f", &sexo);
        scanf("%f", &possui);

        if(possui==1)
        {
            geral++;
        }
        if(possui==1 && sexo==1)
        {
            mulheres++;
        }

        aluno++;
    }
    printf("Quantidade de mulheres que tem computador\n%f\n", mulheres);
    printf("Porcentagem de alunos que tem conputador\n%f\n", (geral/5)*100);
    return 0;
}
