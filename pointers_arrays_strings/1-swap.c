#include "main.h"
#include <stdio.h>
/**
 * swap_int - swap the values
 * @a: value
 * @b: value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	  int temp;

	  temp = *a;
	*a = *b;
*b = temp;

}
