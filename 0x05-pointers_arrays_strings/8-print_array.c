#include "main.h"

/**
 *print_array - takes the values of an array as int
 *
 *@a: the pointer for the array values
 *
 *@n: the number of array values
 *
 *Return: void
 */

void print_array(int *a, int n)
{
	int n;

	for (n = 0; a[n] != '\0'; n++)
	{
		printf("%d, ", a[n]);
	}
	printf("\n");
}
