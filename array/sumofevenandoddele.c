#include<stdio.h>
int main()
{
    int arr[]={5,6,5,1,7,8,10};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            a += arr[i];
        }
        else{
            b += arr[i];
        }
    }
    printf("sum of even index :%d\n",a);
    printf("sum of odd index :%d",b);
    printf("\n\n");
}