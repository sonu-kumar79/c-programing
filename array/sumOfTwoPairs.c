#include<stdio.h>
int main()
{
    int x,count=0;
    printf("Enter the value : ");
    scanf("%d",&x);
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                printf("(%d,%d)\n",arr[i],arr[j]);
                count++;
            }
        }
    }
    printf("There are %d pairs of %d\n",count,x);
}