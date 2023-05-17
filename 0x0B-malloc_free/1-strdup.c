#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to newly allocated space in memory
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int d, r = 0;

	if (str == NULL)
		return (NULL);
	d = 0;
	while (str[d] != '\0')
		d++;
	aaa = malloc(sizeof(char) * (d + 1));
	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}
