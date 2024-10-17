#include<stdio.h>
int main()
{
    int x;             //declaratio
    x=5;               //inilization

    struct student
    {
        int rno;
        float percent;
        char grade;
    };
    struct student sonu;    //declaration
    sonu.rno = 15;          //inilization
    sonu.percent = 71.6;    //inilization
    sonu.grade = 'A';       //inilization
    printf("%d\n",sonu.rno);
    printf("%f\n",sonu.percent);
    printf("%c\n\n",sonu.grade);

    struct student shubham = {36,70.5,'A'};     //in order
    printf("%d\n",shubham.rno);
    printf("%f\n",shubham.percent);
    printf("%c\n",shubham.grade);

    return 0;
    
}