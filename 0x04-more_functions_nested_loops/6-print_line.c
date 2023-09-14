#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of lines
 * Description: prints with _putchar
 * Return: void
 */
void print_line(int n)
{
	int num_lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num_lines = 1; num_lines <= n; num_lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
