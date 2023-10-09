#include<stdio.h>

/**
 *main - entry point
 *Description: gives the numbers from 0 to 9
 *Return: 0 (success)
 */

int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
