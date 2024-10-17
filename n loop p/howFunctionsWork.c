#include<stdio.h>
void japan()
{
    printf("nice to meet you\n");    //last
}
void india()
{
    printf("I am sonu kumar\n");  //2nd
    england();
}
void england()
{
    printf("And i'm from Arwal\n");  //3rd
    japan();
}

int main()
{
    printf("Hellow\n");     //1st
    india();                      
}
