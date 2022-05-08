#include "lists.h"

/**
 * free_dlistint - a function that frees the list
 * @head: Something
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
