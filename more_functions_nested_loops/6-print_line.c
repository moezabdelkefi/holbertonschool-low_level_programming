#include "main.h"
/**
 * print_line- function that draws a straight line in the terminal
 *
 * @n: - integer to receive a number
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
