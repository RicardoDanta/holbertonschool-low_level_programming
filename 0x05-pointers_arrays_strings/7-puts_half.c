#include <stdio.h>
#include "main.h"

/**
 *puts_half - a function that prints half of a string
 *@str: Something
 *
 */
void puts_half(char *str)
{
	int pos = 0;
	int i = 0;
	int n = 0;

	while (str[pos] != '\0')
		pos++;

	if (pos % 2 == 0)
		n = pos / 2;

	else
		n = (pos + 1) / 2;


	for (i = n; i < pos; i++)
		putchar(str[i]);

	putchar('\n');
}
