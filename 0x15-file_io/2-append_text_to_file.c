#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: File's name
 * @text_content: File's content
 * Return: 1 if the file exists, -1 if the file doesn't exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int x;
	unsigned int len;

	if (filename == NULL)
		return (-1);

	x = open(filename, O_WRONLY | O_APPEND);
	if (x == -1)
		return (-1);

	if (text_content != NULL)

	len = strlen(text_content);
	write(x, text_content, len);

	close(x);

		return (1);
}
