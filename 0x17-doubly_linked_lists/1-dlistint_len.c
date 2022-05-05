#include "lists.h"

/**
 * dlistint_len - a function that returns the num of elements...
 * @h: Something
 * Return: 0
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		h = h -> next;
		counter++;
	}
	return (counter);
}


