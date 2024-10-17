#include<stdio.h>
int main()
{
    int x;
    printf("Enter thr size of an array :");
    scanf("%d",&x);
    int arr[x];
    int n = sizeof(arr)/4;
    int a=1;
    for(int j=0;j<n;j++){
        arr[j]=a;
        printf("%d ",arr[j]);
        a++;
    }
    printf("\n");
    
    
    for(int i=0;i<n;i++){
        if(i%2!=0) arr[i] *= 2;
        else arr[i] += 10;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


    printf("\n\n");
    return 0;
}