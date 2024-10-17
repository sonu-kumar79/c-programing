#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int c=0;
    while(n!=0){
            int j=n%10;
            printf("%d",j);
            n/=10;
            c+=j;

    }
     printf("\n sum %d\n",c);
}


