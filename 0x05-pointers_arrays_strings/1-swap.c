#include <stdio.h>

/*
 *swap_int : takes 2 int values of a pionters stored in 2 variables
 *		a & b
 *
 *@a: the first pointer
 *@b: the 2nd pointer
 *
 * Return: n/a
 */

void swap_int(int *a, int *b)
{
	int a_val = *a;
	*a = *b;
	*b = a_val;
}
