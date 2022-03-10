#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function
 * @array: Something
 * @size: Something
 * @action: Something
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
