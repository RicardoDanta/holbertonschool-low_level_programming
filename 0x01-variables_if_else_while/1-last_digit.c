#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
L = n % 10;
if (L > 0)
printf("%s %d is %d and is greater than 0\n", str, n, L);
else if (L == 0)
printf("%s %d is %d and is 0\n", str, n, L);
else if (L < 0)
printf("%s %d is %d and is less than 0\n", str, n, L);
return (0);
}
