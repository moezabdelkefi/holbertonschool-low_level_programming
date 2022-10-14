#include "main.h"
#include <stdio.h>
/**
 * string_toupper -  function that changes all lowercase 
 * Return: Always 0.
 */
char *string_toupper(char *s)
{
	int i;
	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
