#include<stdio.h>
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // row wise printing.
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // colum wise printing
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}