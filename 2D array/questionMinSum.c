#include<stdio.h>
int main()
{
    int sum=0;
    int arr[2][2] = {-19,57,-40,-5};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<2;i++){
        int min=__INT_MAX__;
        for(int j=0;j<2;j++){
            if(min>arr[i][j]) min=arr[i][j];
        }
        sum+=min;
    }
    printf("sum of min is %d\n ",sum);

}