#include "main.h"

/**
 * _isdigit - 0-9 numbers will be checked
 * @c: character to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

