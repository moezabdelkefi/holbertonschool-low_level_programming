#include "search_algos.h"
/**
 *
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return -1;
	}

	for (i = 0; i < size; i++)
	{
		printf("value checked array [%d] = [%d]\n ", array[i], value);
		if (array[i] == value)
		{
			return i;
		}
	}

	return -1;
}
