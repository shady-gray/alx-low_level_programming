#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - Write a function that adds
  * a new node at the end of a listint_t list.
  * @head: head of double pointer
  * @n: int add the list
  *
  * AUTHOR: BASIL BASSEY
  * Return: the address of the new element, if SUCCESS. NULL if failed.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp_node = *head;

	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;

	return (new_node);
}

