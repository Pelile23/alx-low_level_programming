#include <stdio.h>
#include "main.h"

/**
 * main -entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: program that prints its name
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
