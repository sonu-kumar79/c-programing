#include<stdio.h>
int main()
{
    char ch[10];
    printf("Enter the question : ");
    gets(ch);
    int n;
    printf("Enter value : ");
    gets(n);
    switch(ch[10]){
        case 'o':
            if(n%2==0) puts("Even Number!");
            else puts("Odd Number!");
            break;
        case 'f':
            int fact=1;
            for(int i=1;i<=n;i++){
                fact*=i;
            }
            printf("factor :%d",fact);
            break;
        case 'p':
            int check=1;
            for(int i=2;i<=n/2;i++){
                if(n%i==0) check++;
            }
            if(check==1) puts("Prime Number!");
            else if(n==1) puts("Neither Composite nor prime  Number!");
            else puts("Composite Number!");
            break;
        default :
            printf("Question is wrong");
    }
}