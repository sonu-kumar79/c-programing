#include<stdio.h>
int main()
{
    int n,i,j,temp;
    int a[] = {4,8,9,5,4,3,2,1};
    n = sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    for(i=1;i<n;i++){
        for(j=i-1;j>=0;j--){
            if(a[j]>a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("After sorting :\n");
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
}