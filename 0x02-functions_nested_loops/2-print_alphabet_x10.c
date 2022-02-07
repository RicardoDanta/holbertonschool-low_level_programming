#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	char n;
	int i = 0;
	
	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; ++n)
		{
			_putchar(n);
		}
		i++;
		_putchar('\n');
	}
}
