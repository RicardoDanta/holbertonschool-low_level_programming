#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @str: Something
 * Return: 0
 */
char *_strdup(char *str)
{
	int a = 0;
	int i = 0;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
