#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning
 * @head: Something
 * @newNode: Something
 * Return: 0
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t = newNode
	newNode = malloc(sizeof(dlistint_t));
	{

	if (!newNode)
		return (NULL);

		newNode->n = n;
		newNode->next = head;
		newNode->prev = NULL;

		if (*head != NULL)
			head->prev = newNode;
			*head = newNode;
	}
			return (newNode);
}

