
#include<stdio.h>
int main()
{
    char str[] = "sonu\0 kumar";
    //                    all char will print
    // int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     printf("%c",arr[i]);
    // }
    //                   printing will end when null char comes
    printf("%s",str);
    printf("\n");
    // printf("%d",n);
}