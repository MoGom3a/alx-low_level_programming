#include "function_pointers.h"

/**
 * int_index - prints a name
 * @array: the name to print
 * @size: pointer to function
 * @cmp: comparing f
 *
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
