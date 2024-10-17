#include<stdio.h>
int main()
{
    printf("\n");

    int arr[] = {5,6,2,8,7};
    int n=sizeof(arr)/4;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    printf("%d",sum);

    printf("\n");
    return 0;
}