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

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

