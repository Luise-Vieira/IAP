#include<stdlib.h>
#include<stdio.h>

int main()
{
    float altura,peso,massa;
    printf("Informe o peso e a altura da pessoa");
    scanf("%f%f",&peso,&altura);

    massa=peso/(altura*altura);

    if(massa<26)
    {
    printf("Normal");
    } else if(massa>=26 && massa<=30)
    {
    printf("obeso");
    }
    else{
    printf("obeso morbido");
    }

return(0);
}
