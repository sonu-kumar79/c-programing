#include<stdio.h>
#include<limits.h>
#include<math.h>
#define PI 3.14159265359
#define area(r) (PI*r*r)
int main()
{
    int x=INT_MAX;
    long long y=LONG_MAX;
    double n=PI;
    printf("%d\n",x);
    printf("%ld\n",y);
    printf("%.11f\n",n);
    printf("%f",area(10));
}