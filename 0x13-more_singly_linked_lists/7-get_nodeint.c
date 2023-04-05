#include "lists.h"

/**
 * get_nodeint_at_index - A function that returns the
 * nth node of a listint_t linked list.
 * @head: pointer to the first node
 * @index: the index of the node
 *
 * Return: pointer of Index
 * AUTHOR: BASIL BASSEY
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	n = 0;
	while (n < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
		n++;
	}
	return (head);
}

