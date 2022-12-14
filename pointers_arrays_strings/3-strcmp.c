#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcmp - function that compares two strings
 *@s1: input
 *@s2: input
 * Return: flag.
 */
int _strcmp(char *s1, char *s2)
{
	int flag;

	while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	flag = (*s1 - *s2);
	if (flag == 0)
		return (0);
	else
		return (flag);
}
