#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * simple_print_buffer - prints buffer in hexa
 *@size: input
 *@c: input
 * Return: create arr
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(char) * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		a[b] = c;
	return (a);
}
