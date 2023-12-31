#include "main.h"
/**
 * _strcpy - copy the string pointed to by src to dest
 *
 * Description: copy the string pointed to by src to dest
 *
 * @dest: character to be checked
 * @src: character to be checked
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
