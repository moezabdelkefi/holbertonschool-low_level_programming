#include "lists.h"
/**
 *dlistint_len - return the number of the elements
 *@h: argument
 *Return: the node of the elements
 */
size_t dlistint_len(const dlistint_t *h)
{

	int node;

	for (node = 0; h != NULL; node++)
		if (h != NULL)
		{
			h = h->next;
		}
	return (node);
}
