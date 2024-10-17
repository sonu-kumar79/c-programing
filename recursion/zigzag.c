#include<stdio.h>
void zigzag(int n)
{
    if(n==0) return;
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    zigzag(n-1);
    printf("%d ",n);
    return;
}
int main()
{
    printf("\n\n");
    int x;
    printf("Enter the value : ");
    scanf("%d\n",&x);
    zigzag(x);
    printf("\n\n");
}