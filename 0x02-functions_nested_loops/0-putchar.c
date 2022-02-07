#include <stdio.h>
#include "_putchar.c"
/**
* main - main.c
*
* Return: 0
*/
int main(void)
{
	char putchar[9] = "_putchar\n"
		; int i
	for (i = 0; i < 10; i++)
		{
		_putchar(putchar[i]);
	}
	return (0);
}
