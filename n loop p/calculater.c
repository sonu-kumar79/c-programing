#include<stdio.h>
int main()
{

    char ch;
    printf("enter the operator : ");
    scanf("%c",&ch);
    int a,b;
    printf("enter the first num : ");
    scanf("%d",&a);
    printf("enter the second num : ");
    scanf("%d",&b);
    switch(ch)
    {
    case '+' :
        printf("%d",a+b);
        break;
    case '-' :
        printf("%d",a-b);
        break;
    case '*' :
        printf("%d",a*b);
        break;
    case '/' :
        printf("%d",a/b);
        break;
    }
}
