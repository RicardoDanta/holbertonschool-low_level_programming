#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - a function that prints a string
 * @s: Something
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar ('\n');
			return;
	}
	else
	{
		putchar (*s);
		_puts_recursion(s + 1);
	}
}