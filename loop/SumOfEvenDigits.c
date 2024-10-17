#include<stdio.h>
int main()
{
    int n,rem;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        rem=n%10;
        if(rem%2==0) sum+=rem;
        n/=10;
    }
    printf("%d\n",sum);
}


