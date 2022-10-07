#include "main.h"
/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 *@n: input
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; ++)
		{
			for (j = 1; j <= i; j++)
			{
				putchar(' ');
			}
		}
	}
	else
	{
		_putchar('92');
		_putchar('/n');
	}
}
