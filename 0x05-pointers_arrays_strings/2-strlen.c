#include "main.h"

/**
 * _strlen - a function that prints a string
 * @str: string to print
 * Return: Always 0
 */
int _strlen(char *s)
{
	char c;
	int i = 0;
	c = *s;

	while (c != '\0')
	{
		i++;
		c = *(s + i);
	}
	return (i);
}
