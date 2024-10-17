#include<stdio.h>
int main()
{
    // char str[]="sonu kumar";     
    // printf("%s\n",str);
    // str[0]='m';             //it will works
    // printf("%s\n",str);

    // char* str="sonu kumar";     
    // printf("%s\n",str);
    // str[0]='m';             //error
    // printf("%s\n",str);

    // char str[]="sonu kumar";     
    // printf("%s\n",str);
    // str="monu kumar";             //error
    // printf("%s\n",str);

    char* str="sonu kumar";     
    printf("%s\n",str);
    str="monu kumar";             //it will works
    printf("%s\n",str);
}