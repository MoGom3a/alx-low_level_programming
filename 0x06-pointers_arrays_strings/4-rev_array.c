#include "main.h"

/**
 *_reverse_array - function to concatinate 2 str
 *
 *@a: the destination
 *@n: the source for input
 *
 * Return: Pointer to resulting str
 */

void reverse_array(int *a, int n)
{
	int index, i;

	i = n;

	for (index = 0; i >= 0; index++)
	{
		a[index] = a[i];
		i--;
	}
}
