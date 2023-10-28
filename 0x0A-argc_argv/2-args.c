#include <stdio.h>

/**
 *main - take an array of char values and points to it
 *@argc: arg counter
 *@argv: arg value
 *
 *Return: 0 success
 */

int main(int argc, char const *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
