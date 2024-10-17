#include<stdio.h>
void reverse(int arr[],int n){
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
    }
}
int main()
{
    printf("\n");

    int arr[] = {5,8,9,7,2,3,10,44};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
          printf("%d ",arr[i]);
    }
    printf("\n");
    reverse(arr,n);
    for(int i=0;i<n;i++){
          printf("%d ",arr[i]);
    }
    printf("\n\n");
}