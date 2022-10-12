#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - a function that concatenates two strings
 *@dest: string
 *@src: string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int l, s;

 	l = strlen(src);
	s = strlen(dest);
	for (i = '0'; i <= l; i++)
	{
		dest[s + i] = src[i];
	}
	return (dest);
}
