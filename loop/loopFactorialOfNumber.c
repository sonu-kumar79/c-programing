#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int i=1,fact=1;
    while(i<=n){
        fact*=i;
        i++;
    }
    printf("%d\n",fact);
}



