#include <stdio.h>

/**
 *main - take an array of char values and points to it
 *@argc: arg counter
 *@argv: arg value
 *
 *Return: 0 success
 */

int main(int argc, char *argv[])
{
	int total;

	if (argc == 3)
	{
		total = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", total);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
