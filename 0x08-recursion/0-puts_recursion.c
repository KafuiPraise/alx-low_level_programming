#Include "main.h"

/**
 * _puts_recursiom - funtion like puts();
 * @s: input
 * Return: Always 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		puts_recursion(s + 1);
	}

	else
		_putchar('"\n");
}
