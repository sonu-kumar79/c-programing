#include<stdio.h>
int main()
{
    char str[50];
    //mathod 1 not recomended
    scanf("%s[^\n]",str);
    printf("%s",str);
    // method 2
    // gets(str);
    // puts(str);
    return 0;
}