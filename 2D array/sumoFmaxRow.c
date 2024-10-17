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
    int a=0,check=-1;
    for(int i=0;i<r;i++){
        int sum=0;
        for(int j=0;j<c;j++){
            sum += arr[i][j];
            
        }
        if(sum>a){
            a=sum;
            check=i;
        }
        
    }
    printf("sum of max row is %d and row index is %d",a,check);
    printf("\n");
    return 0;
    
}