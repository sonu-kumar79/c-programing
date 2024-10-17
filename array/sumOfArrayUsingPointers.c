#include<stdio.h>
int CalculateSum(int *a, int size)
{
    int i, sum = 0;
    for(i = 0; i < size; i++) sum += a[i];
    return sum;
}
int main()
{
    int a[100], size, i, sum;
    printf("Enter the size of an array :");
    scanf("%d",&size);
    printf("Enter the elements :\n");
    for(i = 0; i < size; i++) scanf("%d",&a[i]);
    sum = CalculateSum(a, size);
    printf("Sum of all elements is %d ",sum);
    return 0;
}
