#include <stdlib.h>
#include "lists.h"


/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position
 * @head: double pointer to head
 * @idx: index of the node
 * @n: new value to be inserted
 *
 * Return: the address of new node, if SUCCESS. NULL, if failed.
 * AUTHOR: BASIL BASSEY
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *temp, *new_node;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		temp = *head;

		k = 0;
		while ( k < idx - 1 && temp != NULL)
		{
			temp = temp->next;
			k++;
		}

		if (temp == NULL)
			return (NULL);
	}

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}

