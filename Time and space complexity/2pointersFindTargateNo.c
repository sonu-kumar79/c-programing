#include<stdio.h>
int main()
{
    int target;
    printf("Enter the target : ");
    scanf("%d",&target);
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/4;
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            printf("target is equal to sum of '%d' and '%d'\n",arr[i],arr[j]);
            break;
        }
        else if(arr[i] + arr[j] > target) 
            j--;
        else if(arr[i] + arr[j] < target) 
            i++;      
    }

}