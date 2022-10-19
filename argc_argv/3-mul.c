#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number
 *@argv:input
 *@argc:input
 * Return:  0.
 */
int main(int argc, char *argv[])
{
	int i;

	int result = 1;

	for (i = 1; i < argc; i++)
	{
		result = result * strtol(argv[i], NULL, 10);
	}
	printf("%d\n", result);
	return (0);
}
