#include<stdio.h>

/**
 *main - entry point
 *Description: gives the alphabet in lowercase and uppercase
 *Return: 0 (success)
 */

int main(void)
{
	char ch = '0';
	char CH = 'a';

	/*for NUMBERS*/
	while (ch <= '9')
	{
		putchar(ch);
		ch++;
	}

	/*for LETTERS*/
	while (CH <= 'f')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
