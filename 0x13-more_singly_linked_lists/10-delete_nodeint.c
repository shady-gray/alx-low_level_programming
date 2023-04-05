#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - a function that deletes the node
 * at index index of a listint_t linked list.
 * @head: double pointer to head
 * @index: index of node to be deleted
 *
 * Return: 1 if SUCCESS, -1 if failed
 * AUTHOR: BASIL BASSEY
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int n;
	listint_t *temp, *next_node;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		next_node = (*head)->next;
		free(*head);
		*head = next_node;
		return (1);
	}

	temp = *head;

	n = 0;
	while (n < index - 1)
	{
		if (temp->next == NULL)
			return (-1);
		temp = temp->next;
		n++;
	}

	next_node = temp->next;
	temp->next = next_node->next;
	free(next_node);
	return (1);

}

