#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b;
    a.day = 05;
    a.month = 07;
    a.year = 2023;

    b.day = 05;
    b.month = 07;
    b.year = 2023;
    bool flag = true;
    if(a.day!=b.day) flag=false;
    if(a.month!=b.month) flag=false; 
    if(a.year!=b.year) flag=false;

    if(flag==true) printf("date are same");
    else printf("date are different");
}