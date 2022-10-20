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
	int a;
	int b;
	int sum;
	char *s;

	sum = 0;
	b = 0;

	i = 1;
	while (i < argc)
	{
		s = argv[i];
		a = 0;
		while (s[a] != '\0')
		{
			if (s[a] < '0' || s[a] > '9')
			{
				printf("Error\n");
				return (1);
			}
			a++;
		}
		i++;
	}

	for (i = 1; i < argc; i++)
	{
		b = atoi(argv[i]);
		sum = sum + b;
	}
	printf("%d\n", sum);
	return (0);
}