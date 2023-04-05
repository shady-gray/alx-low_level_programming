#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t
 * @head: double pointer to head
 *
 * Return: a pointer to the first node of the reversed list
 * AUTHOR: BASIL BASSEY
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	previous_node = NULL;

	while (*head != NULL)
	{
		next_node = (*head)->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}

	*head = previous_node;

	return (*head);
}

