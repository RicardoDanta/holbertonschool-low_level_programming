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
if (L > 5)
printf("%s %d is %d and is greater than 5\n", str, n);
else if (L == 0)
printf("%s %d is %d and is 0\n", str, n);
else (L < 6)
printf("%s %d is %d and is less than 6 and not 0\n", str, n);
return (0);
}
