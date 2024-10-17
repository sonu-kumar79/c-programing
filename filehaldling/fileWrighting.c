#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* ptr = fopen("pce.txt","w");
    char str[100];
    puts("Enter text at the end add '*' to end wrighting : ");
    scanf("%[^~*]",str);
    fputs(str,ptr);
    fclose(ptr);
}