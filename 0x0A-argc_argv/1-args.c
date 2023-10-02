#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: program that prints the number of arguments passed into it
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
