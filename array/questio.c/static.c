#include<stdio.h>
void inc()
{
    static int i = 1;
    printf("%d\n",i);
    i++;
}
int main()
{
    inc();
    inc();
    inc();
}
