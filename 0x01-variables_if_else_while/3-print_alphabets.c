#include<stdio.h>

/**
 *main - entry point
 *Description: gives the alphabet in lowercase and uppercase
 *Return: 0 (success)
 */

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*for lower case*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*for upper case*/
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
