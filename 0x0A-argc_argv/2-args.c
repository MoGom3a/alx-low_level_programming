#include <stdio.h>

/**
 *main - take an array of char values and points to it
 *@argc: arg counter
 *@argv: arg value
 *@i: counter for loop
 *Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
