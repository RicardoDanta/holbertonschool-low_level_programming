#include <stdio.h>
#include "main.h"

/**
 *_strlen - a function that copies the string...
 *@s: some
 *Return: thing
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}


/**
 *_strcpy - function that copies the string pointed to by src
 *@dest: some
 *@src: thing
 *Return: return
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);

}
