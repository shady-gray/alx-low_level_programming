#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer to head of list
 *
 * Return: address of the node where the loop os or NULL if there's no loop
 * AUTHOR: BASIL BASSEY
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *o, *p;

	o = p = head;
	
	while (p && p->next && o)
	{
		o = o->next;
		p = p->next->next;

		if (o == p)
		{
			o = head;
			break;
		}
	}

	if (!p || !p->next || !o )
		return (NULL);

	while (o != p)
	{
		o = o->next;
		p = p->next;
	}

	return (p);
}

