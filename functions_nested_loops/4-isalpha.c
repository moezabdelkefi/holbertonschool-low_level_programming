#include "ctype.h"
/**
 *_isalpha - a function that check the alphabetic caracter.
 *@c: letter input.
 * Return: 1 or 0.
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
