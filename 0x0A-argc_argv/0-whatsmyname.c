#include <stdio.h>
#include "main.h"

/**
 * main - will prints the program name
 * @argc: list of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

