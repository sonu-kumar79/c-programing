#include<stdio.h>
int pow(int x,int y)
{ 
    if(y==0) return 1;
    if(y==1) return x;
    int j=pow(x,y/2);
    if(y%2==0){
       return (j*j);
    }
    else {
       return (j*j*x);
    }
}
int main()
{
    int a,b;
    printf("Enter the bace :");
    scanf("%d",&a);
    printf("Enter the power :");
    scanf("%d",&b);
    printf("ans is=%d\n\n",pow(a,b));
    return 0;
}