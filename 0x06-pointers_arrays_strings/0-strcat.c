#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: a
 * @scr: b
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; a++)
		;
		{
			dest[a] = src[b];
				a++;
		}
			dest[a] = '\0';
			return (dest);
}
