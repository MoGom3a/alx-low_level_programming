#include<stdio.h>

/**
 *main - entry point
 *Description: gives the alphabet in lowercase
 *Return: 0 (success)
 */

int main(void)
{
	int ch = 0;

	while (ch <= 9)
	{
		putchar(ch);

		if (ch != 9)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
