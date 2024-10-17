#include<stdio.h>
void delete(int arr[],int *n,int del)
{
    for(int i=0;i<*n;i++){
        for(int j=i;j<*n;j++){
            if(arr[j]==del){
                for(int k=j;k<*n-1;k++){
                    arr[k] = arr[k+1];
                }
                (*n)--;
                j--;
            }
        }
    }
}
int main()
{
    int arr[] = {1,5,3,7,8,9,2,1};
    int n = sizeof(arr)/4;
    int del;
    printf("Enter element number :");
    scanf("%d",&del);
    printf("Before deleting array\n");
    for(int i=0;i<n;i++) 
        printf("%d ",arr[i]);
    delete(arr,&n,del);
    printf("After deleting array\n");
    for(int i=0;i<n;i++) 
        printf("%d ",arr[i]);

}