#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct cricketer
    {
        char firstname[20];
        char lastname[20];
        int age;
        int noOfMatches;
        float avgRun;
    }cricketer;
    cricketer arr[20];
    for(int i=0;i<2;i++){
        printf("Enter the %d first name :",i+1);
        scanf("%s",arr[i].firstname);
        printf("Enter the %d last name :",i+1);
        scanf("%s",arr[i].lastname);
        printf("Enter the age :");
        scanf("%d",&arr[i].age);
        printf("Enter the no. of test matches :");
        scanf("%d",&arr[i].noOfMatches);
        printf("Enter the average run :");
        scanf("%f",&arr[i].avgRun);
    }
    for(int i=0;i<2;i++){
        printf("plauer's Name :%s %s\n",arr[i].firstname,arr[i].lastname);
        printf("player's age :%d\n",arr[i].age);
        printf("No of test matchas :%d\n",arr[i].noOfMatches);
        printf("player's average :%f\n",arr[i].avgRun);
    }

}