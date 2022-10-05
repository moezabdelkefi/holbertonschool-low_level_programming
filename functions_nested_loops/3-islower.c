#include "ctype.h"
/**
 * main - check the code.
 *  Return: 1 if int c is lowercase, 0 if otherwise
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
