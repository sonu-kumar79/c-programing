#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE* ptr = fopen("sonu.txt","r");
    char str[100];
    while(fgets(str,100,ptr)!=NULL){
       printf("%s",str);
    }
    printf("\n");
}