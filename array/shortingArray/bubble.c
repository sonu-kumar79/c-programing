#include<stdio.h>
int main()
{
    int n,temp,i,j;
    int arr[] = {1,5,8,4,2};
    n = sizeof(arr)/4;
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    printf("\n");
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("After sorting :\n");
    for(i=0;i<n;i++) printf("%d ",arr[i]);
    return 0;
}