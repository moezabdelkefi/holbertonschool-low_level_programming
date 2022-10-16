#include "main.h"
#include <stdio.h>
/**
 * leet - unction that encodes a string into 1337
 * ONE if, TWO loops only...
 * @n: input
 * Return: Always 0 (Success)
 */
char *leet(char *n)
{
	int i, a;
	int find[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replacer[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			if (n[i] == find[a])
			{
				n[i] = replacer[a / 2];
				a = 9;
			}
		}
	}

	return (n);
}
