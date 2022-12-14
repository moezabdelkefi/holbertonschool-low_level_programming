#include "search_algos.h"
/**
 *linear_search - a function that searches for a value in an array of integers
 * @array: is pointer to the first element
 * @size: number of the element
 * @value: value to search for
 * Return: (-1)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
