#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    
    int count =1;
    fp = fopen("sonu.txt","r");
    if(fp == NULL){
        printf("can not open the file");
        exit(1);
    }
    while((ch = fgetc(fp)) != EOF){
        if(ch == '\n') count++;
    }
    fclose(fp);
    printf("There are %d line in this file\n",count);
    return 0;
}