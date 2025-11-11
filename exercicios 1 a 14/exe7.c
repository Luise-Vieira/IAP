#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    float  a,b,c,R1,R2, D;
    printf("Digite o valor de a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    D=(b*b)-4*a*c;
    R1=((b*-1)-(sqrt(D)))/(2*a);
    R2=((b*-1)+(sqrt(D)))/(2*a);
    printf("O valor do delta e das duas raizes sao: %f %f", R1, R2);
}
