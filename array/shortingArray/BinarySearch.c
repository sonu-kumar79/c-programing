#include<stdio.h>
int BinarySearch(int a[],int left, int right, int target)
{
    
    if(left<=right)
    {
    int mid = (right + left) / 2;
        if(a[mid] == target) return mid;
        else if(a[mid] < target)
            BinarySearch(a, mid+1, right, target);
        else
            BinarySearch(a, left, mid-1, target);
    }
}
int main()
{
    int a[100], size, target, i, result;
    printf("Enter the size of array :");
    scanf("%d",&size);
    printf("Enter the sorted number of elements : \n");
    for(i = 0; i < size; i++) scanf("%d",&a[i]);
    printf("Enter the number to search :");
    scanf("%d",&target);
    result = BinarySearch(a ,0, size - 1, target);
    if(result != -1) printf("%d found in the array at index %d\n",target,result);
    else printf("%d  not found in the array\n",target);
    return 0;
}