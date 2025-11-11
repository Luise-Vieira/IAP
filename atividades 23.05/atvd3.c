#include<stdlib.h>
#include<stdio.h>

int main()
{
    int cal;
    printf("Escolha um prato\n");
    printf("prato 1\n");
    printf("prato 2\n");
    printf("prato 3\n");
    printf("prato 4\n");
    scanf("%d",&cal);

    switch(cal)
    {
        case 1:
        printf("Prato 1:180 cal");
        break;

        case 2:
        printf("Prato 2:230 cal");
        break;
        case 3:

        printf("Prato 3:250 cal");
        break;

        case 4:
        printf("Prato 4:350 cal");
        break;
    }
return(0);
}
