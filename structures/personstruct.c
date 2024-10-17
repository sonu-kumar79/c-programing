#include<stdio.h>
#include<string.h>
int main()
{
    struct person
    {
        char name[50];
        float salary ;
        int age;
    }p1,p2;
    printf("Enter the name of 1st person: ");
    scanf("%s",&p1.name);
    printf("Enter the age of 2nd person: ");
    scanf("%d",p2.age);
    return 0;
}