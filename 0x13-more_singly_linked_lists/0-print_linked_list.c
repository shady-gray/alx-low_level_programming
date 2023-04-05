#include <stdio.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head of node
 *
 * Return: number of nodes.
 * @AUTHOR: BASIL BASSEY
 */
size_t print_listint(const listint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num);
}

