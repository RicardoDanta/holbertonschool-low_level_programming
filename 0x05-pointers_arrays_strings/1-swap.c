#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers
 *
 * @a: change to b
 * @b: change to a
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
