#include<stdio.h>
int main()
{
    int n;
    printf("enter the value: ");
    scanf("%d",&n);
    int mid=n/2+1;
    if(n%2!=0){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
                if(i==mid || j==mid) printf("* ");
                else printf("  ");
                }
            printf("\n");
        }
    }
    else printf("  !\n Enter odd number");

}

