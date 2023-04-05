#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a lisint_t list
 * @head: Double pointer to list
 *
 * Return: void.
 * AUTHOR: BASIL BASSEY
 */

void free_listint2(listint_t **head)
{
	listint_t *next_node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
	}
}

