#include "main.h"
/**
 * print_square - function that checks for uppercase character
 * @size: input
 * Return: 0 or less
 */
void print_square(int size)
{
	int i = 0;
	int n = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (n < size)
			{
				_putchar('#');
				n++;
			}
		n = 0;
		i++;
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
