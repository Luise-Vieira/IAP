#include <stdio.h>
#include <stdlib.h>

int main()
{

    char gab[3], resp[3];
    int naluno, RAaluno;
    printf("Digite as respostas do gabarito (A a E):\n");
    for (int i = 0; i < 3; i++)
    {
        scanf(" %c", &gab[i]);
    }
    printf("Qual o numero de alunos da turma? \n");
    scanf("%d", &naluno);

    for (int cont = 0; cont < naluno; cont++)
    {
        int acertos = 0;
        printf("\nDigite o RA do %d aluno:\n", cont + 1);
        scanf("%d", &RAaluno);
        for (int r = 0; r < 3; r++)
        {
            printf("Digite a %d resposta do aluno:\n", r + 1);
            scanf(" %c", &resp[r]);

            if (resp[r] == gab[r])
            {
                acertos++;
            }
        }
        printf("O numero de acertos do aluno %d e de %d ", RAaluno, acertos);
    }

    return 0;
}
