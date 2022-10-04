#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *main -a program that prints the alphabet in lowercase
 *Return: Always 0 (Success)
 */
int main(void)
{
char i;

	for (i = 'z'; i <= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}