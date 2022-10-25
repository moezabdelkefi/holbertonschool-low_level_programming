#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  string_nconcat -  a function that concatenates two strings
 *@s1:input
 *@s2:input
 *@n: variable
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, i, j;
	char *array;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != '\0'; x++)
		;
	for (y = 0; s2[y] != '\0'; y++)
		;
	if (n >= y)
	{
		n = y;
	}
	array = malloc((x + n + 1) * sizeof(char));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		array[i] = s1[i];
	}
	for (j = x; j < x + n; j++)
	{
		array[j] = s2[j - x];
	}
	array[j] = '\0';
	return (array);
}
