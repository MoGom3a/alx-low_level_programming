#include <main.h>

/*
 *void swap_int(int *a, int *b) - takes 2 int values of a pionters
 *
 *@a: the first pointer
 *@b: the 2nd pointer
 *
 * Return: n/a
 */

void swap_int(int *a, int *b)
{
	a_val = *a;
	*a = *b;
	*b = a_val;
}
