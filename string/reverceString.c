#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int n, i, j, temp;
    printf("Enter the string : ");
    gets(str);
    puts("The reverse is : ");
    for( n = 0; str[n] != '\0'; n++);
    i = 0;
    j = n-1;
    while (i<j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }    
    puts(str);
}