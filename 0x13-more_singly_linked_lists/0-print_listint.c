#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a listint_t list
 * @h: Something
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	size_t a;
	const listint_t *i;

	a = 0;
	i = h;

	while (i != NULL)
	{
		printf("%d\n", i->n);
		i = i->next;
		a++;
	}
	return (a);
}
