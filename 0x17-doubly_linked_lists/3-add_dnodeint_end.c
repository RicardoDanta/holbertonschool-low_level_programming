#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: Something
 * @n: Something
 * Return: 0
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
{
	dlistint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;
	else
	{
		lastnode = *head;
		while (lastnode->next)
			lastnode = lastnode->next;

		lastnode->next = newnode;
	}
	return (newnode);
}
