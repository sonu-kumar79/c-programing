#include<stdio.h>
int min(int x,int y) //formal parameters containers
{
    if(x<y) return x;
    else return y;
}
int main()
{
    int a,b;
    printf("Enter the number :");
    scanf("%d%d",&a,&b);
    int m=min(a,b);       //actual parameters actual values
    printf("minimum of %d and %d is %d",a,b,m);
    return 0;
}

