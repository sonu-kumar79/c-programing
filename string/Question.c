#include<stdio.h>
int main()
{
    int n;
    printf("Enter thr value : ");
    scanf("%d",&n);
    int rem,dec=0,base=1;
    while (n!=0)
    {
        rem = n%2;
        dec = dec+rem*base;
        n /= 2;
        base = base*10;
    }
    printf("Binary number is %d\n",dec);
    return 0;
    
}