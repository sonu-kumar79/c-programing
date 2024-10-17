#include<stdio.h>
int fun(int x)
{
    if( x==1) return 0;
    if(x==2) return 1;
    else return fun(x-1)+fun(x-2);
}
int main()
{
    int a;
    printf("Enter the term : ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        printf("%d ",fun(i));
    }
    printf("\n\n");
}