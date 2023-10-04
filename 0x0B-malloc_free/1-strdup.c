#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns pointer to a new string which is duplicate of the string
 *
 * @str: string
 *
 * Return: returns pointer to duplicated string, NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *mmm;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	mmm = malloc(sizeof(char) * (i + 1));

	if (mmm == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		mmm[r] = str[r];

	return (mmm);
}

