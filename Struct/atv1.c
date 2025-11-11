#include<stdio.h>
#include<stdlib.h>

struct cadastro
{
    int telefone,codigo;
    int cliente[2];
};
int main(){
    struct cadastro cliente[2];
    for(int i=0;i<2;i++)
    {
        printf("\nDigite as informacoes do %d cliente",i+1);
        printf("\nCodigo: ");
        scanf("%d",&cliente[i].codigo);
        printf("Telefone: ");
        scanf("%d",&cliente[i].telefone);

        printf("Codigo do %d cliente: %d",i+1,cliente[i].codigo);
        printf("\nTelefone do %d cliente %d",i+1,cliente[i].telefone);
    }
return 0;
}
