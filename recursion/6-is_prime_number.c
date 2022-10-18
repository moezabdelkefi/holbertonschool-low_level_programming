#include "main.h"
#include <stdio.h>
/**
 * check_prime_number - function that returns 1
 * @x: input varible
 * @y: input variable
 * Return: 1 or 0
 */
int check_prime_number(int x, int y)
{
	if (x == 1)
		return (0);
	if (y == x)
		return (1);
	if (y > x)
		return (0);
	if (x % y == 0)
		return (0);
	return (check_prime_number(x, y + 1));
}
/**
 * is_prime_number - function that returns 1
 * @n: input
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (check_prime_number(n, 2));
}
