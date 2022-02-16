#include "main.h"
/**
 *_strcat - a function that concatenates two strings
 *@dest: string
 *@src: string
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a] != '\0')
	{
		a++;
	}
	for (b = 0; src[b] != '\0'; b++, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
