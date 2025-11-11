#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cont=0,menor=0,id;

    while(cont<3)
    {

        printf("Entre com a idade: \n");
        scanf("%d",&id);
        if(id<18)
        {
            menor=menor+1;
        }
        cont=cont+1;

    }
    printf("Tem %d pessoa(s) menor(res) que 18 anos \n",menor);
    return 0;
}
