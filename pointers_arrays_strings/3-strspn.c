#include "main.h"
/**
 *_strspn - gets the length of a prefix substring
 *@s: the adress of the first element in the string
 *@accept: is a pointer to the caractere "oleh"
 *Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (count);
}
