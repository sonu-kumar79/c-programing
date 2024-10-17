#include<stdio.h>
#include<string.h>
void copyCharacters(char sour[], char dest[], int n)
{
    int i;
    for(i = 0; i < n && sour[i] != '\0'; i++){
        dest[i] = sour[i];
    }
    dest[i] = '\0';
}
int main()
{
    int n;
    char sour[100], dest[100];
    printf("Enter the string :\n");
    gets(sour);
    printf("Enter how many character you wants to copy :");
    scanf("%d",&n);
    copyCharacters(sour, dest, n);
    printf("Before copy :\n %s\n",sour);
    printf("After copy :\n %s\n",dest);
    return 0;
}