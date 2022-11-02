#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as a parameter
 *@size: input
 *@action:input
 *@array:input
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action && array)

	{
		for (i = 0; i < size; i++)
		{
			action(*array);
			array++;
		}
	}
}
