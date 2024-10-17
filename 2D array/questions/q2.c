#include<stdio.h>
int main()
{
    int arr[10],n,position,ele,temp;
    printf("Enter size of array ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the changeing position : ");
    scanf("%d",&position);
    printf("Enter the lost ele : ");
    scanf("%d",&ele);
    for(int i=0;i<n+1;i++){
        
        if(i==position) {
            temp = arr[i];
            arr[i]=ele;
            arr[i+1]=temp;
        }
        // if(i>position) arr[i]=temp;
        
    }
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
}