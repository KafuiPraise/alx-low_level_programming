#include "main.h"

/**
 * print_chessboard - Starting point
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int h;
	int l;

	for (h = 0; h < 8; h++)
	{
		for (l = 0; l < 8; l++)
			_putchar(a[h][l]);
		_putchar('\n');
	}
}
