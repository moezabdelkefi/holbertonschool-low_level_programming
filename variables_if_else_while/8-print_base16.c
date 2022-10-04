#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *main -a rogram that prints all the numbers of base 16 in lowercase
 *Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 48; num <= 57; num++)
		putchar(num);

	for (letter = 97; letter <= 102; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
