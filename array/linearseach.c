#include<stdio.h>
#include<stdbool.h>
int main()
{
    printf("\n");

    int arr[] = {5,6,2,8,7,32,5,8,4,2,62,21,47,21,45};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n ");
    int x;
    printf("Enter the number that you want to search :");
    scanf("%d",&x);
    bool flag=false;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag=true;
            break;
        }
    }
    if(flag==true) printf("%d exists",x);
    else printf("%d does not exists",x);
    

    printf("\n");
    return 0;
}