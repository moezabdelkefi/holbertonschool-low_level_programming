#include <stdlib.h>
#include <stdio.h>
/**
 * _isupper- a function that checks for uppercase character
 *@c: alphabet input
 *Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		 return (0);
		return (1);
}
