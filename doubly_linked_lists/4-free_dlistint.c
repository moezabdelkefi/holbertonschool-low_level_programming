#include "lists.h"
/**
 *free_dlistint - frees the list of nodes
 *@head : argument
 *Return: none
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;

	while (node)
	{

		dlistint_t *next = node->next;

		free(node);
		node = next;
	}
}
