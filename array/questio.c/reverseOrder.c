#include<stdio.h>
int main()
{
    // int a,b;
    // a = (2,3,4);
    // b = 2,3,4;
    // printf("%d,%d",a,b);

    int a,b,c,d;
    d= (a=1,b=2,c=3,a+b+c);
    printf("result = %d\n",d);

    return 0;
}