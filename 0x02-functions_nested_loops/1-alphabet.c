#include <stdio.h>
#include "main.h"
/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		_putchar(low);
	_putchar('\n');

	return (0);
}
