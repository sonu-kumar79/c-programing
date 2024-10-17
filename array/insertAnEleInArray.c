#include<stdio.h>
void add(int arr[],int n,int index,int value)
{
    for(int i=(n-1);i>=index;i--){
        arr[i+1] = arr[i];
    }
    arr[index]=value;
}
int main()
{
    int index,value,n,arr[]= {10,20,30,40,50};
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the index number that you want to add element :");
    scanf("%d",&index);
    printf("Enter the value :");
    scanf("%d",&value);
    add(arr,n,index,value);
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");   
}