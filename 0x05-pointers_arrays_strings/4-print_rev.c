#include <stdio.h>
#include "main.h"
/**
 *print_rev - a function that prints a string in reverse
 *@s:ert
 *
 */
void print_rev(char *s)
{
	int pos = 0;
	int i = 0;

	while (s[pos] != '\0')
		pos++;

	for (i = pos - 1; i >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
