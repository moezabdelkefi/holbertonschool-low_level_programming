#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse string
 *@s: reverse
 * Return: Always 0.
 */
void rev_string(char *s)
{
	{
	int i = 0, m = 0;
	char tmp;

	while (s[i++])
		m++;

	for (i = m - 1; i >= m / 2; i--)
	{
		tmp = s[i];
		s[i] = s[m - i - 1];
		s[m - i - 1] = tmp;
	}
}
}
