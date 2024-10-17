#include<stdio.h>
int main()
{
    int target = 9;
    int arr[] = {2,7,11,15};
    int n = sizeof(arr)/4;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(arr[i]+arr[j] == target) {
            printf("element is(%d,%d)\n",i,j);
        }
        }
    }
}