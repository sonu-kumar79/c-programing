#include<stdio.h>
#include<string.h>
int main()
{
    struct book
    {
        char name[50];
        float price;
        int noOfpages;
    }b1;
    printf("Enter the name: ");
    strcpy(b1.name,gets(b1.name));
    printf("Enter the price: ");
    scanf("%f",&b1.price);
    printf("Enter the no. of pages: ");
    scanf("%d",&b1.noOfpages);
    
}