#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: Something
 * @letters: Something
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, i, n;
	char *file;

	file = malloc(sizeof(char) * letters);
	if (file == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	i = read(x, file, letters);
	n = write(STDOUT_FILENO, file, i);

	if (i != n || x == -1 || i == -1 || n == -1)
		return (0);

	free(file);
	close(x);
	return (n);
}
