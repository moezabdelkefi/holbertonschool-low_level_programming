#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@n: input value
 * Return:1
 */
int _sqrt_recursion(int n)
{
	int i = 0, result = 1;

	if (n == 1 || n == -1)
		return (n);

	while (result <= n)
	{
		i++;
		result = i * i;
	}
	return (i - 1);
}
