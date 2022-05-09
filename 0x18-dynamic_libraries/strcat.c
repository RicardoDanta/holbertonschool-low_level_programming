#include "main.h"

/**
*_strcat - function that concatenates two strings
*@src: Something
*@dest: Something
* Return: 0
*/
char *_strcat(char *dest, char *src)
{
	int x = 0, y;

	while (dest[x] != '\0')
	{
		x++;
	}
	for (y = 0; src[y] != '\0'; y++, x++)
	{
		dest[x] = src[y];
	}
	dest[x] = '\0';

	return (dest);

}
