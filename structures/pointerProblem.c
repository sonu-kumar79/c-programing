#include<stdio.h>
typedef int* Pointer;
int main()
{
    int x=5,y=7;
    Pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p\n",b);


    return 0;
}