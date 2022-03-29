#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: Something
 * @text_content: Something
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int x, n;
	unsigned int len;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = " ";

	x = open(filename, O_TRUNC | O_CREAT | O_RDWR, 0600);
	len = strlen(text_content);
	n = write(x, text_content, len);

	if (x == -1 || n == -1)
		return (-1);

	close(x);
	return (1);
}
