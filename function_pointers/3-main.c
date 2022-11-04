#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - a program that performs simple operations
 *@argc:input
 *@argv:input
 * Return: result ( a,b).
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	char op;

	int (*calc)(int, int);

	op = *(argv[2]);
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	calc = get_op_func(&op);
	if (calc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((op == '/' && b == 0) ||
		(op == '%' && b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	result = calc(a, b);
	printf("%d\n", result);
	return (0);
}
