#include "lists.h"

/**
 * listint_len - Write a function that returns the number
 * of elements in a linked listint_t list.
 * @h: pointer to head
 *
 * AUTHOR: BASIL BASSEY
 * Return: Number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
		h = h->next;

	return (num);
}

