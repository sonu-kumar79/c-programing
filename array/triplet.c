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
            for(int k=j+1;k<n;k++){
                if(arr[i] + arr[j] + arr[k] == x){
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                    count++;
                }
            }
        }
    }
    printf("There are %d triplet of %d\n",count,x);
}