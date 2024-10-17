#include<stdio.h>
#include<limits.h>
int main()
{
    printf("\n");

    int arr[] = {5,6,2,8,7,51};
    int n=sizeof(arr)/4;
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]) max = arr[i];
    }
    printf("max num is : %d",max);

    printf("\n\n");
    return 0;
}