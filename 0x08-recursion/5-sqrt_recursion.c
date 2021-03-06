#include <stdio.h>
#include "main.h"
/**
 * _sqr - return the square root
 * @x: Something
 * @n: Something
 * Return: square root
 */
int _sqr(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n)
		return (-1);
	return (_sqr(n, x + 1));
}

/**
 * _sqrt_recursion - function that returns
 * @n: the natural square root of a number
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (_sqr(n, 0));
}
