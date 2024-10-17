#include<stdio.h>
#include<math.h>
int main()
{
    int n,dec=0,rem,count=0,base;
    printf("Enter the num :");
    scanf("%d",&n);
    while(n != 0)
    {
        rem=n%10;
        n/=10;
        if(rem==1){
            // base = 
            dec += pow(2,count);;
        }
        count++;
    }
    printf("%d",dec);
}