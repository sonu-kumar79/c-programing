#include<stdio.h>
int fun(int x)
{
    if(x==1) return 1;
    return x+fun(x-1);
}
int main()
{
    printf("\n\n");
    int x;
    printf("Enter the value : ");
    scanf("%d",&x);
    printf("%d",fun(x));
    printf("\n\n");
    return 0;
}

