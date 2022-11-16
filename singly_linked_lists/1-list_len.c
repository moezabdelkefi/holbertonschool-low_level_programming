#include "lists.h"
/**
 *list_len - a function that returns the number of elements
 * @h: argument
 * Return: node
 */
size_t list_len(const list_t *h)
{
	int node;

	for (node = 0; h != NULL; node++)
		if (h != NULL)
		{
			h = h->next;
		}
	return (node);
}
