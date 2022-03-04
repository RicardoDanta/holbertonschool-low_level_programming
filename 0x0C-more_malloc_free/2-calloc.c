#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 *@nmemb: Something
 *@size: Something
 *Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = (unsigned int *)calloc(nmemb, size);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
