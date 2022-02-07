#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet, in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int low;

	for (low = 'a'; low <= 'z'; low++)
	{
		_putchar(low);
	}
	_putchar('\n');
}
