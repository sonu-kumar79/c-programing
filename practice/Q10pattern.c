#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n, j, i;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int min = 0;
    for(i = 1; i <= 2*n-1; i++){
        for(j = 1; j <= 2*n-1; j++){
            int a = i;
            if(i > n) a = 2*n-i;
            int b = j;
            if(b > n) b = 2*n-j;
            if(a < b) min = a;
            else min = b;
            printf("%d ",n + 1 - min);
        }
        printf("\n");
    }
    return 0;
}
