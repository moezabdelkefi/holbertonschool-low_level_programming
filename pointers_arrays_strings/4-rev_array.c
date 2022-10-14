#include "main.h"
#include <stdio.h>
/**
 *  reverse_array - reverse the content of an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int b;
	int tmp;

	for (b = 0; b < n--; b++)
	{
		tmp = a[b];
		a[b] = a[n];
		a[n] = tmp;
	}
}
