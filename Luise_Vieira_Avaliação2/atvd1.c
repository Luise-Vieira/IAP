#include<stdio.h>

int main()
{
    char P[4];//recebe letras e numeros
    printf("Digite o numero para checar se e um palindromo: ");
    scanf("%s", P);
    if(P[0]==P[3] && P[1]==P[2])
    {
        printf("O numero %s e um palindromo!",P);
    }
    else
    {
        printf("O numero %s nao e um palindromo!",P);
    }
    return 0;
}
