#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node to front of list
 * @head: doble pointer
 * @n: number to be added
 *
 * Return: pointer to new node (on success)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;

	if (new->next != NULL)
		(new->next)->prev = new;
	return (new);
}
