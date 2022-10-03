#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -a program that prints the alphabet in lowercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)

{
	if (ch != 'A' && ch != 'Z')
{
	putchar(ch);
}
}
	putchar(\n);

	return (0);
}
