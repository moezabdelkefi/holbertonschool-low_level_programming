#include <stdio.h>
#include "variadic_functions.h"
#include "stdarg.h"
/**
 * print_strings - print string
 *@separator: input
 *@n: input
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list args;
	unsigned int i;
	char *list;

	if (separator == NULL)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		list = va_arg(args, char *);
		if (list == NULL)
		{
			list = "(nil)";
		}
		printf("%s", list);
		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
