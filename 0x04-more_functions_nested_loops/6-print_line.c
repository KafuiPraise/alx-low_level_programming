#include "main.h"

/**
 * print_line -  straight line will be drawn in the terminal
 * @n: number of times to print character
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

