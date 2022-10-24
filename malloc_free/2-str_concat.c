#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: input
 * @s2: input
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *array3;

	array3 = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	strcat(array3, s1);
	strcat(array3, s2);

	return (array3);
}
