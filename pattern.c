// printing pattern 
// 2 2 2
// 2 1 2
// 2 2 2

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int i, j;
    int size = n*2 - 1;
    
    for(i = 0 ; i < size; i++)
    {
        for(j = 0; j < size; j++)
        {
            int min = i < j ? i : j;
            
            if((size-1-i) < min) min = size-1-i;
            
	    if((size-1-j) < min) min = size-1-j;
            
	    printf("%d ", n - min);   
        }
        
	printf("\n");
    }
    return 0;
}
