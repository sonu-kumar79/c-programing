#include<stdio.h>
int main()
{
    printf("\n");

    int arr[] = {5,6,2,8,7,51,82,45};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int count=0, x=4;
    for(int i=0;i<n;i++){
        if(x<arr[i]) count += 1;
    }
    printf("there are %d numbers greater than %d ",count,x);

    printf("\n\n");
    return 0;
}