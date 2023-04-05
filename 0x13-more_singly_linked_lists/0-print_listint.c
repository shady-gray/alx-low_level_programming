#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements 
 * of a listint_t list.
 * @h: head of node
 *
 * Return: number of nodes.
 * @AUTHOR: BASIL BASSEY
 */
size_t print_listint(const listint_t *h)
{
	size_t k;
	for (k = 0; h != NULL; k++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (k);
}

