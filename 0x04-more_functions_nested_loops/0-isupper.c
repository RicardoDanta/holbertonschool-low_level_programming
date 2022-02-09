#include "main.h"
/**
 * _isupper - a function that checks for lowercase character
 *@c: Algo
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')

		return (1);
	else
		return (0);
}
