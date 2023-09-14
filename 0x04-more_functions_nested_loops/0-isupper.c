#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c:character
 * Description: Prints alphabet with uppercase letter
 * Return: 1 if chacracter is upper case, 0 if otherwise.
 */

int _isupper(int c)
{
	if (c <= 'A' && c >= 'Z')
		return (1);
	else
		return (0);
}
