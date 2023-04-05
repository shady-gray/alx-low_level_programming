#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - Write a function that frees a listint_t list.
 * @head: Head of the list.
 *
 * Return: void.
 * AUTHOR: BASIL BASSEY
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

