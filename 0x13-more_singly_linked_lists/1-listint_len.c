#include "lists.h"
/**
 * listint_len - a function that returns the number of elements
 * @h: Something
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t i;
	const listint_t *a;

	i = 0;
	a = h;
	while (a != NULL)
	{
		a = a->next;
		i++;
	}
	return (i);
}
