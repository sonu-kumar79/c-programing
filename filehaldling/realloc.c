#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr =(int*) malloc(10*sizeof(int));
    printf("%p\n",ptr);
    ptr = realloc(ptr,20000*sizeof(int));
    printf("%p",ptr);
}