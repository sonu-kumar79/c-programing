#include<stdio.h>
#include<string.h>
int main()
{
    int count = 0;
    char input[100];
    printf("Enter line (type 'exit' to finish line): \n");
    while(1)
    {
        fgets(input,sizeof(input),stdin);
        if(strcmp(input,"exit\n")==0) break;
        count++;
    }
    printf("Number of line is %d\n",count);
    return 0;
}