#include "main.h"

int _putchar(char c);

/**
 * puts2 - prints every other character of a string
 * @str: char to check
 *
 * Return: voidd
 */

void puts2(char *str)

{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	{
		if (string % 2 == 0)
		{
			_putchar(str[string]);
		}
	}
	_putchar('\n');
}
