#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: ad
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int b;
	int c;

	for (b = 1 ; b <= n ; b++)
	{
		for (c = 1 ; c < b; c++)
		{
			_putchar (' ');
		}
		_putchar ('\\');
		if (b != n)
			_putchar ('\n');
	}
	_putchar ('\n');
}
