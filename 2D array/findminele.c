#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[3][3]={1,2,3,4,12,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int min=INT_MAX;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(min>arr[i][j]) min=arr[i][j];
        }
    }
    printf("%d is min\n",min);
}