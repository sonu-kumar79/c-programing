#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int x,sum=0,sum2,a=1;
    printf("Enter the missing number : ");
    scanf("%d",&x);
    int arr[size];
    for(int i=0;i<size;i++){
        if(a!=x){
            arr[i]=a;
            printf("%d ",arr[i]);
            sum=sum+arr[i];
        }
        a++;
    }
    printf("\n");
    sum2=size*(size+1)/2;
    int num=sum2-sum;
    printf("The missing number is %d   1 to   %d\n",num,size);
}