#include "main.h"
#include <string.h>
/**
 * print_array-  a function that prints n elements of an array of integers
 *@a: input value
 *@n: input value
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n)
		{

			printf("%d", a[i]);
			printf(",");
			printf(" ");
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
