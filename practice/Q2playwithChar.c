#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char c, s[20], str[50];
    scanf("%c",&c); 
    scanf("%s",s);
    scanf(" %[^\n]s",str);
    
    printf("%c\n",c);
    printf("%s\n",s);
    printf("%s\n",str);
    return 0;
}
