#include<stdio.h>
int maze(int x,int y)
{
    int rightways=0;
    int downways=0;
    if(x==1 && y==1) return 1;
    if(x==1){
        rightways +=maze(x,y-1);
    }
    if(y==1){
        downways +=maze(x-1,y);
    }
    if(x>1 && y>1){
        rightways +=maze(x,y-1);
        downways +=maze(x-1,y);
    }
    int totalways = rightways+downways;
    return totalways;
}
int main()
{
    printf("\n\n");
    int a,b;
    printf("Enter the value of raws :");
    scanf("%d",&a);
    printf("Enter the value of colums :");
    scanf("%d",&b);
    printf("total ways is %d",maze(a,b));
    printf("\n\n");
    return 0;
}