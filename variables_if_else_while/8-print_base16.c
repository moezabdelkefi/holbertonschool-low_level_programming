#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *main -a program that prints the alphabet in lowercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 9; num++)
		putchar((num % 10 + '0')

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
