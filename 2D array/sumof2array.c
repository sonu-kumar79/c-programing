#include<stdio.h>
int main()
{
    int arr[2][2]={10,21,3,4};
    int brr[2][2]={5,6,7,8};
    int b;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            b=arr[i][j]+brr[i][j];
            printf("%d ",b);
        }
        printf("\n");
    }
}