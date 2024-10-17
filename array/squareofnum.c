#include<stdio.h>
int main()
{
    int n;
    printf("Enter thr size of an array :");
    scanf("%d",&n);
    int arr[n];
    int a=1;
    for(int j=0;j<arr[4];j++){
        arr[j]=a;
        printf("%d ",arr[j]*a);
        a++;
    }

    printf("\n\n");
    return 0;
}