#include "main.h"
#include <string.h>
/**
 * puts_half - print a half of a string
 *@str: input value
 * Return: Always 0.
 */
void puts_half(char *str)
{

int l, i;

	l = strlen(str);
	for (i = 5; i <= l - 1; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
