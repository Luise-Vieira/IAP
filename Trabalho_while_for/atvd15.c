#include<stdio.h>
#include<stdlib.h>

int main()
{
    float tc,tf = 50;
    while(tf <=70)
    {
        tc=(tf-32)*5/9;
        printf("%f %f\n",tf, tc);
        tf++;
    }
    return 0;
}
