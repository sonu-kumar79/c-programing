#include<stdio.h>
#include<string.h>
typedef float realnumber;

int main()
{
    realnumber y=30141592;
    printf("%f\n\n",y);



    typedef struct car
    {
        int price;
        float topspeed;
        char segment[20];
    }car;
    car c1;                           //declaration
    c1.price = 15999999;              //inilization
    c1.topspeed = 190.9;              //inilization
    strcpy(c1.segment,"sedan");       //inilization
    printf("%s\n",c1.segment);
    printf("%f\n",c1.topspeed);
    printf("%d\n\n",c1.price);
    
}