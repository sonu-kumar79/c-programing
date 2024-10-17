#include<stdio.h>
void merge(int a[],int first,int mid,int last)
{
    int i = first , j = mid+1, k = 0;
    int b[last - first + 1];
    while(i<=mid && j<=last){
        if(a[i]<=a[j]){
            b[k] = a[i];
            i++; k++;
        }
        else{
            b[k] = a[j];
            j++; k++;
        }
    }
    while(i<=mid){
            b[k] = a[i];
            i++; k++;
    }
    while(j<=last){
            b[k] = a[j];
            j++; k++;
    }
    for(k=first;k<=last;k++) a[k] = b[k - first];
}
void mergesort(int a[],int first,int last)
{
    if(first<last){
        int mid = (first + last) / 2;
        mergesort(a,first,mid);
        mergesort(a,mid+1,last);
        merge(a,first,mid,last);
    }
}
int main()
{
    int a[100],i,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    mergesort(a,0,n-1);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    return 0;
}