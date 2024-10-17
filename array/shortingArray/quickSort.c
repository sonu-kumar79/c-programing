#include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int a[], int first, int last)
{
    int key = a[first], i = first + 1, j = last;
    if(i < j)
    {
        while(a[i] <= key) i++;
        while(a[j] > key) j--;
        if(i < j) swap(&a[i], &a[j]);
    }
    swap(&a[first], &a[j]);
    return j;
}
void quicksort(int a[],int f,int l)
{
    if(f<l){
        int loc = partition(a,f,l);
        quicksort(a,f,loc-1);
        quicksort(a,loc+1,l);
    }
} 
int main()
{
    int a[100],i,n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    printf("Enter the elements :\n");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    printf("After sorting :\n");
    for(i=0;i<n;i++) printf("%d ",a[i]);
}