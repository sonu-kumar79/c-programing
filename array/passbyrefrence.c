#include<stdio.h>
void pass(int x[])
{
    x[2]=50;
}
int main()
{
    printf("\n\n");

    int arr[]={3,6,7,5,8};
    printf("%d ",arr[2]);
    pass(arr);
    printf("%d ",arr[2]);

    printf("\n\n");
    return 0;
}