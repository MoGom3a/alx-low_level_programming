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
	int index;

	n = n-1;
	for (index = 0; a[n] >= 0; index++)
	{
		a[index] = a[n];
		n--;
	}
}
