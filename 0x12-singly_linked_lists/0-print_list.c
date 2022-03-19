#include "lists.h"
/**
 * print_list - a function that prints all the elements
 * @h: Something
 * Return: 2
 */
size_t print_list(const list_t *h)
{
	size_t a;
	const list_t *n;

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
