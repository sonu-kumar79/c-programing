#include<stdio.h>
int main()
{
    int m,n;
    printf("enter no. of rows: ");
    scanf("%d",&m);
    printf("enter no. of cols: ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
