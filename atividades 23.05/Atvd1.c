#include<stdlib.h>
#include<stdio.h>

int main()
{
    int n;
    printf("Digite o numero n: ");
    scanf("%d",&n);

    if(n%2==0 && n%4==0)
    {
    printf("O numero e divisivel por 2 e 4");
    }
    else{
    printf("O numero nao e divisivel por 2 e 4");
    }

return(0);
}
