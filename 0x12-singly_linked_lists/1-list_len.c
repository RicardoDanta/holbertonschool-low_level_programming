#include "lists.h"
/**
 * list_len - a function that return the number of elements
 * @h: Something
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;
	const list_t *a;

	i = 0;
	a = h;
	while (a != NULL)
	{
		a = a->next;
		i++;
	}
	return (i);
}


