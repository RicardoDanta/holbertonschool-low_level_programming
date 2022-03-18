#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: Something
 * Return: 0
 */

size_t print_list(const list_t *h)
{
	const list_t *n;
	size_t a;
	a = 0;
	n = h;

	while (n != NULL)
	{
		if (n->str)
			printf("[%d] %s\n", n->len, n->str);
		else
			printf("[0] (nil)\n");
		n = n->next;
		a++;
	}
	return (a);
}
