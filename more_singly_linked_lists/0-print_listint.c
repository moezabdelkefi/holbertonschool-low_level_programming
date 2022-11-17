#include "lists.h"
/**
 *print_listint - print all the element of the list
 *@h: argument
 *Return: the element of the liste
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
