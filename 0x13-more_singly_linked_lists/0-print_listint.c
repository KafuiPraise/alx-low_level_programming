#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: pointer to the first node of the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t numnode = 0;

	while (h)
	{
		printf("%d\n", h->n);
		numnode++;
		h = h->next;
	}

	return (numnode);
}
