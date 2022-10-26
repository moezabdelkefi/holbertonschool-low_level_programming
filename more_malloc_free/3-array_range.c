#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range -  a function that creates an array of integers
 *@min: input
 *@max: input
 * Return: Always 0.
 */
int *array_range(int min, int max)
{
	int *s;
	int i;
	int j = 0;

	if (min > max)
	{
		return (NULL);
	}
	s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = min; i >= max; i++)
	{
		s[j] = i;
		j++;
	}
	return (s);
}
