#include<unistd.h>

/**
 *main - Entry point
 *
 *Description: prints a code using write size_t
 *	write (int fd, const void *buf, size_t count);
 *
 *Return: always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
