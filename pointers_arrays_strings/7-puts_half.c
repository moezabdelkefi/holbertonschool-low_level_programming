#include "main.h"
#include <string.h>
/**
 * puts_half - print a half of a string
 *@str: input value
 * Return: Always 0.
 */
void puts_half(char *str)
{

	int l, i, n;

	l = strlen(str);
	n = ((l - 1) / 2) +1;
	for (i = n; i <= l; i++)
	{
		printf("%c", str[i]);
	}
}
