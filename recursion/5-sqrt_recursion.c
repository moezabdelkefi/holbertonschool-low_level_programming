#include "main.h"
#include <stdio.h>
/**
 * sqrt_check - function that returns the natural square root of a number
 *@x: input variable
 *@y:input variable
 * Return:1
 */
int sqrt_check(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else
		return (sqrt_check(x + 1, y));
}
/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@n: input value
 * Return:1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}
