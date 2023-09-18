#include "main.h"

int _putchar(char c);

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * Description: Use of putchar function
 * @s: string to be printed
 * Return: void
*/

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
