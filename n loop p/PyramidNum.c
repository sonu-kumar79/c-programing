#include<stdio.h>
int main()
{
    int n;
    printf("enter the value: ");
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;

     for(int i=1;i<=n;i++){
            int a=1;
        for(int j=1;j<=nsp;j++){
            printf("  ");
        }
        for(int j=1;j<=nst;j++){
            printf("%d ",a);
            a++;
        }
        nsp-=1;
        nst+=2;
        printf("\n");
     }
}

