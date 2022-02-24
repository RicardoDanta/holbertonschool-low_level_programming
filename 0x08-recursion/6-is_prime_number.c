#include "main.h"

/**
 * prime - function
 * @n: number
 * @i: number
 * Return: return cont
 */

int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		if ((n % i == 0) && (i != 1) && (i != n))
		{
			return (0);
		}
		if (i == n)
		{
			return (1);
		}
		return (prime(n, i + 1));
	}
	return (0);
}

/**
 * is_prime_number - function that
 * @n: number
 *Return: cont
 */

int is_prime_number(int n)
{
	return (prime(n, 1));
}
