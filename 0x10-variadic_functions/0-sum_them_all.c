#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n: Something
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list(a);
	va_start(a, n);

	if (n == 0)
		return (0);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(a, unsigned int);

	va_end(a);
		return (sum);
}
