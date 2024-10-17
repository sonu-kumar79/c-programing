#include<stdio.h>
#include<string.h>
void slice(char* str,int m, int n){
    int i=0;
    while ((m+i)<n)
    {
        str[i]=str[i+m];
        i++;
    }
    str[i]='\0';
    
}
int main()
{
    char str[]="shubham";
    int n=0,i=0;
    while(str[i]!='\0'){
        i++;
        n++;
    }
    slice(str,1,n-1);
    printf("%s\n",str);
}