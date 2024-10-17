#include<stdio.h>
#include<string.h>
typedef struct person
{
    int age;
    float weight;
}person;
int main()
{
    person p1;
    person* x=&p1;
    (*x).age=25;
    (*x).weight=75.8;
    printf("%f\n",p1.weight);
    printf("%d\n",p1.age);
}