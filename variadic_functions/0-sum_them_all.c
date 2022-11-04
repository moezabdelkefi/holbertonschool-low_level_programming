#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"
/**
 * sum_them_all - a function that returns the sum of all its parameters
 *@n: input
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0, x;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}

	va_start(args, n);

	return (sum);
}
