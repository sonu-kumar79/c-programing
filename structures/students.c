#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student
    {
        int rollNo;
        char name[20];
        char department[20];
        char course[20];
        int yearOfJoining;
    }student;
void find(student s1,student s2)
{
    if(strcmp(s1.department,s2.department)==0) printf("student have same department!\n");
    else printf("student don't have same department!\n");
}
int main()
{
    student s1,s2;
    printf("Enter the department : ");
    strcpy(s1.department,gets(s1.department));
    strcpy(s2.department,gets(s2.department));
    find(s1,s2);

}