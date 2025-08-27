/*
 *Task

For each integer  in the interval  (given as input) :

If , then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if  and it is an even number, then print "even".
Else if  and it is an odd number, then print "odd".
Input Format

The first line contains an integer, .
The seond line contains an integer, .

Constraints


Output Format

Print the appropriate English representation,even, or odd, based on the conditions described in the 'task' section.

Note: 
 */
#include<stdio.h>

int main()
{
	int a , b, i;
	printf("Enter the lower and upper bound");
	scanf("%d%d", &a, &b);

	for(i = a; i <= b; i++){
		if(i > 9){
			if(i % 2 == 0){
				printf("even\n");
			}
			else{
				printf("odd\n");
			}
		}
		else{
				switch(i){
					case 1:
						printf("one\n");
						break;
					case 2:
						printf("two\n");
						break;
					case 3:
						printf("three\n");
						break;
					case 4:
						printf("four\n");
						break;
					case 5:
						printf("five\n");
						break;
					case 6:
						printf("six\n");
						break;
					case 7:
						printf("seven\n");
						break;
					case 8:
						printf("eight\n");
						break;
					case 9:
						printf("nine\n");
						break;

				}
			}

		}

	return 0;
}
