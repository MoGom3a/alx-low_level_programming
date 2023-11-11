#include "variadic_functions.h"

/**
 * print_strings - sum of all args
 * @separator: the str sep
 * @n: counter
 * @...: the args
 *
 * Return: the nums
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list args;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(args, n);
	while (i--)
		printf("%s%s",(str = va_arg(args, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(args);
}
