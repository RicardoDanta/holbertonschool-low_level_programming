#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: Fixing
 * Return: 1 if is a letter, 0 if is otherwise
 */
int _isdigit(int c)
{
	if (c >= 48  && c <= 57)
		return (1);
	else
		return (0);
}
