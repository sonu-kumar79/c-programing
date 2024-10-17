#include<stdio.h>
void greet(int n)
{
    if(n==0) return;
    printf("Good morning\n");
    greet(n-1);
}
int main()
{
    int x;
    scanf("%d",&x);
    greet(x);
}
