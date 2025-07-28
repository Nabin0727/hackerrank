/*
 * Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000
int main()
{
	char string[MAX];

	printf("Enter a string with integer: ");
	fgets(string, sizeof(string), stdin);
	
	int i, length, freq[MAX] = {0};
	length=strlen(string);
	string[length] = '\0';
	
	for (i = 0; i < length; i++)
	{
		if ( string[i] >= '0' && string[i] <= '9')
		{
			freq[string[i] - '0']++;		
		}
	}

	for(i = 0; i < 10; i ++)
	{
		printf("%d ", freq[i]);
	}	

	printf("\n%s", string);

	return 0;
}
