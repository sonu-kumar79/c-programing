#include<stdio.h>
int main()
{
    printf("\n");

    int arr[] = {1,2,5,4,3,2,1};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
          printf("%d ",arr[i]);
    }
    printf("\n");
    int i=0,j=n-1,temp;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int check;
    for(int k=0;k<n;k++){
        if(arr[k]==arr[n-1-k]) check=1;
        else{
            check=0;
            break;
        }
    }
    if(check==1) printf("Array is palindrom");
    else printf("Array is not palindrom");
    printf("\n\n");
}