#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    float n1,n2,nn,p1,p2,pn;
    printf("A quantidade de votos do canditado 1 e \n");
    scanf("%f",&n1);
    printf("A quantidade de votos do canditado 2 e \n");
    scanf("%f",&n2);
    printf("A quantidade de votos nulo e \n");
    scanf("%f",&nn);
    p1=(n1/(n1+n2+nn))*100;
    p2=(n2/(n1+n2+nn))*100;
    pn=(nn/(n1+n2+nn))*100;
    printf("A porcetagem de votos do p1 e %f, a do p2 e %f e a do nulo e %f\n",p1,p2,pn);

}
