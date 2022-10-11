#include "main.h"
#include <string.h>
/**
 * puts2 - a function that prints every other character of a string
 *@str: input value
 * Return: Always 0.
 */
void puts2(char *str)
{
	int l, i;

	l = strlen(str);
	for (i = 0; i <= l - 1; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
