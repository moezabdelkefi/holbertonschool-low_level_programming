#include "main.h"
#include "stdlib.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @nld: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	int res = labs(a) % 10;

	_putchar('0' + res);
	return (res);
}
