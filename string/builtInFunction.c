#include<stdio.h>
//#include<string.h>
int len(char* str){
    char* ptr=str;
    int l=0;
    while (*ptr!='\0')
    {
        l++;
        ptr++;
    }
    return l;
}
int main(){
    char str[]="sonu kumar";
    int x=len(str);
    printf("char lenght is %d",x);



    // char str[]="sonu kumar is a student";
    // printf("%lu\n",strlen(str));

}