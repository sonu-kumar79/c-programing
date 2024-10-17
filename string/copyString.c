#include<stdio.h>
#include<string.h>
int main()
{
    // char str[]="sonu";
    // char* ptr=str;            //shallow copy
    // printf("%s\n",str);
    // printf("%s\n",ptr);
    // str[0]='m';
    // printf("%s\n",str);
    // printf("%s\n",ptr);

    //using built in functio
    char str[]="sonu";
    char ptr[5];            
    strcpy(ptr,str);         //deep copy
    printf("%s\n",str);
    printf("%s\n",ptr);
    str[0]='m';
    printf("%s\n",str);
    printf("%s\n",ptr);
}