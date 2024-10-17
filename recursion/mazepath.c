#include<stdio.h>
int maze(cr,cc,er,ec)
{
    int rightways=0;
    int downways=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){  //can't go downways
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){  //can't go rightways
        downways += maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
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
    printf("total ways is %d",maze(1,1,a,b));
    printf("\n\n");
    return 0;
}