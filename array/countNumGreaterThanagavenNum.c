#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter the number : ");
    scanf("%d",&x);
    int arr[] = {4,5,1,85,4,6,1,3,58,1,36,5,44};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        if(arr[i]>x) count++;
    }
    printf("There are %d numbers in array that is greater than %d\n",count,x);
}