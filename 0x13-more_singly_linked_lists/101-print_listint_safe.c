#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @list: old list
 * @size: size of the new list, should be one more than the old list.
 * @new: new node to be added
 *
 * Return: pointer to the new list
 * AUTHOR: BASIL BASSEY
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **new_list;
	size_t n;

	new_list = malloc(sizeof(listint_t *) * size);

	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}

	for (n = 0; n < size - 1; n++)
		new_list[n] = list[n];

	new_list[n] = new;
	free(list);
	return (new_list);
}

/**
 * print_listint_safe - A function that prints a listint_t linked list.
 * @head: start of the list pointer
 *
 * Return: number of nodes.
 * AUTHOR: BASIL BASSEY
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n, no = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (n = 0; n < no; n++)
		{
			if (head == list[n])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (no);
			}
		}
		no++;

		list = _r(list, no, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free(list);

	return (no);
}

