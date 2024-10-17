#include<stdio.h>
int fun(int x)
{
    if(x==1) return 1;
    int recans=x+fun(x-1);
    return recans;
}
int main()
{
    int x;
    printf("Enter the value : ");
    scanf("%d",&x);
    printf("%d",fun(x));
    return 0;
}
