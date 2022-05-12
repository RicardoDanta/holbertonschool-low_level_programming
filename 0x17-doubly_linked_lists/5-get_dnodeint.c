#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: Something
 * @index: Something
 * Return: 0
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nd;
	unsigned int i;
	i = 0;

	nd = head;

		if (head == NULL)
			return (NULL);
		while (nd != NULL)
		{
			if (i == index)
				return (nd);

			i++;
			nd = nd->next;
		}
			return (nd);
}
