#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int i=1;
    while(n!=0){
        int rem=n%10;
        n/=10;
        i*=rem;
    }
    printf("%d",i);
}


