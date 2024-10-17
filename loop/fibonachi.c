#include<stdio.h>
int main()
{
    int n,fibo = 0,base = 1,result;
    printf("Enter the term of fibonachi numbers :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        printf("%d  ",fibo);
        result = fibo + base;
        fibo = base;
        base = result;
    }
    printf("\n");
    return 0;
}