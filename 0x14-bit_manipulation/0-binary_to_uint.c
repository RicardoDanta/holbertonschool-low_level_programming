#include "main.h"
/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: Something
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		converted <<= 1;
		converted += b[i] - '0';
		i++;
	}
	return (converted);
}
