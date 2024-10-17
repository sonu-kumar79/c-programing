#include<stdio.h>
int stair(int x)
{
    if(x<=2) return x;
    if(x==3) return x+1;
    int ways=stair(x-1)+stair(x-2)+stair(x-3);
    return ways;
}
int main()
{
    int a;
    printf("Enter the value : ");
    scanf("%d",&a);
    printf("%d ",stair(a));
    printf("\n\n");
}