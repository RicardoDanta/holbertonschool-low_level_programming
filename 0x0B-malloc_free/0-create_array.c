#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @c: Something
 * @size: Something
 * Return: Always 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)

	{
		return (NULL);
	}
	a = malloc(size * sizeof(*a));
	if (a == 0)
	{
		return ('\0');
	}
	for (i = 0 ; i < size; i++)
		a[i] = c;

	return (a);

}
