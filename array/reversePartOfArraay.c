#include<stdio.h>
void reverse(int arr[],int si,int ei){
    for(int i=si,j=ei;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main()
{
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int si,ei;
    printf("Enter the starting index : ");
    scanf("%d",&si);
    printf("Enter the ending index : ");
    scanf("%d",&ei);
    reverse(arr,si,ei);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}