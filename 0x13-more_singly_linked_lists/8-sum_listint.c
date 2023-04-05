#include "lists.h"

/**
 * sum_listint - a function that returns the
 * sum of all the data (n) of a listint_t linked list.
 * @head: pointer to the first node
 *
 * Return: 0, if list is empty. data_sum of linked_t linked list if not empty
 * AUTHOR: BASIL BASSEY
 */
int sum_listint(listint_t *head)
{
	int s = 0;

	while (head != NULL)
	{
		s += head->n;
		head = head->next;
	}

	return (s);
}

