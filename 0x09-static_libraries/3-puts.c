#include "main.h"

int _putchar(char c);
/**
 * _puts - prints a string
 * @str: the string
 * Description: Funtion that prints a string, followed by a new line
 * Return: the length of the string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
