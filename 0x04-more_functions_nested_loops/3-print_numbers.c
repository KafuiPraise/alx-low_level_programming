#include "main.h"

/**
 * print_numbers - write 0-9
 * return: void (0)
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

