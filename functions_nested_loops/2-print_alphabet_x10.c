#include "main.h"
/**
 * print_alphabet_x10 - check the code.
 *
 * Return: Void.
 */
void print_alphabet_x10(void)
{
	int n, counter;

	counter = 0;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}