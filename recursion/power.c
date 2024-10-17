#include<stdio.h>
int fun(int x,int y)
{
    if(y==0) return 1;
    else return(x*fun(x,y-1));
}
int main()
{
    int a;
    printf("Enter the base : ");
    scanf("%d",&a);
    int b;
    printf("Enter the power : ");
    scanf("%d",&b);
    printf("%d ",fun(a,b));
    printf("\n\n");
}