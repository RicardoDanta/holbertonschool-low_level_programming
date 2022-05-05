#include "lists.h"
/**
 * print_dlistint - a function that prints all the elements of a list
 * @h: Something
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
		return (i);
}
