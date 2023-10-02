#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @n: number of bytes
 * @src: memory where data is copied
 * @dest: memory where data is stored
 *
 * Return: memory that has been copied with n bytes changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
