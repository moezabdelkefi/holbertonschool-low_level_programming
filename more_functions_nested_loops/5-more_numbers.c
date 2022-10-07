#include "main.h"
#include "stdio.h"
/**
 * more_numbers - a function that prints 10 times the numbers
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	char i, j, y, x;

	for (j = 0; j <= 9; j++)
	{

		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
				y = i;
			else
			{
				x = i / 10;
				y = i % 10;
				_putchar(x + '0');
			}
			_putchar(y + '0');
		}
		_putchar('\n');
	}
}
