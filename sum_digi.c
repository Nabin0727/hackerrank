// calcultaing sum of digit
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int i, sum = 0;
    char dig[6];
    sprintf(dig, "%d", n);
    
    // for(i = 0; i < 5; i++)
    // {
    //     sum = sum + dig[i] - '0';
    
    // }
    while(n>0){
        sum = sum + n%10;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}
