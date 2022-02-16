#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: string
 * @src: string
 * @n: Something
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a])
	{
		a++;
	}
	while (src[b] && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
