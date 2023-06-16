#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints elements in list
 * @h: beginning of linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t m = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		m++;
	}
	return (m);
}
