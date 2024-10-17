#include<stdio.h>
#include<limits.h>
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
    int min=INT_MAX;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(min>arr[i][j]) min=arr[i][j];
        }
    }
    printf("Max element is %d",min);
    printf("\n");
    return 0;
}