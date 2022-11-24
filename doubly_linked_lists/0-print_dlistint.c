#include "lists.h"
/**
 *print_dlistint - print all the elemente
 *@h: argument
 *Return: the node of all the element
 */
size_t print_dlistint(const dlistint_t *h)
{
	int node;

	for (node = 0; h != NULL; node++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (node);
}
