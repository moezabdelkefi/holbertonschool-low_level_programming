#include "lists.h"
/**
 *get_dnodeint_at_index -  a function that returns the nth node
 *@head: argument
 *@index: argument
 *Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int count = 0;
	if (head)
	{
		while (current != NULL)
		{
			if (count == index)
				return (current);
			current = current->next;
			current++;
		}
	}
	return (NULL);
}
