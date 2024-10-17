#include<stdio.h>
int main()
{
    printf("\n");

    int arr[] = {5,8,9,7,2,3,10,44};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int brr[n];
    for(int i=0;i<n;i++){
        brr[i]=arr[n-1-i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
    }
    printf("\n\n");
}