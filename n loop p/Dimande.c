#include<stdio.h>
int main()
{
    int n;
    printf("enter the value : ");
    scanf("%d",&n);
    int nsp=n-1;
    int nst=1;
    for(int i=1;i<=2*n-1;i++){
            for(int j=1;j<=nsp;j++){
                printf("  ");
            }
            for(int j=1;j<=nst;j++){
                printf("%d ",j);
            }
            if(i<n){
                nsp--;
                nst+=2;
            }
            else{
                nsp++;
                nst-=2;
            }
            printf("\n");
    }
}
