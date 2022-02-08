#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @lst: Something
 * Return: Last digit
 */
int print_last_digit(int lst)
{ lst = lst % 10;
	if (lst < 0)
	{
		lst = (lst * -1);
	}
	_putchar (lst + '0');
	return (lst);
}
