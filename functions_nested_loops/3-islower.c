#include "ctype.h"
/**
 * _islower - check the character.
 * @c: single letter input
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
