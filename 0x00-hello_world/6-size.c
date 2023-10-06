#include <stdio.h>
/**
 * main - Entry point
 *
 *Description : C file prints out the size in bytes
 *
 *Return: 0 = Success
 */
int main(void)
{
	printf("Size of a char:", sizeof(char));
	printf("Size of an int:", sizeof(int));
	printf("Size of a long int:", sizeof(long int));
	printf("Size of a long long int:", sizeof(long long int));
	printf("Size of a float:", sizeof(float));
	return (0);
}