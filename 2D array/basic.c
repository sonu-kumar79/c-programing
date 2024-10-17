#include<stdio.h>
int main()
{
    int arr[4][2]={{45,65},{25,95},{55,75},{35,85}};
    for(int i=0;i<4;i++){
        for(int j=0;j<2;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}