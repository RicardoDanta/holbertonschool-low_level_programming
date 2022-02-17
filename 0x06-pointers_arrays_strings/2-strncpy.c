#include "main.h"

/**
 *_strncpy - a function that copies a string
 *@src: string
 *@dest: string
 *@n: Something
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[a++])
	{
		b++;
	}
	for (a = 0; src[a] && a < n; a++)
	{
		dest[a] = src[b];
	}
	for (a = b; a < n; a++)
		dest[a] = '\0';

	return (dest);

}
