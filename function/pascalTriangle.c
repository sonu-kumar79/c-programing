#include<stdio.h>
#include<math.h>
int fact(int x)
{
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int ncr(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
      int n;
      printf("Enter the value of n :");
      scanf("%d",&n);
      int nsp=n-1;
      for(int i=0;i<=n;i++){
        for(int k=0;k<=nsp;k++){
            printf("  ");
        }
        for(int j=0;j<=i;j++){
            if(j%2!=0) printf("  ");
            else printf("  ");
            int a=ncr(i,j);
            printf("%d ",a);
        }
        nsp--;
        printf("\n");
      }
}
