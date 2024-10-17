#include<stdio.h>
int main()
{
    int i,j,min,n,temp;
    int arr[] = {4,8,2,9,3,1};
    n = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[min]>arr[j]) min=j;
        }
        if(min!=i){
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    for(i=0;i<n;i++) printf("%d ",arr[i]);
}