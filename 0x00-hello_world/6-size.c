#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %lu byte(a)\n", sizeof(char));
	printf("Size of an int: %lu byte(a)\n", sizeof(int));
	printf("Size of a long int: %lu byte(a)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(a)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(a)\n", sizeof(float));
	return (0);
}
