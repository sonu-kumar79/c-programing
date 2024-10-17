#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[]={1,5,6,2,8,3};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    //selection sorting
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(arr[min]>arr[j]) min = j;
        }
        //swap
        if(min!=i){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
}