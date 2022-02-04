#include <stdio.h>

/**
 * main - 0123456789
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char letter;
	{
		for (num = '0'; num <= '9'; num++)
		putchar((num % 9) + '0');
		for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
