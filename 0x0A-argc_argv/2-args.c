#include "main.h"
/**
 * main - a program that prints all arguments it receives
 * @argc: Something
 * @argv: Something
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
