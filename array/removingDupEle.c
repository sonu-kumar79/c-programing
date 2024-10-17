#include<stdio.h>
void removeDup(int arr[],int *n)
{
    for(int i=0;i<*n;i++){
        for(int j=i+1;j<*n;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<*n-1;k++){
                    arr[k]=arr[k+1];
                }
                (*n)--;
                j--;
            }
        }
    }
}
int main()
{
    int arr[] = {1,2,5,4,5,2,1,6,8,9,2};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    removeDup(arr,&n);
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}