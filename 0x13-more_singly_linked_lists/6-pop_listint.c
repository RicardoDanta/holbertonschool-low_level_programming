#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a listint_t
 * @head: Something
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

		if (*head == NULL)
		return (0);

		temp = *head;
		num = temp->n;
		*head = temp->next;

		free(temp);
		return (num);
}
