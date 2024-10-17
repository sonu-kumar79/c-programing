#include<stdio.h>
int main()
{
    char str[] = "sonu kumar";
    //method 1
    // int n=sizeof(str)/sizeof(str[0]);
    // for(int i=0;i<n;i++){
    //     printf("%c",str[i]);
    // }
    //method 2
    printf("%s",str);
    printf("\n");
    // printf("%d",n);
}