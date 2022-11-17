#include "lists.h"
/**
 *listint_len - a function that returns the number of elements
 *@h:argument
 *Return: elements
 */
size_t listint_len(const listint_t *h)
{
	int x = 0;

	if (h)
	{
		x = listint_len(h->next);
		return (x + 1);
	}
	else
		return (x);
}
