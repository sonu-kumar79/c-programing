#include<stdio.h>
void insertionsort(int arr[],int n)
{
    for(int i=1;i<n;i++){
        int j=i-1;
        int temp = arr[i];
        while (arr[j]>temp && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1] = temp;
        
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main()
{
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    insertionsort(arr,n);
    printArray(arr,n);
    printf("\n");
}