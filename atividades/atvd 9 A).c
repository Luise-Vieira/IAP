#include<stdio.h>
#include<stdlib.h>

int main()
{
    float C,F;

    printf("Qual a temperatura em C°:\n");
    scanf("%f",&C);
    F=(9*C+160)/5;
    printf("O valor da temperatura convertida para F°:%f\n",F);
    }
