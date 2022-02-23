#include <stdio.h>
#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: string
 * @n: Something
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int n;
	scanf(“%d”,&n);
	int arr[n];
	int i;
	for(i = 0; i < n; i++)
	{
		scanf(“%d”,&arr[i]);
	}
	printf(“Reversed array is:\n”);
	for(i = n-1; i >= 0; i–)
	{
		printf(“%d\n”,arr[i]);
	}
	return 0;
}
