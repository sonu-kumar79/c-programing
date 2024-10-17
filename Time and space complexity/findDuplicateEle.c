#include<stdio.h>
int main()
{
    int n,x=0,sn,dpt;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter 1 to %d numbers and one duplicate number : ",n);
    for(int i=0;i<n+1;i++){
        scanf("%d",&arr[i]);
        x=x+arr[i];
    }
    sn=n*(n+1)/2;
    dpt=x-sn;
    printf("Duplicate number is %d\n",dpt);
    
}