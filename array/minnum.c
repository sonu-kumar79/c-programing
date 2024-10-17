#include<stdio.h>
#include<limits.h>
int main()
{
    int arr[] = {5,8,9,66,225,4};
    int n =sizeof(arr)/4;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(min>arr[i]) min = arr[i];
    }
    printf("min num is : %d",min);

    printf("\n\n");
    return 0;
}