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
	int index, j;

	j = n-1;

	for (index = 0; index < j / 2; index++)
	{
		int temp = a[index];

		a[index] = a[j - index];
		a[j - index] = temp;
	}
}
