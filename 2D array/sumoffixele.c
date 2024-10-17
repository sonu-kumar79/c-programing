#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the value of row: ");
    scanf("%d",&r);
    printf("Enter the value of colum: ");
    scanf("%d",&c);
    printf("Enter the elements\n");
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    int sum=0,x1,y1,x2,y2;
    printf("Enter the coordinate (x1,y1) :");
    scanf("%d%d",&x1,&y1);
    printf("Enter the coordinate (x2,y2) :");
    scanf("%d%d",&x2,&y2);
    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
           sum+=arr[i][j];
        }
    }
    printf("sum is %d\n",sum);
}