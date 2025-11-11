#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    int n1,n2,n3,n4,menor;
    printf("Digite quatro numero distintos\n");
    scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
    /*menor=n1;
    if(n2<menor)
    {
    menor=n2;
    printf("O menor numero e %d:\n",menor);
    }
    else if(n3<menor)
    {
    menor=n3;
    printf("O menor numero e %d:\n",menor);
    }
    else
    {
    menor=n4;
    printf("O menor numero e %d:\n",menor);
    }*/ /* entender pq q ta dando errado */

    if(n1<n2 && n1<n3 && n1<n4)
    {
    printf("O menor numero e %d:\n",n1);
    }
    else if(n2<n1 && n2<n3 && n2<n4)
    {
    printf("O menor numero e %d:\n",n2);
    }
    else if(n3<n2 && n3<n1 && n3<n4)
    {
    printf("O menor numero e %d:\n",n3);
    }
    else{
        printf("O menor numero e %d:\n",n4);
    }
}
