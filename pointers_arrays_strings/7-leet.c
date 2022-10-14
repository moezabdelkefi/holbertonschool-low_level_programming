#include "main.h"
#include <stdio.h>
/**
 * leet -  function that encodes a string
 *@n: input string
 * Return: Always 0.
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
