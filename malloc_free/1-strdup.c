#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -  a function that returns a pointer
 *@str: input
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	{
		char *p = malloc(strlen(str) + 1);

		if (p != NULL)
			strcpy(p, str);
		return (p);

	free(p);
	}
}
