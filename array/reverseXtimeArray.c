#include<stdio.h>
void reverse(int arr[],int n,int x){
    for(int i=0,j=n-1;i<x%n;i++,j--){
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
    int x;
    printf("Enter times for reverseing array :");
    scanf("%d",&x);
    reverse(arr,n,x);
    for(int i=0;i<n;i++){
          printf("%d ",arr[i]);
    }
    printf("\n\n");
}