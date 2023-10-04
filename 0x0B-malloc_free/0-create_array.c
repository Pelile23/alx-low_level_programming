#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates and array of chars
 *
 * @size: array size
 * @c: char to fill in array
 *
 * Return: NULL if size is zero
 * return a pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
