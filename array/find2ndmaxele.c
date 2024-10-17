#include<stdio.h>
#include<limits.h>
int main()
{
    printf("\n");
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of array : ");
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    printf("\n");
    int max=INT_MIN;
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            smax=max;
            max=arr[i];
        }
        else if(smax<arr[i] && max!=arr[i]) smax = arr[i];
    }
    printf("%d is largest number\n",max);
    printf("%d is 2nd largest number ",smax);

    printf("\n\n");
    return 0;
}