#include<stdio.h>
int main()
{
    int arr[] = {3,2,5,1,4};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    // Bubble shorting
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                int tamp =arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tamp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}