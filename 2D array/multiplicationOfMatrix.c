#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the row of 1st matrix : ");
    scanf("%d",&m);
    printf("Enter the column of 1st matrix : ");
    scanf("%d",&n);
    printf("Enter the matrix\n");
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // 2nd matrix
    int p,q;
    printf("Enter the row of 2nd matrix : ");
    scanf("%d",&p);
    printf("Enter the column of 2nd matrix : ");
    scanf("%d",&q);
    printf("Enter the matrix\n");
    int brr[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    if(n!=p) printf("Entered matrix cannot be multiplyed ");
    else{
        //multiplycation
        int rel[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                rel[i][j] = 0;
                for(int k=0;k<n;k++){
                    rel[i][j] += arr[i][k]*brr[k][j];
                }
            }
        }
        printf("The answer is : \n");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
               printf("%d ",rel[i][j]);
            }
            printf("\n");
        }
    }

    
}