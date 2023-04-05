#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - a function that frees a listint_t list
 * @head: double pointer to the list.
 *
 * Return: 0 if linked list is empty, n if not empty.
 * AUTHOR: BASIL BASSEY
 */
int pop_listint(listint_t **head)
{
	listint_t *begin_node;
	int n;
	if (head == NULL || *head == NULL)
		return (0);
	begin_node = *head;
	*head = begin_node->next;
	n = begin_node->n;
	free(begin_node);
	return (n);
}

