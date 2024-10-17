#include<stdio.h>
int fun(int x,int y)
{
    if(y==0) return 1;
    else return fun(x,y/2)*fun(x,y/2);
}
int main()
{
    int a,b;
    printf("Enter the bace :");
    scanf("%d",&a);
    printf("Enter the power :");
    scanf("%d",&b);
    printf("ans is=%d\n\n",fun(a,b));
    return 0;
}