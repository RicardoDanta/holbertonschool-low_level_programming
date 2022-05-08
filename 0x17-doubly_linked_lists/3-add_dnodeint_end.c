#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: Something
 * @n: Something
 * Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *lastnode = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		newnode->prev = NULL;
	}
	else
	{
		while (lastnode->next != NULL)
			lastnode = lastnode->next;

		lastnode->next = newnode;
		newnode->prev = lastnode;
	}
	return (newnode);
}
