#include<stdio.h>
int main()
{
    int n;
    printf("enter the value: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        if(i+j>=n+1) printf("* ");
        else printf("  ");
        }
        printf("\n");
      }
    //    for(int i=1;i<=n;i++){
    //         for(int j=1;j<=n-i;j++){
    //            printf("  ");
    //             }
    //         for(int j=1;j<=i;j++){
    //           printf("* ");
    //         }
    //         printf("\n");
    // }
}




