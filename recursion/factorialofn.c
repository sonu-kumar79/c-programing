#include<stdio.h>
int fun(int x)
{
    if(x==1) return 1;
    else return(x*fun(x-1));
}
int main()
{
    int a;
    scanf("%d",&a);
    printf("%d ",fun(a));
    printf("\n\n");
}