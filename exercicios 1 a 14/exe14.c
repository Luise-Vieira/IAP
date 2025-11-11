#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    float d,t,v,l;
    printf("\ninforme a velocidade");
    scanf("%f",&v);
    printf("\ninforme o tempo");
    scanf("%f",&t);
    d=v*t;
    l=d/12;
    printf("\n O usuario ira gastar %f litros",l);


}
