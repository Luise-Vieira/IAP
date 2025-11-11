#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float x1,x2,d;

    printf("Digite o valor de a,b e c");
    scanf("%d%d%d",&a,&b,&c);
    d=(b*b)-4*a*c;
    x1=((b*-1)+ sqrt(d))/2*a;
    x2=((b*-1)-sqrt(d))/2*a;

    if(d<0 && a>0){
        printf("Nao tem raiz real \n",x1,x2);
            }
    else if(d>0 && a>0)
    {
        printf(" Delta possui duas raizes, sendo %.2f e %.2f\n",x1,x2);
    }
    else if(d==0 && a<0)
    {
        printf("Delta possui uma raiz\n %.2f",x1,x2);
    }
    else{
        printf("Nao e uma equação do segundo grau \n");}
}
