#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;
    num=1;

    do{
        printf("%d\n",num);
        num=num+1;
    }while(num<=10);

}
