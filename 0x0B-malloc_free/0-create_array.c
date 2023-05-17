#include "main.h"
#include <stdlib.h>

/**
 * create_array - to create an array of size size, assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create an array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int h;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);
	for (h = 0; h < size; h++)
		str[h] = c;
	return (str);
}
