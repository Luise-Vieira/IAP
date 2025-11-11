#include<stdio.h>
#include<stdlib.h>
struct aluno
{
    char nome[50];
    char disciplina[50];
    float nota1,nota2;

};

int main()
{
    struct aluno a;

    printf("Digite o nome do aluno:\n");
    scanf("%s",a.nome);
    printf("Digite a disciplina:\n");
    scanf("%s",a.disciplina);
    printf("Digite a primeira nota do aluno:\n");
    scanf("%f",&a.nota1);
    printf("Digite a segunda nota do aluno:\n");
    scanf("%f",&a.nota2);
    system("cls");
    printf("=================DADOS=================   \n ");
    printf("\nAluno:%s ",a.nome);
    printf("\nDisciplina:%s ",a.disciplina);
    printf("\nnota da primeira prova:%0.2f ",a.nota1);
    printf("\nnota da segunda prova:%0.2f ",a.nota2);



}

