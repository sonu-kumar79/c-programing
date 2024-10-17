#include<stdio.h>
int main(){
    int n, rem, bin = 0, base = 1;
    printf("Enter the decimal number :");
    scanf("%d",&n);
    while(n != 0){
        rem = n % 2;
        n /= 2;
        bin = bin + rem * base;
        base = base * 10;
    }    
    printf("Binary number is : %d\n",bin);
}