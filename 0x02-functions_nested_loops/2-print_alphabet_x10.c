#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, alp;

	alp = 0;

	while (alp = 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		alp++;
		_putchar('\n');
	}
}
