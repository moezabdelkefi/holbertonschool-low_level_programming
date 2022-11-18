#include "lists.h"
/**
 *get_nodeint_at_index - a function that returns the nth node
 *@head: argument
 *@index: argument
 *Return: current
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
			return (current->next);
		count++;
		current = current->next;
	}
	return (current);
}
