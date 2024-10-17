#include<stdio.h>
int main()
{
    int arr[10];
    int n=sizeof(arr)/4;
    int sumeve=0,sumodd=0;
    printf("Enter 10 elements in array\n");
    for(int j=0;j<n;j++){
        scanf("%d",&arr[j]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0) sumeve+=arr[i];
        else sumodd+=arr[i];
    }
    printf("Differance between sum of even and odd index is %d\n",sumeve-sumodd);
}