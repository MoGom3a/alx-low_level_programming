#include "variadic_functions.h"

/**
 * sum_them_all - sum of all args
 * @n: counter
 * @...: the args
 *
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
        int s = 0, i = n;
        va_list args;

        if (!n)
                return (0);
        va_start(args, n);
        while (i--)
                s += va_arg(args, int);
        va_end(args);
        return (s);
}
