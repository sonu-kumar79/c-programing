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
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
    
}