#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;
	char *cn;

    concat = string_nconcat("Best ", "School !!!", 6);
	cn = string_nconcat("tik", "Hello", 12);
    printf("%s\n", concat);
	printf("%s\n", cn);
    free(concat);
	free(cn);
    return (0);
}