#include "function_pointers.h"

/**
 * array_iterator - prints a name
 * @array: the name to print
 * @size: pointer to function
 * @action: the funtion
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = &array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
