#include<stdio.h>
int main()
{
    int n;
    printf("enter no. of cols: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=n+1-i;j++){
            printf("%d ",a);
            a+=2;
        }
        printf("\n");
    }
    return 0;
}
