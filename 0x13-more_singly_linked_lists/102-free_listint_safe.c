#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * _ra - a function that reallocates memory for an array of
 * pointers to the nodes in a linked list
 * @list: the old list to append
 * @size: size of the new list (always one more than the old list)
 * @new: new node to add to the list
 *
 * Return: pointer to the new list
 * AUTHOR: BASIL BASSEY
 */
listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	listint_t **new_list;
	size_t n;

	new_list = malloc(size * sizeof(listint_t *));

	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}

	n = 0;
	while (n < size - 1)
	{
		new_list[n] = list[n];
		n++;
	}

	new_list[n] = new;
	free(list);

	return (new_list);
}

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @head: the start of the list (double pointer)
 *
 * Return: the size of the list that was free’d
 * AUTHOR: BASIL BASSEY
 */
size_t free_listint_safe(listint_t **head)
{
	size_t n;
	size_t no = 0;
	listint_t **list = NULL;
	listint_t *next_node;

	if (head == NULL || *head == NULL)
		return (no);
	while (*head != NULL)
	{
		n = 0;
		while (n < no)
		{
			if (*head == list[n])
			{
				*head = NULL;
				free(list);
				return (no);
			}
			n++;
		}
		no++;

		list = _ra(list, no, *head);
		next_node = (*head)->next;
		free(*head);

		*head = next_node;
	}
	free(list);

	return (no);
}

