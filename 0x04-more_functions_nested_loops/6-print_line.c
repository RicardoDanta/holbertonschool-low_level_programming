#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: rtyui
 * Return: Always 0.
 */
void print_line(int n)
{
	int k;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
			_putchar('_');
	}
	_putchar ('\n');
}
