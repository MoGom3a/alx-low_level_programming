#include "main.h"
#include <stdio.h>

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
	int l;

	for (l = 0; a[l] != '\0'; l++)
	{
		printf("%d, ", a[l]);
	}
	printf("\n");
}
