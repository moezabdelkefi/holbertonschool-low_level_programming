#include "holberton.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int digit)
{
	int digit;

	digit = (nld % 10);

	if (pld < 0)
	{
		digit = (-1 * pld);
	}

	_putchar(digit + '0');
	return (pld);
}