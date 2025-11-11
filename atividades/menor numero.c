#include<stdlib.h>
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Digite 3 numeros distintos\n ");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b && a<c)
    {
    printf("%d e o menor numero",a);
    }
    else if(b<a && b<c){printf("%d e o menor numero",b);}
    else{printf("%d e o menor numero",c);}
}
